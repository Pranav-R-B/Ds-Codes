#include<stdio.h>
#define max 50
int st[max],top=-1;
void push(int ele)
{
if (top==max-1)
{
    printf("overflow");
}
    top++;
    st[top]=ele;
}
int pop()
{if (top==-1)
{
    printf("empty");
    return 0;
}
    int val = st[top];
    top--;
    return val;
}
void display(){
if (top==-1)
{
    printf("Empty");
}
for(int i=top;i>=0;i--)
{
    printf("%d ",st[i]);
}printf("\n");
}
int peep()
{
    if (top==-1)
    {
        printf("empty");
    }
    return st[top];
}
int main()
{
    int n;
    int choice;
        printf("1.push\n2.pop\n3.display\n4.peep\n5.exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
    while(choice!=5){

        switch(choice)
        {
            case 1:
                printf("enter the element : ");
                scanf("%d",&n);
                push(n);
                break;
            case 2:
                int el = pop();
                printf("%d\n",el);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("%d\n",peep());
                break;
        }
        printf("1.push\n2.pop\n3.display\n4.peep\n5.exit\n");
         printf("Enter your choice : ");
        scanf("%d",&choice);
        }
}




