#include<stdio.h>
void main()
{
    int a[15],i,even=0, odd=0;
    printf(" enetr the elements :\n");
    for(i=0;i<15;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<15;i++){
        if(a[i]%2==0){
            even++;
        }
        else
        odd++;
    }
    printf("\n");
    printf("\ntotal even elements is :%d total odd elements is : %d\n",even,odd);
}