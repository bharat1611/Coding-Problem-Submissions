#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int info;
	struct node *next;
}node;
void insert(node**,int);
void palin(node *);


int main()
{
	node *top=NULL;
	int n=0,num=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num);
		insert(&top,num);
	}
	palin(top);
}

void insert(node **top,int num)
{
	node *p=(node*)malloc(sizeof(node));
	p->info=num;
	if(*top==NULL)
	{
		p->next=NULL;
		(*top)=p;
	}
	else
	{
		p->next=(*top);
		(*top)=p;
	}
}

void palin(node *R)
{
	node *t,*r,*s,*top=NULL,*p=NULL;
	int f=0;
	t=R;
	while(t!=NULL)
	{
		p=(node*)malloc(sizeof(node));
		p->info=t->info;
		p->next=top;
		top=p;
		t=t->next;
	}
	for(;R!=NULL,top!=NULL;R=R->next)
	{
		if((R->info)!=(top->info))
			f=1;
		s=top;
		top=top->next;
		free(s);
	}
	if(f==1)
		printf("Not Palindrome");
	else
		printf("Palindrome");
}
