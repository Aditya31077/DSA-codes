 #include<iostream>


 using namespace std;

int linearsearch(int n ,int arr[] ,int len){
    for(int i=0;i<len;i++){
        if(arr[i]==n){
            return i;
        }
        
    }
    return -1;


}


int main(){
    int n;
    int arr[5]={10 , 44 , 67 , 89, 23};

    cout<<"Enter the key"<<endl;
    cin>>n;
    
    int check;
    check=linearsearch(n,arr ,5);

    cout<<check;



}