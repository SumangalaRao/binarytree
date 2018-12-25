#include<stdio.h>

#include<stdlib.h>

#include<ctype.h>

struct tree

{

	int data;

	struct tree *left;

	struct tree *right;

}*head;

void insert(int a)

{

	int count=0;

	struct tree *temp,*ptr,*prev;

	temp=(struct tree *)malloc(sizeof(struct tree));

	temp->data=a;

	temp->left=NULL;

	temp->right=NULL;

	if(head==NULL)

	{

	head=temp;

	}

	else

	{

	ptr=head;

	while(ptr!=NULL)

	{
   
 	prev=ptr;

	if(ptr->left!=NULL)

	{
 
	if(ptr->right==NULL)

	{
 	
	ptr->right=temp;
	
	printf("\n%d inserted",a);
	
	return;
	}
 
	else
       
	{
        
	if(count==0)
	 
	{
	  
	count=1;
  	  
	ptr=ptr->left;
	 
	}
	
	else
 	 
	{
	  
	count=0;
	  
	ptr=prev->right;
	 
	}
       
	}
	
}

	else

	{

	ptr->left=temp;

	printf("\n%d inserted",a);

	return;

	}
	
}

	}

	printf("\n%d inserted",a);

}

void print(struct tree *p)

{
	if(p==NULL)return;

	else

	{

	if(p->data!=-1)

	{

	printf("%d ",p->data);

	}

	print(p->left);

	print(p->right);

	}

}

void delete(int a,struct tree *p)

{

	if(p==NULL)
	return;

	else

	{
	
if(p->data==a)

	{

	p->data=-1;

	printf("\n%d deleted",a);
	return;

	}

	delete(a,p->left);

	delete(a,p->right);

	}

}

int main()

{

	insert(1);

	insert(2);

	insert(3);

	insert(4);

	insert(5);

	insert(6);

	insert(7);

	printf("\n");

	print(head);

	delete(1,head);

	delete(3,head);

	printf("\n");

	print(head);

return 0;

}

