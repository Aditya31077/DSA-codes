#include<iostream>

using namespace std;

void insertion_sort(int arr[] , int size){

    for(int i=1;i<size-1;i++){
        int current=arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
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
    insertion_sort(arr,size);

}
