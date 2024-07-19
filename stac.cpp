#include <iostream>
using namespace std;
#define MAXLEN 100

typedef struct{
    int element[MAXLEN];
    int top;
}stack;

stack init(){
    stack S;
    S.top = -1;
    return S;
}

int isEmpty(stack S)
{
    return(S.top==-1);
}


int isFull(stack S)
{return (S.top == MAXLEN -1);}


int top(stack S)
{
    if (isEmpty(S)){
        cout <<"Empty stack";
    }
    else{return S.element[S.top];}
}

stack push(stack S, int x)
{
    if (isFull(S))
    {
        cout << "stack Overflow"<< endl;
    }
    else{
    ++S.top;
    S.element[S.top] = x;}
    return S;
}

 stack pop(stack S, int x){
    if(isEmpty)
    {
        cout <<"stack underflow " << endl;
    }
    else
    {
        --S.top;
    }
    return S;
}

void printStack(stack S)
{
    int i;
    for(i=S.top ; i>=0 ; --i)
    {
        cout << S.element[i] << "    ";
    }
}

int main()
{
    stack S;
    S = init();
    S=push(S,10);
    S=push(S,45);
    S = push(S,1);
    S = push(S, 50);
    cout << "Current stack" << endl;
    printStack(S);
   
    return 0;
}
