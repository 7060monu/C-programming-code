#include<stdio.h>
void main(){
    int a[3][3],i,j,sum=0;
    printf(" enter the 2D arrays element");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf(" matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d\t ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=i;j<=i;j++){
             sum=sum+a[i][j];
        }
    }
    printf(" sum is %d",sum);


}