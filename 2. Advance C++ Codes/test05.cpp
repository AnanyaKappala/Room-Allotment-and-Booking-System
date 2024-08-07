#include<iostream>
using namespace std;
class myClass{
    public:
    int x;
};
int main(){
    myClass myObj;
    myObj.x=23;
    cout<<myObj.x;
    return 0;
}

/*
#include<iostream>
using namespace std;
class myClass{
    public:
    int x;
    private:
    int y;
};
int main(){
    myClass myObj;
    myObj.x=15;
    myObj.y=20;
    cout<<myObj.x<<endl;
    cout<<myObj.y<<endl;
    return 0;
}
*/