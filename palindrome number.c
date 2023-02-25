#include<stdio.h>
int main(){
    int num,rem,rev=0;
    printf("enter the num");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    if(rev=num)
    printf(" num is palindrome");
    else
    printf("num is not palindrome");
}