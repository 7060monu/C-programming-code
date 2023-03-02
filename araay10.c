#include<stdio.h>
void main(){
    int a[4] ={1,2,3,4},i;
    a[3] = 8;
    for(i=0;i<4;i++){
        printf("%d",a[i]);
    }
}