/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="Pizza";
    cout<<"Value in the variable: "<<food<<"\n";
    cout<<"Address of the variable: "<<&food<<"\n";
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="Pizza";
    string* ptr=&food;
    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string food="Pizza";
    string* ptr=&food;
    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<*ptr<<endl;
    *ptr="Burger";
    cout<<*ptr<<endl;
    cout<<food<<endl;
    return 0;
}