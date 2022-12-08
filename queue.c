#include<stdio.h>
#include<stdbool.h>

struct queue
{
    int a[5];
    int f;
    int r;
}q;

/******************************************************************/
/**
void insertion(int val,int n){
    if(q.f==1&&q.r==1){       
        q.f=0;
        q.r=0;
        q.a[q.r++]=val;
        return;
    }
    if(q.f==0&&q.r==n||q.a==q.r+1){
     printf("queue overflow");
     return ;
    }
q.a[q.r++]=val;
}*/
/******************************************************************/
void insertion(int value){
  
  if(q.f<q.r)
  printf("overflow");
  else {
    if(q.r==5){
        q.r=1;
        q.r=value;
        q.r++;
    }
    else{
        q.r=value;
        q.r++;
    }
  }  
}
/*****************************************************************/
int deletion(){
    if(q.f==q.r)
    printf("underflow");
    else {

    }
}


/****************************************************************/


bool isempty(){
if(q.r==q.f){
    return true;}       //linear queue
    else 
    return false;
}


/*****************************************************************/
void enque(int value){
    
    if(q.r>=5){
        printf("overflow  \n");   //linear queue
    }
    else{
    q.a[q.r]=value;
    q.r++;
    }    
}

/******************************************************************/
int deque(){
    if(isempty()){
     printf("underflow \n");   //linear queue
     return 0 ;
    }
    else {
        int x=q.a[q.f];
        q.f--;
        return x;
    }
}

/*****************************************************************/
void initialize(){
q.r=0;
q.f=0;         //linear queue
}

/******************************************************************/

int del(int n){

if(q.f==-1){
    printf("queue underflow");
    return-1;
}
if(q.f==q.r){
    int i=q.a[q.f];
    q.f=-1;
    q.r=-1;
    return i;
}
q.f=(q.f+1)%n;
return q.a[q.f];
}

/*******************************************************************/


int main(){

void create(struct queue *q);
void insertion(int val,int n );
int del();

    return 0;
}

/*******************************************************************/

 

