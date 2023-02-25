#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter number");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        if(i%1==0){
            sum=sum+i;
        }
    }
    printf("sum is%d",sum);
}