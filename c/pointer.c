#include<stdio.h>


    // int a = 405;
    // int *x=&a;

    // printf("%d",*x);
    // return 0;

    // int sum(int *x,int *y){
    //     *x=50;
    //     *y=40;
    //     int c=(*x)+(*y);
    //     return c;
    // }
    // int main(){
    //     int x=10;
    //     int y=30;
    //     int data= sum(&x,&y);
    //     printf("%d",data);
    //     printf("%d",x+y);
    //     return 0;
    // }
// int main(){
//     int arr[5]={1,3,5,7,4};
//     int *p=arr;
//     printf("%d",*(p));
//     printf("%d",*(p+1));
//     printf("%d",*(p+2));
// }
// 
//     for(int i=0;i<5;i++){
//         printf("%d\n",*(p+i));
//     }
// }
// int main(){

// int arr[5]={1,3,4,8,9};
// int *p=arr;
// for(int i=0;i>5;i++){
//     printf("%d\n",*(p));

// }
// }
// int swap(int *x,int *y){
//     int temp;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int x=10;
//     int y=20;
//     printf("%d",swap(&x,&y));
// }

// int main(){
//     int x=10;
//     int *p=&x;
//     int **k=&p;
//     printf("%d",**k);

// }



int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    int *p1 = arr1;
    int *p2 = arr2;

    int flag = 1;
    for (int i = 0; i < 5; i++) {
        if (*(p1 + i) != *(p2 + i)) {
            printf("%d != %d\n", *(p1 + i), *(p2 + i));
            flag = 0;
            break;
        }
    }

    return 0;
}