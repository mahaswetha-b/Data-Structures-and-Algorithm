#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*head=NULL;
void append(int data)
{
struct node*newnode=malloc(sizeof(struct node));
newnode->next=head;
}
else
{
struct node*temp=head;
newnode->next=head;
void display()
{
struct node*temp=head;
do
{
printf("%d ",trmp->data);
tenp=temp->next;
while(temp!=head);
int main()
int n,data;
printf("Enter no.of node:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&data);
if(data>0)
{
append(data)
}
}
printf("The data in the nodes are:");
display();
}
