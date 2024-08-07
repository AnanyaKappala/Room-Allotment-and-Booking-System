/* Following template function returns the maximum of two values.*/
/*
#include<iostream>
#include<string>
using namespace std;
template <typename T>
T Max(T a,T b){
    return a>b?a:b;
}
int main(){
    int i=39,j=20;
    cout<<"Max(i,j): "<<Max<int>(i,j)<<endl;
    double f1=13.5,f2=20.7;
    cout<<"Max(f1,f2): "<<Max<float>(f1,f2)<<endl;
    string s1="Hello";
    string s2="World";
    cout<<"Max(s1,s2): "<<Max<string>(s1,s2)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
template <typename T>
T myMax(T x,T y){
    return (x>y)?x:y;
}
int main(){
    cout<< myMax<int>(3,7)<<endl;
    cout<<myMax<double>(3.0,7.0)<<endl;
    cout<<myMax<char>('g','e')<<endl;
    return 0;
}
*/

#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<stdexcept>
using namespace std;
template <class T>
class stack{
    private:
    vector<T> elems;
    public:
    void push(T const&);
    void pop();
    T top() const;
    bool empty() const{
        return elems.empty();
    }
};
template <class T>
void stack<T>::pop(){
    if(elems.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
}
template <class T>
T stack<T>::top() const{
    if(elems.empty()){
        throw out_of_range("Stack<>::top():empty stack");
    }
    return elems.back();
}
int main(){
    try{
        stack<int> intStack;
        stack<string> stringStack;
        intStack.push(7);
        cout<<intStack.top()<<std::endl;
        stringStack.pop();
        stringStack.pop();
    } catch(exception const& ex){
        cerr<<"Exception: "<<ex.what()<<endl;
        return -1;
    }
}