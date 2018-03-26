#include<iostream>
using namespace std;

int main(){
int size;
cout<<"Enter the size of the array : ";
cin>>size;
int arr[size];
for(int i=0 ; i<size ; i++){
cout<<"Enter the element : ";
cin>>arr[i];
}
for(int i=0 ; i<size ; i++){
for(int j=0 ; j<size ; j++){
if(arr[j] > arr[j+1]){
int previous=arr[j];
arr[j]=arr[j+1];
arr[j+1]=previous;
}
}
}
for(int i=0 ; i<size ; i++){
cout<<arr[i]<< "-->";
}
return 0;
}


       
     
