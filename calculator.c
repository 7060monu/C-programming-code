#include<stdio.h>
int main()
{
    int a,b,sum,sub,div,mul;
    char op;
    printf("enter operator:");
    scanf("%c",&op);
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case'+': sum=a+b;
        printf("sum=%d",sum);
        break;
        case'-': sub=a-b;
        printf("sub=%d",sub);
        break;
        case'*': mul=a*b;
        printf("mul=%d",mul);
        break;
        case'/': div=a/b;
        printf("div=%d",div);
        break;
        default:
        printf(" enter valid op");

    }

}