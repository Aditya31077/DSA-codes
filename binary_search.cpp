#include<iostream>

using namespace std;

int binarysearch(int key,int arr[], int size){
    int low=0 , mid , high;
    high=size;
     while(low<=high){
         mid=(low+high)/2;

         if(arr[mid]>key){
             high=mid-1;
         }
         else if(arr[mid]<key){
             low=mid+1;
         }
         else if (arr[mid]==key){
             return mid;
         }
     }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];
    //For binary search the list must be sorted........
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<"th element"<<endl;
        cin>>arr[i];

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;

    int check;
    check=binarysearch(key,arr,size);

    cout<<check;
}