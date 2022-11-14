//stack using linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Top;
Top *T=NULL;
void Push(int x)
{
Top *temp;
temp=(Top*)malloc(sizeof(Top));
if(temp==NULL)
{
    printf("\n Sorry Heap memory is full");
}
else{
temp->data=x;
temp->next=T;
T=temp;
}
}
void Pop()
{
    Top *temp;
    if(T==NULL)
    {
        printf("\n Stack is empty");
    }
    else{
       temp=T;
       T=T->next;
       free(temp);
    }
}
int Count(Top *p)
{
    int x=0;
    while(p!=NULL)
    {
        x++;
        p=p->next;
    }
    return x;
}
void Peek(Top *p,int index)

{
int x=0;

if(index<1 || index>Count(p))
{
    printf("\n Index is not present");
}
else{
    while(p!=NULL)
    {
      x++;
      if(x==index)
      {
        printf("%d ",p->data);
      }
      p=p->next;
    }
}
}
int StackTop()
{
    if(T==NULL)
    {
        printf("\n Stack is Empty");
        return -1;
    }
    else 
    return T->data;
}
void IsEmpty(Top *p)
{
    if(p==NULL)
    {
        printf("\n Yes stack is empty");
    }
    else{
        printf("\n No stack is not empty");
    }
}
void IsFull()
{
    Top *p=(Top*)malloc(sizeof(Top));
    if(p==NULL)
    {
        printf("\n stack is full");
    }
    else{
        printf("\n No stack is not full");
    }
}
void Display(Top *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
while(1)
{
int key;
printf("\n----------Menu drive of stack---------------");
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
        Push(x);
        break;
    }
    case 2:
    {
        Pop();
        break;
    }
    case 3:
    {
        int index;
        printf("\n Enter the index, to know the element");
        scanf("%d",&index);
        Peek(T,index);
        break;
    }
    case 4:
    {
        int t;
        t=StackTop(T);
        printf("\n %d",t);
        break;
    }
    case 5:
    {
        IsEmpty(T);
        break;
    }
    case 6:
    {
        IsFull();
         break;
    }
    case 7:
    {
        Display(T);
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
}
