#include<iostream>

using namespace std;

void swap(int arr[], int i  , int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int partition(int arr[] , int low , int high){
     
     int pivot =arr[high];
     int i=low-1;

     for(int j=low;j<high;j++){
         if(arr[j]<pivot){
             i++;
             swap(arr , i,j);
         }
     }
     swap(arr , i+1, high);
     return i+1;

}


void quicksort(int arr[] , int low , int high){

    if(low<high){
        int pivot=partition(arr , low , high);

        quicksort(arr , low , pivot-1);
        quicksort(arr , pivot+1,high);
    }
}


int main(){
    int size;
    cout<<"Enter the size of the array you want "<<endl;
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element number "<<i+1<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    quicksort(arr , 0 , size-1);

    for(int i=0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }
}
