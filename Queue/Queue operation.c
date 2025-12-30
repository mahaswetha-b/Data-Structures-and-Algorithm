#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
int main()
{
    int n,value;
    printf("Enter number of insertion(max %d):",MAX);
    scanf("%d",&n);
    if(n>MAX)
    {
        printf("Queue overflow too many elements\n");
        return 0;
    }
    front=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
        queue[++rear]=value;
    }
    printf("Queue sorted in a array:\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
    return 0;
}

