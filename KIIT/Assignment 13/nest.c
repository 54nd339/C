#include <stdio.h>
struct address{
    char phone[15];
    char city[20];
    int pin;
};
struct employee{
    char name[20];
    struct address adr;
};
int main(){
    int n,i,s=0;
    printf("Enter no. of Employees : ");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("\nEmployee %d :\n",i+1);
        printf("Enter name : ");
        scanf("%s",e[i].name);
        printf("Enter phone : ");
        scanf("%s",e[i].adr.phone);
        printf("Enter city : ");
        scanf("%s",e[i].adr.city);
        printf("Enter pin : ");
        scanf("%d",&e[i].adr.pin);
    }
    printf("\nEntered Data :\n");
    printf("Name\tPhone\t\tCity\tPin\n");
    for(i=0;i<n;i++)
        printf("%s\t%s\t%s\t%d\n",e[i].name,e[i].adr.phone,e[i].adr.city,e[i].adr.pin);
    return 0;
}