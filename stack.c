/*
#include <limits.h>
#include <stdlib.h>
#include<stdio.h>

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
  


int main(){
   
 struct Stack* stack = createStack(100);

   
    return 0;
}
*/
/*int main()
{
   char a[20], b[20];
   int i = 0, j = 0;

   scanf("%s", &a[i]);
   while (a[j] != '\0')
   {
      if (a[i] == '(' || a[i] == '{' || a[i] == '[')
      {
         b[j] = a[i];
         j++;
      }
   }
   printf("ind vs eng ");
   return 0;
}*/

/*
#include <stdio.h>
int pop(int stack[], int size, int top)
{
    if (top == 0)
    {
        printf("%d Underflow", stack[0]);
        return 0;
    }
    int item = stack[top];
    printf("%d", item);
    top = top - 1;
    return pop(stack, 10, top);
}
int main()
{
    int stack[4], size = 5, top;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &stack[i]);
    }
    pop(stack, 10, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d", stack[i]);
    }
    return 0;
}
*/



// C program for array implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// A structure to represent a stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
  
// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
  
// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
  
// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
  
// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
  
// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
  
// Function to return the top from stack without removing it
int peek(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}


/*       binary to decimal               


int main()
{
    struct Stack* stack = createStack(100);
  int element,r,t;
 
  scanf("%d",&element);
while (element != 0){
r=element%2;
push(stack,r);
element=element/2;}


while (!isEmpty(stack)){
t=pop(stack);
printf("%d",t);
}

    //push(stack, 10);
    //push(stack, 20);
    //push(stack, 30);
    
    //printf("%d popped from stack\n", pop(stack));
  
    return 0;
}*/

/*                      decimal  to  any base(up to 36) using dat          */
int main()
{   char dat[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    struct Stack* stack = createStack(100);
  int element,r,t,base;
  scanf("%d",&base);
  scanf("%d",&element);
while (element != 0){
r=element%base;
push(stack,r);
element=element/base;}


while (!isEmpty(stack)){
t=pop(stack);
printf("%c",dat[t]);
}

    //push(stack, 10);
    //push(stack, 20);
    //push(stack, 30);
    
    //printf("%d popped from stack\n", pop(stack));
  
    return 0;
}


