/* #include<iostream>
using namespace std;
void myFunction(){
    cout<<"My first function"<<endl;
}

void tanvi(){
    cout<<"My name is Tanvi Ananya"<<endl;
}

int main(){
    myFunction();
    tanvi();
    myFunction();
    myFunction();
    myFunction();
    return 0;
}

#include<iostream>
using namespace std;
void myFunction(){
    cout<<"Hello World\n";
}
int main(){
    for(int i=0;i<5;i++){
        myFunction();
    }
    return 0;
}

#include<iostream>
using namespace std;
void myFunction();
int main(){
    myFunction();
    return 0;
}
void myFunction(){
    cout<<"Code executed";
}

#include<iostream>
#include<string>
using namespace std;
void myFunction(string name){
    cout<<name<<" \n";
}
int main(){
    myFunction("Tanvi");
    myFunction("Ananya");
    myFunction("Kappala");
    return 0;
}

#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter integer 1: ";
    cin>>a;
    cout<<"Enter integer 2: ";
    cin>>b;
    cout<<"Sum: "<<add(a,b);
}

#include<iostream>
#include<string>
using namespace std;
void myFunction(string country="Norway"){
    cout<<country<<"\n";
}
int main(){
    myFunction("India");
    myFunction("Sweden");
    myFunction();
    myFunction("USA");
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
void myFunction(string name, int age){
    cout<<name<<" is "<<age<<" years old.\n";
}
int main(){
    myFunction("Tanvi",20);
    myFunction("Utkrist",22);
    myFunction("Nutan",16);
    return 0;
}
*/

#include<iostream>
using namespace std;
void swapNumbers(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int a=10,b=20;
    cout<<"Before swapping: a="<<a<<" b="<<b<<"\n";
    swapNumbers(a,b);
    cout<<"After swapping: a="<<a<<" b="<<b<<"\n";
    return 0;
}