#include<stdio.h>
void main(){
    int a[5],i;
    int max[4]= {0};
    int max2[5] = {0};
    printf(" enter the element :");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]>max[4]){
            max[4]=a[i];
        }
    }
    for(i=0;i<5;i++){
        if(a[i]>max2[5] && a[i]!= max[4]){
            max[5]=a[i];
        }
    }
    printf("%d",max[5]);
    
}