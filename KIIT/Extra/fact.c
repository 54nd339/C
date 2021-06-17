#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int m=n;
    for(i=2;(m/i!=1)&&(m%i==0);m/=i,i++);
    if(m==i)
        printf("%d is factorial of %d",n,i);
    else
        printf("%d is not a factorial of any number",n);
    return 0;
}
