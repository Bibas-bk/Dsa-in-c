#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* add_at_end(struct node*head,int data){
	struct node*ptr=malloc(sizeof(struct node));
	ptr->data=data;
	ptr->link=NULL;
struct node* temp=head;
while(temp->link!=NULL){
	temp=temp->link;
}
temp->link=ptr;
	return head;
}
struct node* add_at_pos(struct node*head,int pos,int d){
	struct node* ptr=head;
	struct node* ptr3=malloc(sizeof(struct node));
	ptr3->data=d;
	ptr3->link=NULL;
	if(pos==1){
		ptr3->link=head;
		head=ptr3;
		return head;
		
	}
	

    pos--;
    while (pos > 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr == NULL) {
        printf("Position out of range\n");
        return head;
    }

    ptr3->link = ptr->link;
    ptr->link = ptr3;
    return head;
}


	

int main(){
	struct node* head=malloc(sizeof(struct node));
	head->data=4;
	head->link=NULL;
	
	head=add_at_end(head,3);
	head=add_at_end(head,6);
	
	int pos=3,data=5;
	head=add_at_pos(head,pos,data);
	struct node* ptr=head;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
	return 0;
		
	}
	