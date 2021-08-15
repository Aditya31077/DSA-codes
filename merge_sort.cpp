#include<iostream>

using namespace std;


void merge(int arr[], int low , int high , int mid){

    int n1=mid-low+1;
    int n2=high-mid;

    int a[n1] , b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0 , j=0 , k=low;

    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            arr[k]=b[j];
            k++; j++;
        }
        else{
            arr[k]=a[i];
            k++; i++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++; j++;
    }
 
}


void mergeSort(int arr[],int low , int high){

    if(low<high){
        int mid=(low+high)/2;

        mergeSort(arr,low , mid);
        mergeSort(arr,mid+1 , high);

        merge(arr,low , high , mid);
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

    mergeSort(arr, 0,size-1);

    for(int i=0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }

}