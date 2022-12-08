#include<stdio.h>

struct node
{
   int info;
   struct node *next;
}*a,*b,*c;


int main(){
int start;
a=(struct node*)malloc(sizeof(struct node)); 
b=(struct node*)malloc(sizeof(struct node));    
c=(struct node*)malloc(sizeof(struct node));       

a->info=2;
b->info=4;
c->info=8;
a->next=b;
b->next=c;
c->next='/';
start =a;

while(ptr!='/'){
    printf("%d",a->info)
}


}