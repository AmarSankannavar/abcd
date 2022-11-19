#include<stdio.h>
#include<stdlib.h>
#define MAX30
int n;
void create(int a[]);
void display(int a[]);
void insert(int a[],int ele, int pos);
void del(int a[], int pos);

int main()
{
int a[MAX],ch,ele,pos;

while(1)
{
printf("\nMENU\n");

printf("PRESS\n");
printf("1->create\n2->display\n3->insert\n4->delete\n5->exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("enter the size of array\n");
        scanf("%d",&n);
        create(a);
        break;
 case 2:display(a);
        break;
 case 3:printf("enter the element to be inserted\n");
        scanf("%d",&ele);
        printf("enter the index where the element to be inserted\n");
        scanf("%d",&pos);
        insert(a,ele,pos);
        break;
case 4:printf("enter the index where you want to delete\n");
        scanf("%d",&pos);
        del(a,pos);
        break;
case 5:exit(0);
default:printf("INVALID CHOICE\n");
}
}
return 0;
}
void create(int a[])
{
int i;
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("array created\n");
display(a);
}
void display(int a[])
{
int i;
if(n==0)
printf("EMPTY ARRAY\n");
else
{
printf("ARRAY ELEMENTS:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
}
void insert(int a[],int ele, int pos)
{
int j;
if(n==MAX)
printf("array is full\n");
else if(pos<0 || pos>n)
printf("invalid position\n");
else
{
for( j=n;j > pos;j--)
a[j] = a[j-1];

a[pos] = ele ;
n = n+1;
printf("element inserted\n");
display(a);
}
}
void del(int a[],int pos)
{
int ele,i;
if(n==0)
printf("EMPTY ARRAY\n");
else if(pos<0 || pos>n-1)
printf("invalid position\n");
else
{
ele=a[pos];
for(i=pos;i<n-1;i++)
a[i]=a[i+1];
n=n-1;
printf("deleted element is %d",ele);
display(a);
}
}






