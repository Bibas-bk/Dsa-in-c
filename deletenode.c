#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* del_head(struct node* head){
	struct node* temp=head;
	if(temp==NULL){
		printf("the node is empty");
		return;
	}else{
	head=head->link;
	free(temp);
	temp=NULL;}
	return head;
	
}
int main(){
	struct node* head=malloc(sizeof(struct node));
	head->data=4;
	head->link=NULL;
	
	struct node* ptr=malloc(sizeof(struct node));
	ptr->data=3;
	ptr->link=NULL;
	head->link=ptr;
	head=del_head(head);
	
	struct node* ptr1=head;
	while(ptr1!=NULL){
		printf("%d",ptr1->data);
		ptr1=ptr1->link;
		
		
	}
	return 0;
		
	
	
}