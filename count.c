#include<stdio.h>
void main()
{
    int n,count=0;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
        printf("%d\n%d",n,count);
    } 
    

}