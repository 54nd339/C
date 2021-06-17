#include <stdio.h>
int main(){
int sum=0,r,c;
printf("Enter number of rows:");
scanf("%d",&r);
printf("Enter number of columns:");
scanf("%d",&c);
int num[r][c];
for(int i=0;i<r;i++)
for(int j=0;j<c;j++){
printf("Enter element %d,%d: ",i,j);
scanf("%d",&num[i][j]);
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++)
printf("%d\t",num[i][j]);
printf("\n");
}
return 0;
}
