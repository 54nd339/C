#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter the no. of digits : ");
    scanf("%d",&n);
    int max=pow(10,n)-1;
    int min=pow(10,n-1);
    printf("Max %d digit no. is %d\n",n,max);
    printf("Min %d digit no. is %d\n",n,min);
    return 0;
}
