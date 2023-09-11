#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if (i%n==0)
        printf(" %d",i);
    }
}


