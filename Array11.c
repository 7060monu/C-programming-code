#include<stdio.h>
void main(){
    int n,a[100] = {0},pos,i,val;
    printf(" enter the value n");
    scanf("%d",&n);
    printf(" enter the array of element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf(" postion is :");
    scanf("%d",&pos);
    printf(" value is:");
    scanf("%d",&val);
    for(i=n-1;i>pos-1;i--){
        a[i+1] = a[i];
        
    }
    a[pos] = val;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}