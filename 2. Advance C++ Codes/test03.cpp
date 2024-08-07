/* #include<iostream>
using namespace std;
class myClass{
    public:
    void myMethod(){
        cout<<"Hello World"<<endl;
    }
};
int main(){
    myClass myObj;
    myObj.myMethod();
    return 0;
}

#include<iostream>
using namespace std;
class myClass{
    public:
    void myMethod();
};
void myClass::myMethod(){
    cout<<"Hello World"<<endl;
}
int main(){
    myClass myObj;
    myObj.myMethod();
    return 0;
}
*/

#include<iostream>
using namespace std;
class Car{
    public:
    int speed(int maxSpeed);
};
int Car::speed(int maxSpeed){
    return maxSpeed;
}
int main(){
    Car myObj;
    cout<<myObj.speed(200)<<endl;
    return 0;
}