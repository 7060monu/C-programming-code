#include<stdio.h>
void main()
{
    int a[10],i,count=0;
    printf(" enter the element of array : ");
    for(i=0;i<10;i++){
        scanf(" %d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]<0){
            count++;
        }
        
    }
    printf("total negative elements %d",count);
}