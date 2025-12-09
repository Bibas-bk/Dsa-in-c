#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node* add_beg(struct node* head,int d);
int main(){
	struct node* head=NULL;
	head=malloc(sizeof(struct node));
	head->data=23;
	head->link=NULL;
	
	struct node* ptr1=malloc(sizeof(struct node));
	ptr1->data=34;
	ptr1->link=NULL;
	head->link=ptr1;
	int data=3;
	head=add_beg(head,data);
	ptr1=head;
	while(ptr1!=NULL){
		printf("%d",ptr1->data);
		ptr1=ptr1->link;
	}
return 0;	
}
struct node* add_beg(struct node* head,int d){
	struct node*ptr=malloc(sizeof(struct node));
	ptr->data=d;
	ptr->link=NULL;
	
	ptr->link=head;
	head=ptr;
	return head;
	
}