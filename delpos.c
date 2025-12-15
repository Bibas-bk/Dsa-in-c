#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* delpos(struct node** head,int position){
	struct node* current=*head;
	struct node* previous=*head;
	if(*head==NULL){
		printf("the linklist is already empty");
		return *head;
		
	}else if(position==1){
		*head=current->link;
		free(current);
		current=NULL;
		return *head;
		
	}
	else{
		while(position!=1){
			previous=current;
			current=current->link;
			position--;
			
		}
	previous->link=current->link;
	free(current);
	current=NULL;
	return *head;
	
}
}
int main(){
	struct node* head=malloc(sizeof(struct node));
	head->data=4;
	head->link=NULL;
	struct node* ptr=malloc(sizeof(struct node));
	ptr->data=3;
	ptr->link=NULL;
	head->link=ptr;
	ptr=malloc(sizeof(struct node));
	ptr->data=5;
	ptr->link=NULL;
	head->link->link=ptr;
	int pos=2;
	head=delpos(&head,pos);
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->link;
		
	}
return 0;	
	
}