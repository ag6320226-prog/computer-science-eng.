#include<stdio.h>
int main(){
    int arr1[3][2]={{1,2},{4,5},{7,8}};
    int arr2[2][4]={{7,4,6,4},{1,4,5,3}};
    int res[3][4];

    int nr =2;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            res[i][j]=0;
            for(int k=0;k<nr;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
            
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}