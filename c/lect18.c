#include<stdio.h>
int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9} };
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//  int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//   for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9} };
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum = sum+arr[i][j];
            
//             printf("%d",&sum);

//         }
//     }
    
// }
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

// for(int i=0;i<3;i++){
//     int sum=0;
//     for(int j=0;j<3;j++){
//         sum=sum+arr[i][j];
        
//     }
//     printf("%d",sum);
//     printf("\n");
// }
// }
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// int arr1[0];
// int k=0;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         arr1[k]=arr[i][j];
//         k++;
//     }
//     printf("%d",arr1[i]);
// }
// }
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//  int i;
 
//  for(i=0;i<3;i++){
//     printf("%d",arr[i][i]);
//  }
//  printf("\n");

//  return 0;
// }
int n = 3;
int arr[3][3];

int num = 1;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        arr[i][j]=num++;
    }
}
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if((i==0)||(i==n-1)||(j==0)||(j==n-1))
        printf("%d",arr[i][j]);
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}