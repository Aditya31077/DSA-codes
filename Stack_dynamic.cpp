#include<iostream>

using namespace std;

class stack{
    public:
    int top;
    int size;
    int *arr;

};

stack* createstack( int n){
    stack*Stack=new stack();
    Stack->top=-1;
    Stack->size=n;
    Stack->arr=new int[Stack->size];
    return Stack;
}


void push(stack*Stack , int x){
    if(Stack->top==Stack->size){
        cout<<"Full";
        return;


    }
    Stack->top++;
    Stack->arr[Stack->top]=x;
}
void pop(stack*Stack){
    if(Stack->top==-1){
        cout<<"Empty";
        return;
    }
    Stack->top--;

}

void print(stack*Stack){
    for(int i=0;i<=Stack->top;i++){
        cout<<Stack->arr[i]<<" ";
    }

}

int main(){
    int size;
    cout<<"Enter the size of the Stack"<<endl;
    cin>>size;
    stack *s=createstack(size);
    push(s,3);
    push(s,4);
    push(s,5);
    print(s);
    pop(s);
    cout<<endl;
    print(s);
    
}