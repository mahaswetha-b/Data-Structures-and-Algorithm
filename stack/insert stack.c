#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int main()
{
    int n,value;
    printf("Enter number of elements to insert(max %d):",MAX);
    scanf("%d",&n);
    if(n>MAX)
    {
        printf("Stack Overflow");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
        stack[++top]=value;
    }
    printf("Stack stored in an array:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    return 0;
}
