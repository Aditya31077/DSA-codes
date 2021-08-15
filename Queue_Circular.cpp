#include<iostream>

using namespace std;

class queue{
    public:
    int rear,front,size;
    int *arr;
};

queue*createqueue(int s){
    queue*q=new queue();
    q->size=s;
    q->front=q->rear=0;
    q->arr=new int[q->size];
    return q;

}

void enqueue(queue *q ,int x){
    if(((q->rear+1)%q->size) == (q->front)){
        cout<<"Full";
        return;
    }
    q->rear=(q->rear +1)%q->size;
    q->arr[q->rear]=x;
}

void dequeue(queue *q){
    int x=-1;
    if(q->rear==q->front){
        cout<<"Empty";
    }
    q->front=(q->front +1)%q->size;
    x=q->arr[q->front];

}

void display(queue *q){
    int i=q->front +1;

    do{
        cout<<q->arr[i]<<" ";
        i=(i+1)%q->size;
    }while(i!= (q->rear+1)%q->size);
    cout<<endl;
}

int main(){
    queue*q=createqueue(5);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    display(q);
    dequeue(q);
    cout<<endl;
    display(q);
    enqueue(q,7);
    cout<<endl;
    display(q);

}