#include<stdio.h>
#include<conio.h>
#define MAX 5
typedef int item_type;
typedef struct
{
  item_type e[5];
  int top;
}stack;
void init(stack * sp);
void push(stack* sp,item_type item);
item_type pop(stack* sp);
item_type peek(stack* sp);
int size(int top);
int isempty(int top);
int isfull(int top);
void init(stack * sp)
{
   sp->top = -1;
}
void push(stack* sp,item_type item)
{
  if(isfull(sp->top))
  {
    puts("stack overflow!");
    return;
  }
  sp->e[++sp->top] = item;
}
item_type pop(stack* sp)
{
  if(isempty(sp->top))
  {
     puts("stack underflow!");
     return 0;
  }
  return sp->e[sp->top--];
}
item_type peek(stack* sp)
{
  if(isempty(sp->top))
  {
     puts("stack underflow!");
     return 0;
  }
  return sp->e[sp->top];
}
int isempty(int top)
{
  return top==-1;
}
int isfull(int top)
{
  return top==4;
}
int size(int top)
{
  return top+1;
}


















