#include<stdio.h>
#define MAX 50
int s[MAX],m[MAX];
int top=-1,mintop=-1;
void push(int x)
{
    s[++top]=x;
    if(mintop==-1 || x<=m[mintop])
     m[++mintop]=x;   
}
void pop()
{
    if(s[top]==m[mintop])
        mintop--;
        top--;
}
int getmin()
{
    return m[mintop];
}
int main()
{
    push(5);
    push(2);
    printf("%d\n",getmin());
    pop();
    printf("%d\n",getmin());
    push(-1);
    push(-5);
    printf("%d\n",getmin());
    return 0;
}
