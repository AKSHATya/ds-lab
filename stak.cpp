// PROGRAM FOR FINDING MAXIMUM AND MINIMUM IN A STACK

#include<bits/stdc++.h>
using namespace std;
#define TRUE 1
#define FALSE 0
#define size 20
struct Stack {
    int item[size];
    int top;
};
struct Stack S;

void Initialize(){
    S.top=-1;
}

void push(int x){
    if (S.top==(size-1)){
        cout<<"Stack Overflow";
        exit(1);
    }
    else{
        S.top=S.top+1;
        S.item[S.top]=x;
    }
}

int IsEmpty(){
    if (S.top==-1){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int Pop(){
    if(IsEmpty()){
        cout<<"Stack Underflow";
        exit(1);
    }
    else{
        int x=S.item[S.top];
        S.top=S.top-1;
        return x;
    }
}

void mindisplay(){
    int min=S.item[S.top];
    for(int i=S.top;i>0;i--){
        if(S.item[i]<min)
            min=S.item[i];
        }
    cout<<"Minimum element in the stack: "<<min<<endl;
}
void maxdisplay(){
    int max=S.item[S.top];
    for(int i=S.top;i>0;i--){
        if(S.item[i]>max)
            max=S.item[i];
    }
    cout<<"Maximum element in the stack: "<<max;
}
int main(){
    push(100);
    push(200);
    push(30);
    push(500);
    push (6);
    mindisplay();
    maxdisplay();
    
    cout<<endl;
}
