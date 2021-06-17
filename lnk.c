#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{                                             //struct having 2 fields 
        int data;
        struct node *link;
    }*head;
    int n,i,max=0;
    printf("Enter The number of nodes : ");
    scanf("%d",&n);
    struct node *ptr, *tmp;    
    head = (struct node *)malloc(sizeof(struct node));    
    printf("Enter Data at node 1 : ");                       
    scanf("%d",&head->data);                                 //Take data field at node 1
    head->link = NULL;                                       //Stores link field as null
    tmp = head;                                              //Stores head in temp 
    for(i=2;i<=n;i++){                                   //creating n nodes and storing data
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data at node %d : ",i);
        scanf("%d",&ptr->data);                              //takes data field from next nodes
        ptr->link = NULL;                                    //stores link field as null
        tmp->link = ptr;                                     //stores address of ptr as tmp(head) link
        tmp = tmp->link;                                     //stores ptr in temp
    }
    printf("\nEntered data at nodes :\n");
    for(i=1;head;i++){
        printf("Data at node %d : %d\n",i,head->data);
        if(max<head->data)
        max=head->data;
        head=head->link;                                     //increment the position of node
    }
    printf("Largest Data in the list : %d\n",max);
    return 0;
}
