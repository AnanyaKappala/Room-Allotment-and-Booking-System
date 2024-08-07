/*
#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    sum=num1+num2;
    cout<<"Addition of "<<num1<<" & "<<num2<<" is "<<sum;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Largest number is "<<a;
    } else if(b>a && b>c){
        cout<<"Largest number is "<<b;
    } else if(c>a && c>b){
        cout<<"Largest number is "<<c;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,D,x1,x2,rp,ip;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>=0){
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"The roots of the quadratic equation "<<a<<"x2+"<<b<<"x+"<<c<<"=0 is "<<x1<<" and "<<x2;
    } else{
        rp=-b/(2*a);
        ip=sqrt(-D)/(2*a);
        cout<<"The roots of the quadratic equation "<<a<<"x2+"<<b<<"x+"<<c<<"=0 is "<<rp<<"+j("<<ip<<") and "<<rp<<"-j("<<ip<<")";
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int n,factorial=1,i=1;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=n){
        factorial=factorial*i;
        i=i+1;
    }
    cout<<"Factorial of "<<n<<" numbers is "<<factorial;
    return 0;
}