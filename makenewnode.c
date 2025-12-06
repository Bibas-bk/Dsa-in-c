#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*ptr;
};
int main(){
    struct Node* head=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=45;
    head->ptr=NULL;

return 0;
}

