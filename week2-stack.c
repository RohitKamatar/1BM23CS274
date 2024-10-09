#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int ele)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow Cannot Push");

    }
    else
    {
        printf("Enter Element To POP");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Empty");
    }
    else
    {
        printf("Element %d is Popped",top);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
    printf("Stack Empty");
    }
    else
    {
        int i;
        printf("Stack Elements are: ");
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
}
int main()
{
    int choice,a;
    while(1) {
        printf("Enter Your Choice");
        printf("1. PUSH, 2.POP, 3.Display, 4.Exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter value :");
                scanf("%d",&a);
                push(a);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default: printf("Invalid Choice");
        }
    }
    return 0;
}
