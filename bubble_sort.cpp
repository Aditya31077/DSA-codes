#include<iostream>

using namespace std;


void bubble_sort(int arr[], int size){
    int counter=1;
    while(counter<size-1){
        for(int i=0;i<size-counter;size++){
           
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
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

    bubble_sort(arr , size);
}