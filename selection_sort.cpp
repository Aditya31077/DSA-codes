#include<iostream>

using namespace std;


void selection_sort(int arr[] , int size){

    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }

}


int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the"<<i<<"th element"<<endl;
        cin>>arr[i];

    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    selection_sort(arr , size);




}
