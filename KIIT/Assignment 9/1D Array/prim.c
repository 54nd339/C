#include <stdio.h>
int check(int num){
int flag=1;
for (int i=2;i<=num/2;i++)
if (num%i==0){
flag = 0;
break;
}
return flag;
}
int main(){
int n,count=0;
printf("Enter no. of nos.:");
scanf("%d",&n);
int num[n];
for(int i=0;i<n;i++){
printf("Enter item %d:",(i+1));
scanf("%d",&num[i]);
}
for(int i=0;i<n;i++)
count+=check(num[i]);
printf("No. of prime nos.: %d\n",count);
return 0;
}
