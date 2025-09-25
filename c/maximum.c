#include<stdio.h>

int maximum(int a, int b){
    return(a>b)?a:b;

}

int main(){
    int n;
    printf("Enter number of values: ");
    scanf("%d",&n);

    if(n<=0){
        printf("please enter a positive number of values.\n");
        return 0;

    }
    int numbers[n];
    printf("Enter %d values:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }

    int max = numbers[0];
    for(int i=1;i<n;i++){
        max = maximum(max,numbers[i]);
    }
    printf("The maximum value is:%d\n",max);
    return 0;
}