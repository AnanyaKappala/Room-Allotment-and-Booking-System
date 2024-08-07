/* #include<iostream>
using namespace std;
struct Person{
    char name[50];
    int age;
    float salary;
};
int main(){
    Person p;
    cout<<"Enter name: ";
    cin.get(p.name,50);
    cout<<"Enter age: ";
    cin>>p.age;
    cout<<"Enter salary: ";
    cin>>p.salary;
    cout<<"\n-Displaying Information-"<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary<<endl;
    return 0;
}

#include<iostream>
using namespace std;
struct Person{
    char name[50];
    int age;
    float salary;
};
void displayData(Person);
int main(){
    Person p;
    cout<<"Enter full name: ";
    cin>>p.name;
    cout<<"Enter age: ";
    cin>>p.age;
    cout<<"Enter salary: ";
    cin>>p.salary;
    displayData(p);
    return 0;
}
void displayData(Person p){
    cout<<"\n---Displaying Details---"<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary<<endl;
}
*/

#include<iostream>
using namespace std;
struct Person{
    char name[50];
    int age;
    float salary;
};
Person getData(Person);
void displayData(Person);
int main(){
    Person p, temp;
    temp=getData(p);
    p=temp;
    displayData(p);
    return 0;
}
Person getData(Person p){
    cout<<"Enter full name: ";
    cin.get(p.name,50);
    cout<<"Enter age: ";
    cin>>p.age;
    cout<<"Enter salary: ";
    cin>>p.salary;
    return p;
}
void displayData(Person p){
    cout<<"\n--Displaying Information--"<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary;
}