/*
#include<stdlib.h>
#include<iostream>
using namespace std;
#define MAX 10
struct stack{
    int items[MAX];
    int top;
};
typedef struct stack st;
void createEmptyStack(st *s){
    s->top=-1;
}
int isFull(st *s){
    if(s->top==MAX-1){
        return 1;
    } else {
        return 0;
    }
}
int isEmpty(st *s){
    if(s->top==-1){
        return 1;
    } else {
        return 0;
    }
}
void push(st *s, int newitem){
    if(isFull(s)){
        cout<<"Stack is full"<<endl;
    } else {
        s->top++;
        s->items[s->top]=newitem;
    }
}
void pop(st *s){
    if(isEmpty(s)){
        cout<<"Stack is Empty"<<endl;
    } else {
        cout<<"Item popped= "<<s->items[s->top];
        s->top--;
    }
    cout<<endl;
}
void printStack(st *s){
    printf("Stack\n");
    for(int i=0;i<=s->top;i++){
        cout<<s->items[i]<<" ";
    }
    cout<<endl;
}
int main(){
    st *s=(st *)malloc(sizeof(st));
    createEmptyStack(s);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);

    printStack(s);
    pop(s);
    cout<<"\nAfter popping out: \n";
    printStack(s);
    return 0;    
}

#include <iostream>
#include <string>
using namespace std;
#define MAX 50
struct stack {
    string items[MAX];
    int top;
};
typedef struct stack st;
void createEmptyStack(st *s) {
    s->top = -1;
}
int isFull(st *s) {
    return s->top == MAX - 1;
}
int isEmpty(st *s) {
    return s->top == -1;
}
void push(st *s, string newitem) {
    if (isFull(s)) {
        cout << "STACK FULL" << endl;
        return;
    } else {
        s->top++;
        s->items[s->top] = newitem;
    }
}
string pop(st *s) {
    if (isEmpty(s)) {
        cout << "STACK EMPTY" << endl;
        return "";
    } else {
        string item = s->items[s->top];
        s->top--;
        return item;
    }
}
void printStack(st *s) {
    cout << "Stack: ";
    for (int i = 0; i <= s->top; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}
int main() {
    st *s = new st;
    createEmptyStack(s);
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (char ch:word) {
        push(s, string(1, ch));
    }
    printStack(s);
    cout << "Reversed word: ";
    for (int i = 0; i < word.length(); i++) {
        cout << pop(s);
    }
    cout << endl;
    return 0;
}
*/

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;
#define MAX 50
struct stack {
    string items[MAX];
    int top;
};
typedef struct stack st;
void createEmptyStack(st *s) {
    s->top = -1;
}
int isFull(st *s) {
    return s->top == MAX - 1;
}
int isEmpty(st *s) {
    return s->top == -1;
}
void push(st *s, string newitem) {
    if (isFull(s)) {
        cout<<"STACK FULL"<<endl;
    } else {
        s->top++;
        s->items[s->top]=newitem;
    }
}
string pop(st *s) {
    if(isEmpty(s)) {
        cout <<"STACK EMPTY"<< endl;
        return " ";
    } else {
        return s->items[s->top--];
    }
}
string peek(st *s) {
    if (isEmpty(s)) {
        return " ";
    } else {
        return s->items[s->top];
    }
}
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}
string infixToPostfix(const string &infix) {
    st *s = new st;
    createEmptyStack(s);
    string postfix = "";
    for (char c : infix) {
        if (isspace(c)) continue; 
        if (isdigit(c)) {
            postfix += c; 
        } else if (c == '(') {
            push(s, string(1, c));
        } else if (c == ')') {
            while (!isEmpty(s) && peek(s) != "(") {
                postfix += pop(s);
            }
            pop(s);
        } else if (isOperator(c)) {
            postfix += ' ';
            while (!isEmpty(s) && precedence(peek(s)[0]) >= precedence(c)) {
                postfix += pop(s);
            }
            push(s, string(1, c));
        }
    }
    while (!isEmpty(s)) {
        postfix += ' ';
        postfix += pop(s);
    }
    delete s;
    return postfix;
}
double evaluatePostfix(const string &postfix) {
    st *s = new st;
    createEmptyStack(s);
    stringstream ss(postfix);
    string token;
    while (ss >> token) {
        if (isdigit(token[0])) {
            push(s, token);
        } else {
            double b = stod(pop(s));
            double a = stod(pop(s));
            double result;
            switch (token[0]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
            }
            push(s, to_string(result));
        }
    }
    double finalResult = stod(pop(s));
    delete s;
    return finalResult;
}
string infixToPrefix(const string &infix) {
    string reversedInfix = string(infix.rbegin(), infix.rend());
    for (char &c : reversedInfix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }
    string postfix = infixToPostfix(reversedInfix);
    string reversedPostfix = string(postfix.rbegin(), postfix.rend());
    return reversedPostfix;
}
double evaluatePrefix(const string &prefix) {
    st *s = new st;
    createEmptyStack(s);
    stringstream ss(prefix);
    vector<string> tokens;
    string token;
    while (ss >> token) {
        tokens.push_back(token);
    }
    for (int i = tokens.size() - 1; i >= 0; i--) {
        if (isdigit(tokens[i][0])) {
            push(s, tokens[i]);
        } else {
            double a = stod(pop(s));
            double b = stod(pop(s));
            double result;
            switch (tokens[i][0]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': result = a / b; break;
            }
            push(s, to_string(result));
        }
    }
    double finalResult = stod(pop(s));
    delete s;
    return finalResult;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin>>infix;
    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;
    double postfixResult = evaluatePostfix(postfix);
    cout << "Postfix Evaluation Result: " << postfixResult << endl;
    string prefix = infixToPrefix(infix);
    cout << "Prefix: " << prefix << endl;
    double prefixResult = evaluatePrefix(prefix);
    cout << "Prefix Evaluation Result: " << prefixResult << endl;

    return 0;
}