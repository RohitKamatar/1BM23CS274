#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
    int ele;
    if(top==MAX-1)
    {
        printf("Stack Overflow Cannot Push");

    }
    else
    {
        printf("Enter Element To Push \n");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow, cannot pop element");
    }
    else
    {
        printf("Element %d is Popped \n",top);
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
        printf("Stack Elements are: \n");
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
}
int main()
{
    int choice;
    while(1) {
        printf("Enter Your Choice \n");
        printf("1. PUSH \n, 2.POP \n, 3.Display \n, 4.Exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
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

OUTPUT:

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
Enter the element to be pushed: 10

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
Enter the element to be pushed: 20

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
1
Enter the element to be pushed: 30

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
3
The stack elements are:
30 20 10 

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
Element 30 is popped

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
3
The stack elements are:
20 10 

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
Element 20 is popped

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
3
The stack elements are:
10 

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
Element 10 is popped

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
2
Stack underflow, cannot pop element

Enter your choice:
1. Push
2. Pop
3. Display
4. Exit
4
Exiting the program
 
