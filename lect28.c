// #include<stdio.h>
// int main(){
//     int n=5;
//     if(n&1){
//         printf("odd");

//     }else{
//         printf("even");
//     }
// }
//"abca"//palantro
// #include<stdio.h>
// int main(){
//     char str[]="abca";
//     int ln= strlen (str);
//     int flag=1;
//     for(int i=0;i<ln/2;i++){
//         if(str[i]!=str[ln-1-i]){
//             flag=0;
//             break;

//         }

//     }
//     if(flag){
//         printf("palantro");
//     }else{
//         printf("not palantro");
//     }
//     }
// xor
#include<stdio.h>
int main(){
//     int arr[5]={5,6,9,5,6};
//     int XOR=0;
//     for(int i=0;i<5;i++){
//         XOR=XOR^arr[i];

//     }
//     printf("%d",XOR);
// }

// int a=5;
// int b=3;
// a= a^b;
// b=a^b;
// a= a^b;
// printf("%d,%d",a,b);
// }
//missing no. five
// int arr[4]={1,2,4,5};
// int xor1=0;
// int xor2=0;
// for(int i=0;i<=5;i++){
//     xor1=xor1^i;

// }
// for(int i=0;i<4;i++){
//     xor2=xor2^arr[i];
// }

// printf("%d",xor1^xor2);
// }


//left shift
// int a=5;
// int b=a>>1;
// printf("%d",b);

// }
// right shift
int a=20;
int res=a>>2;
printf("%d",res);
}