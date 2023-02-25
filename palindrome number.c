#include<stdio.h>
int main(){
    int num,rem,rev=0,temp=num;
    printf("enter the num");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num\10;
    }
    printf("%d",rev);
    if(temp = rev)
    printf(" num is palindrome");
    else
    printf("num is not palindrome");
}
