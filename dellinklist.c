#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* delnode(struct node* head){
	struct node* temp=head;
	if(head==NULL){
		printf("it is null");
		
		
	}
	while(temp!=NULL){
		temp=temp->link;
		free(head);
		head=temp;
	}
	return head;
}
int main(){
	struct node* head=malloc(sizeof(struct node));
	head->data=4;
	head->link=NULL;
	struct node* ptr1=malloc(sizeof(struct node));
	ptr1->data=6;
	ptr1->link=NULL;
	head->link=ptr1;
	
	ptr1=malloc(sizeof(struct node));
	ptr1->data=5;
	ptr1->link=NULL;
	head->link->link=ptr1;
	
	head=delnode(head);
	if(head==NULL){
		printf("all element delete successfully");
	}
	return 0;
}