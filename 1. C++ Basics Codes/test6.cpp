/* 
#include<iostream>
using namespace std;
int main(){
    int i=0;
    while(i<5){
        cout<<i<<endl;
        i++;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int i=0,j=0;
    while(i<5){
        while (j<5){
            cout<<i<<" "<<j<<endl;
            j++;
        }
        i++;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    } while(i<5);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        cout<<i<<endl;
    }
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4]={"Hyundai","Honda","Maruti Suzuki","Audi"};
    for(int i=0;i<4;i++){
        cout<<cars[i]<<endl;
    }
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4]={"Hyundai","Honda","Maruti Suzuki","Audi"};
    cars[1]="Ferrari";
    for(int i=0;i<4;i++){
        cout<<cars[i]<<endl;
    }
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4]={"Hyundai","Honda","Maruti Suzuki","Audi"};
    cout<<"Original Array: "<<endl;
    for(int i=0;i<4;i++){
        cout<<cars[i]<<endl;
    }
    cout<<"Modified Array: "<<endl;
    cars[1]="Ferrari";
    for(int i=0;i<4;i++){
        cout<<cars[i]<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string cars[4]={"Hyundai","Honda","Maruti Suzuki","Audi"};
    for(int i=0;i<4;i++){
        cout<<i<<":"<<cars[i]<<endl;
    }
    return 0;
}