#include<stdio.h>
int main(){



int arr[5]={1,2,3,2,1};

  int check=1;
 for (int i=0;i<5/2;i++){

 if(arr[i]!=arr[5-1-i]){
     check=0;
    
 }


 }
 return 0;
}

//  if(check){
//      printf("hai");
//  }else{
//      printf("nahi hai");
//  }


//  int arr[5]={10,20,30,40,50};
// int f=arr[0];
//  for (int i=0;i<5;i++){
//      arr[i]=arr[i+1];

// }
//  arr[4]=f;


//  int arr[5]={10,20,30,40,50};
//  int f=arr[0];
//  for (int i=0;i<5;i++){
//      arr[i]=arr[i+1];

//  }
//  arr[4]=f;


//  int arr[5]={10,20,30,40,50};
//  int f=arr[0];
//  for (int i=0;i<5;i++){
//     arr[i]=arr[i+1];

//  }
//  arr[4]=f;


// int arr[5]={-10,20,30,-40,50};
// int f=arr[0];
// for (int i=0;i<5;i++){
//     arr[i]=arr[i+1];

// }
// arr[4]=f;

// }