#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;




    node(int val){
       data=val;
       left=NULL;
       right=NULL;
   } 
};



int main(){

    node*root=new node(1);
    root->left=new node(2);

    cout<<root->left->data;

}