#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node * next; 
};

class stack{
    node*top;
    public:
    stack(){
        top=NULL;
    }

    void push(int x){
        node *temp = new node;
        if(temp==NULL){
            cout<<"Overflow"<<endl;
        }
        else{
        temp->data=x;
        temp->next=top;
        top=temp;
        }
    }

    void pop(){
        int x=-1;
        if(top==NULL){
            cout<<"Underflow"<<endl;
        }
        x=top->data;
        node*temp=top;
        top=top->next;
        delete temp;
        

    }

    void print(){
        if(top==NULL){
            cout<<"Underflow";
        }

        node*temp=top;
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(5);

    s.print();


}