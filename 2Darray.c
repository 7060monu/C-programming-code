#include<stdio.h>
void main(){
    int a[2][3],i,j;
    printf(" enter the 2D arrays element");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf(" matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d\t ", a[i][j]);
        }
        printf("\n");
    }


}