#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*head;
    
void create(int n){
    struct node *ptr, *tmp;    
    head = (struct node *)malloc(sizeof(struct node));    
    printf("Enter Data at node 1 : ");                       
    scanf("%d",&head->data);
    head->link = NULL;
    tmp = head;
    int i;
    for(i=2;i<=n;i++){
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data at node %d : ",i);
        scanf("%d",&ptr->data);
        ptr->link = NULL;
        tmp->link = ptr;
        tmp = tmp->link;
    }
}

void display(){
    int i;
    for(i=1;head;i++){
        printf("Data at node %d : %d\n",i,head->data);
        head=head->link;
    }    
}

void insert(struct node *new,int pos){
    struct node *tmp;
    if(pos==0){
        new->link = head;
        head=new;
    }
    else{
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp = head;int i;
        for(i=0;i<pos;i++){
            //printf("Data at node : %d\n",tmp->data);
            tmp = tmp->link; 
            if (tmp == NULL){
                printf("Position not found");
                return;
            }    
        }
        new->link = tmp->link;
        tmp->link = new;
    }
}

void delete(int pos){
    struct node *tmp, *ptr;
    if(pos==0){
        ptr=head;
        head=head->link;
        printf("The deleted element is %d",ptr->data);
        free(ptr);
    }
    else{
        ptr=head;int i;
        for(i=0;i<pos;i++){
            tmp = ptr; 
            ptr = ptr->link;
            if(ptr == NULL){
                printf("Position not found\n");
                return;
            }
        }
        tmp->link = ptr->link;
        printf("The deleted element is %d",ptr->data);
        free(ptr);
    }    
}

int main(){   
    int n,ch;
    printf("Enter The number of nodes : ");
    scanf("%d",&n);
    create(n);
    printf("\nEntered data at nodes :\n");
    display();
    struct node *new;int pos;
    new = (struct node *)malloc(sizeof(struct node));
    do{
        printf("\nEnter 1. to insert an element\n");
        printf("Enter 2. to delete an element\n");
        printf("Enter 3. to quit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : printf("\nEnter Data at new node : ");                       
                     scanf("%d",&new->data);
                     printf("Enter position to be entered : ");                       
                     scanf("%d",&pos);
                     new->link=NULL;
                     insert(new,pos);
                     printf("\ndata after insertion :\n");
                     display();break;
            case 2 : printf("Enter position to be deleted : ");                       
                     scanf("%d",&pos);
                     delete(pos);
                     printf("\ndata after deletion :\n");
                     display();break;
            case 3 : ch=0; break;
            default : printf("Wrong Input\n");
        }
    }while(ch);
    return 0;
}
