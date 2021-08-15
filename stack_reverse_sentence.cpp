#include<iostream>
#include<string.h>

using namespace std;

class stack{
    public:
    int capacity;
    int top;
    char *array;

};

stack *createstack(int x){
    stack*Stack=new stack();
    Stack->capacity=x;
    Stack->top=-1;
    Stack->array=new char[(Stack->capacity*sizeof(char))];
    return Stack;
}

void push(stack*Stack , int item){
    if(Stack->top==Stack->capacity-1){
        cout<<"Overflow";
    }
    ++Stack->top;
    Stack->array[Stack->top]=item;
    
}


char pop(stack*Stack){
    if(Stack->top==-1){
        cout<<"Underflow";

    }
    return Stack->array[Stack->top--];
}


void reverse(char str[]){

    int n=strlen(str);
    stack*Stack=createstack(n);

    for(int i=0;i<n;i++){
        push(Stack , str[i]);

    }
    for(int i =0;i<n;i++){
        str[i]=pop(Stack);
    }
}



int main(){
    char str[]="Aditya";

    reverse(str);
    cout<<endl;
    cout<<str;

}