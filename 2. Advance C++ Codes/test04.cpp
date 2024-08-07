/* 
#include<iostream>
using namespace std;
class myClass{
    public:
    myClass(){
        cout<<"Hello World"<<endl;
    }
};
int main(){
    myClass myObj;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Car{
    public: 
    string brand;
    string model;
    int year;
    Car(string x,string y,int z){
        brand=x;
        model=y;
        year=z;
    }
};
int main(){
    Car carObj1("BMW","X5",1999);
    Car carObj2("Ford","Mustang",1969);
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z);
};
Car :: Car(string x, string y, int z){
    brand=x;
    model=y;
    year=z;
}
int main(){
    Car carObj1("Hyundai","Santro",2004);
    Car carObj2("Maruti","XL6",2019);
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.year<<endl;
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.year<<endl;
    return 0;
}
*/

#include<iostream>
#include<cstring>
using namespace std;
class String{
    private:
    char *s;
    int size;
    public:
    String(char *c);
    ~String();
};
String::String(char *c){
    size=strlen(c);
    s=new char[size+1];
    strcpy(s,c);
}
String::~String(){
    delete []s;
}