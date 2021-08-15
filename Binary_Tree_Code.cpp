#include<iostream>
#include<stdlib.h>

using namespace std;

class node{
  public:
  int data;
  node* lchild;
  node* rchild;
};

class queue{
    public:
    int rear , front , size;
    node** arr;

};

node*root;

void createqueue(queue* q,int s){
    
    q->size=s;
    q->rear=q->front=0;
    q->arr=new 
    
}

void enqueue(queue*q,node*x){
    if(((q->rear+1)%q->size)==(q->front)){
        cout<<"Full";
        return;
    }
    q->rear=(q->rear+1)%q->size;
    q->arr[q->rear]=x;
}

node * dequeue(queue*q){
    node*x=NULL;
    if(q->rear==q->front){
        cout<<"Empty";
        
    }
    q->front=(q->front)%q->size;
    x=q->arr[q->front];

    return x;
}

bool isEmpty(queue *q){
    return q->rear=q->front;
}

void create(){
    node *t ,*p;
    int x;
    queue*q;
    createqueue(q,20);
    root=new node;
    root->data=4;
    root->lchild=root->rchild=NULL;
    enqueue(q,root);

    while(!isEmpty){
        p=dequeue(q);
        int x=5;
        if(x!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(q,t);
        }
        int m=5;
        if(m!=-1){
            t=new node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(q,t);
        }
    }

}

void preorder(node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

int main(){
    create();
    preorder(root);
}