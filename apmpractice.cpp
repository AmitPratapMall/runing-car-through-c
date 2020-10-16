#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

/
}*/
int main()
{  struct node p;
struct node *q;
q=&p;
//q=(struct node *)malloc(sizeof (struct node));


	(*q).data=20;
	printf("%d" ,(*q).data);
	return 0;
}
/*	first=(struct node *)malloc(sizeof (struct node));
	scanf("%d",&first->data);
	first->next=first;
	q=first;
	for(i=1;i<n;i++)
	{
	p=(struct node *)malloc(sizeof (struct node));
   scanf("%d",&p->data);
    p->next=NULL;
    q->next=p;
    q=p;
	}
	printf("if you want to increase the size then enter 0");
	scanf("%d",&a);
	if(a==0)
	{
	printf("enter the number of element");
	scanf("%d",&b);
		for(i=1;i<=b;i++)
	{
	p=(struct node *)malloc(sizeof (struct node));
   scanf("%d",&p->data);
    p->next=NULL;
    q->next=p;
    q=p;
	}
}
	display(first);
	return 0;
}
*/
