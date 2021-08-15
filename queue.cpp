#include<iostream>

using namespace std;

class queue{
    public:
    int front , rear , size;
    int *arr;

};


queue*createqueue(int x){
    queue*Queue=new queue();
    Queue->front=Queue->rear=-1;
    Queue->size=x;
    Queue->arr=new int[Queue->size];
    return Queue;
}

void enqueue(queue*Queue,int x){
    if(Queue->rear==(Queue->size-1)){
        cout<<"Full";
        return;
    }
    if(Queue->front==-1){
        Queue->front++;
    }
    
    Queue->rear++;
    Queue->arr[Queue->rear]=x;
}

void dequeue(queue*Queue){
    if((Queue->front)>(Queue->rear)){
        cout<<"Empty";
        return;
    }
    Queue->front++;
    
}

void print(queue*Queue){
    for(int i=Queue->front;i<=Queue->rear;i++){
        cout<<Queue->arr[i]<<" ";

    }
}

int main(){
    queue*q=createqueue(5);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    print(q);
    dequeue(q);
    cout<<endl;
    print(q);
    enqueue(q,7);
    cout<<endl;
    print(q);
    dequeue(q);
    cout<<endl;
    print(q);
}