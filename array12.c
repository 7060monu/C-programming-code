#include<stdio.h>
void main(){
    int n,a[100] = {},pos,i;
    printf(" enter the value n");
    scanf("%d",&n);
    printf(" enter the array of element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf(" postion is :");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        a[i] = a[i+1];
        
    }
    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
}

