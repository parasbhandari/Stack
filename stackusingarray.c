//stack using array
#include<stdio.h>
#include<stdlib.h>
typedef struct Stack{
    int size;
    int Top;
    int *s;
}P;
void push(P *k,int x)
{
    if(k->Top==k->size-1)
    {
        printf("\n Stack is full");
    }
    else{
      k->Top++;
      k->s[k->Top]=x;
    }
}
void pop(P *k)
{
    if(k->Top==-1)
    {
        printf("\n Stack is Empty");
    }
    else{
        k->Top--;
    }
}
int peek(P *k, int index)
{
    int x=-1;
    if(index>(k->Top-1)){
        printf("\n Index is out of box");
        return x;
    }
    else{
        x=k->s[index];
        return x;

    }
}
int StackTop(P *k)
{
    if(k->Top==-1)
    {
        printf("\n Stack is Empty");
        return -1;
    }
    else
    return k->s[k->Top];
}
int IsEmpty(P *k)
{
    if(k->Top==-1)
    {
        return 1;
    }
    else
    return 0;
}
int IsFull(P *k)
{
    if(k->Top=k->size-1)
    {
        return 1;
    }
    else
    return 0;
}
void Display(P *k)
{
    int x=0;
    while(x!=k->Top+1)
    {
        printf("%d ",k->s[x]);
        x++;
    }
}
int main()
{
int key;
P k;
printf("\n Enter the size of stack");
scanf("%d",&k.size);
k.Top=-1;
k.s=(int*)malloc(sizeof(int)*k.size);
while(1)
{
printf("\n ----------Menu drive of stack-----------------");
printf("\n 1. To push an element in a stack\n");
printf("\n 2. To pop an element from a stack\n");
printf("\n 3. To find an element in a particular index\n");
printf("\n 4. To get the top element of a stack\n");
printf("\n 5. To check if the stack is empty or not\n");
printf("\n 6. To check if the stack is full or not\n");
printf("\n 7. To display the stack\n");
printf("\n 8. To exit\n");
scanf("%d",&key);
 switch(key)
{
    case 1:
    {
        int x;
        printf("\n Enter the Element you want to push in a stack");
        scanf("%d",&x);
        push(&k,x);
        break;
    }
    case 2:
    {
        pop(&k);
        break;
    }
    case 3:
    {
        int index;
        printf("\n Enter the index, to know the element");
        scanf("%d",&index);
        peek(&k,index);
        break;
    }
    case 4:
    {
        int t;
        t=StackTop(&k);
        printf("\n %d",t);
        break;
    }
    case 5:
    {
        int x;
        x=IsEmpty(&k);
        (x==1)?printf("\n Yes stack is empty"):printf("\n No stack is not empty");
        break;
    }
    case 6:
    {
        int x;
        x=IsFull(&k);
        (x==1)?printf("\n Yes stack is full"):printf("\n No stack is not full");
        break;
    }
    case 7:
    {
        Display(&k);
        break;
    }
    case 8:
    {
        return 0;
        break;
    }
    default:
    {
        printf("\n Please choose right index");
    }
}
}
return 0;
}
