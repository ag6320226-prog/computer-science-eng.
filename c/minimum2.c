#include<stdio.h>

int minimum(int a, int b){
    return(a<b)?a:b;

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
    for(int i=1;i<n;i++){
        scanf("%d",&numbers[i]);
    }

    int min = numbers[0];
    for(int i=1;i<n;i++){
        min = minimum(min,numbers[i]);
    }
    printf("The minimum value is:%d\n",min);
    return 0;
}