/*
#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    string brand="Ford";
    void honk(){
        cout<<"Tuut,tuut!";
    }
};
class Car:public vehicle{
    public:
    string model="Mustang";
};
int main(){
    Car myCar;
    myCar.honk();
    cout<<"\n";
    cout<<myCar.brand+" "+myCar.model;
    return 0;
}

#include<iostream>
using namespace std;
class myself{
    public:
    void myFunction(){
        cout<<"Hello, I am a function!";
    }
};
class myChild:public myself{

};
class myGrandChild:public myChild{

};
int main(){
    myGrandChild myObj;
    myObj.myFunction();
    return 0;
}
*/

#include<iostream>
using namespace std;
class firstClass{
    public:
    void firstFunction(){
        cout<<"This is the first function!"<<endl;
    }
};
class secondClass{
    public:
    void secondFunction(){
        cout<<"This is the second function!"<<endl;
    }
};
class thirdClass:public firstClass, public secondClass{

};
int main(){
    thirdClass obj;
    obj.firstFunction();
    obj.secondFunction();
    return 0;
}