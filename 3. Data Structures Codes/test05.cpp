/*
#include<iostream>
using namespace std;
int main(){
    int i,j,temp,pass=0;
    int a[10]={10,2,0,14,43,25,18,1,5,45};
    cout<<"Input list: \n";
    for(i-0;i<10;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        pass++;
    }
    cout<<"Sorted list: \n";
    for(i=0;i<10;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\nNumber of passes taken to sort the list: "<<pass<<endl;
    return 0;
}
 
#include<iostream>
using namespace std;
int main(){
    int i,j,n,loc,temp,min,a[30];
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"\nEnter the elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                loc=j;
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"\nSorted list is as follows: ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int myArray[10]={12,4,3,1,15,45,33,21,10,2};
    cout<<"\nInput lis is: ";
    for(int i=0;i<10;i++){
        cout<<myArray[i]<<"\t";
    }
    for(int k=0;k<10;k++){
        int temp=myArray[k];
        int j=k-1;
        while(j>=0 && temp<=myArray[j]){
            myArray[j+1]=myArray[j];
            j=j-1;
        }
        myArray[j+1]=temp;
    }
    cout<<"\nSorted list is: \n";
    for(int i=0;i<10;i++){
        cout<<myArray[i]<<"\t";
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
void merge(int array[],int const left, int const mid,int const right){
    auto const subArrayOne=mid-left+1;
    auto const subArrayTwo=right-mid;
    auto *leftArray=new int[subArrayOne],*rightArray=new int[subArrayTwo];
    for(auto i=0;i<subArrayOne;i++)
    leftArray[i]=array[left+i];
    for(auto j=0;j<subArrayTwo;j++)
    rightArray[j]=array[mid+1+j];
    auto indexOfSubArrayOne=0,indexOfSubArrayTwo=0;
    int indexOfMergedArray=left;
    while(indexOfSubArrayOne<subArrayOne && indexOfSubArrayTwo<subArrayTwo){
        if(leftArray[indexOfSubArrayOne]<=rightArray[indexOfSubArrayTwo]){
            array[indexOfMergedArray]=leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        } else{
            array[indexOfMergedArray]=rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    while(indexOfSubArrayOne<subArrayOne){
        array[indexOfMergedArray]=leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    while(indexOfSubArrayTwo<subArrayTwo){
        array[indexOfMergedArray]=rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}
void mergeSort(int array[],int const begin,int const end){
    if(begin>=end){
        return;
    }
    auto mid=begin+(end-begin)/2;
    mergeSort(array,begin,mid);
    mergeSort(array,mid+1,end);
    merge(array,begin,mid,end);
}
void printArray(int A[],int size){
    for(auto i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int arr[]={12,11,13,5,6,7};
    auto arr_size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is \n";
    printArray(arr,arr_size);
    mergeSort(arr,0,arr_size-1);
    cout<<"\nSorted array is \n";
    printArray(arr,arr_size);
    return 0;
}