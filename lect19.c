#include<stdio.h>
int main(){

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//              arr2[i][j]=arr[i][2-j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",arr2[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}

//     };

//     int t = 0, b = 2;
//     int left = 0, right = 2;

//     while (t <= b && left <= right)
//     {
//         for (int i = left; i <= right; i++)
//         {
//             printf("%d ", arr[t][i]);
//         }
//         t++;

//         for (int i = t; i <= b; i++)
//             printf("%d ", arr[i][right]);
//         right--;

//         for (int i = right; i >= left; i--)
//             printf("%d ", arr[b][i]);
//         b--;

//         for (int i = b; i >= t; i--)
//             printf("%d ", arr[i][left]);
//         left++;
//     }

//     return 0;
// }

// int a;

//     printf("Ente a number:");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("this is even number");
//     }
//     else{
//         printf("this is odd number");
//     }

// }

//     
// int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

    
    

//     for(int i = 1; i < 3; i++) {
//         printf("%d ", arr[i][3 - i - 1]);
    
//     for(int j = 0; j < 3; j++) {
//         printf("%d ", arr[0][j]);
//     }
// }
// for(int i=0;i<3;i++){
//     printf("%d",arr[2][i]);
// }

    
     
    
//     printf("\n");
        
//     return 0;
// }
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,9} };
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        if(i==0||i==2){
            printf("%d",arr[i][j]);
        }else if(j==0||j==2) {
            printf("%d",arr[i][j]);
        }else{
            printf(" ");
        }
    }
    printf("\n");
}
}