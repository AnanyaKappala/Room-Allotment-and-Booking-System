/* Test two values to find out if 20 is greater than 18. If the condition is true, print some text.*/

/*
#include<iostream>
using namespace std;
int main(){
    int a=20, b=18;
    if(a>b){
        cout<<a<<" is greater than "<<b; 
    } else{
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    if(20>18){
        cout<<"20 is greater than 18.";
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    int x=20;
    int y=18;
    if (x>y){
        cout<<"x is greater than y.";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    float a=20.99,b=20.25;
    if(a>b){
        cout<<a<<" is greater than "<<b;
    } else{
        cout<<a<<" is not greater than "<<b;
    }
}

#include<iostream>
using namespace std;
int main(){
    int a=23,b=26,c=9;
    if(a>b){
        cout<<a<<" is greater that "<<b;
    } else if(b>c){
        cout<<b<<" is greater that "<<c;
    } else{
        cout<<c<<" is greater that "<<a;
    }
    return 0;
}

Ternary Operator
#include<iostream>
using namespace std;
int main(){
    int a=6,b=3;
    int c=a>b?a:b;
    cout<<c;
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number 1: ";
    int a;
    cin>>a;
    cout<<"Enter number 2: ";
    int b;
    cin>>b;
    if (a>b){
        cout<<a<<" is greater than "<<b;
    } else{
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}