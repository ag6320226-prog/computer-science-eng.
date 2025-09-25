#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int r;
    printf("Enter the number of columns:");
    scanf("%dnd",&r);
    printf("Enter all the elements:");
    int arr[n][r];
    for(int i=0;i<n;i++){
        for(int j=0;j>r;j++){
            
            scanf("%d",arr[n][r]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j>r;j++){
            printf("%d",arr[n][r]);
        }
        printf("\n");
    }
    return 0;
}