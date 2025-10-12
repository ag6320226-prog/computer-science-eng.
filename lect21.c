#include <stdio.h>
#include <string.h>
int main()
    //     char str[]="abcd";
    //     int freq[256]={0};
    //     int ln= strlen(str);
    //     for(int i=0;i<ln;i++)
    //     {
    //         freq[str[i]]++;

    //     }
    //     for(int i=0;i<256;i++)
    //     {
    //         if(freq[i]>0){
    //             printf("%c:%d",i,freq[i]);
    //         }
    //     }
    // }

    // first non repeating

    //   #include <stdio.h>
    // #include <string.h>

    // #define NO_OF_CHARS 256
    // char findFirstNonRepeatingChar(char* str) {
    //     int freq[NO_OF_CHARS];
    //     for (int i = 0; i < NO_OF_CHARS; i++) {
    //         freq[i] = 0;
    //     }

    //     for (int i = 0; str[i] != '\0'; i++) {
    //         freq[(unsigned char)str[i]]++;
    //     }

    //     for (int i = 0; str[i] != '\0'; i++) {
    //         if (freq[(unsigned char)str[i]] == 1) {
    //             return str[i]; // Return the first non-repeating character
    //         }
    //     }

    //     return '\0'; // Return null character if no non-repeating character is found
    // }

    // int main() {
    //     char str1[] = "geeksforgeeks";
    //     char result1 = findFirstNonRepeatingChar(str1);
    //     if (result1 != '\0') {
    //         printf("First non-repeating character in \"%s\" is: %c\n", str1, result1);
    //     } else {
    //         printf("No non-repeating character found in \"%s\"\n", str1);
    //     }

    //     char str2[] = "aabbcc";
    //     char result2 = findFirstNonRepeatingChar(str2);
    //     if (result2 != '\0') {
    //         printf("First non-repeating character in \"%s\" is: %c\n", str2, result2);
    //     } else {
    //         printf("No non-repeating character found in \"%s\"\n", str2);
    //     }

    //     char str3[] = "welcome";
    //     char result3 = findFirstNonRepeatingChar(str3);
    //     if (result3 != '\0') {
    //         printf("First non-repeating character in \"%s\" is: %c\n", str3, result3);
    //     } else {
    //         printf("No non-repeating character found in \"%s\"\n", str3);
    //     }

    //     return 0;
    // }

    // char str[]="hello";
    // char target='e'
    // char newStr[100];
    // int j=0;
    //  int  ln= strlen(str);
    // for(int i=0;i<ln;i++){
    //     if(str[i]!=target){
    //         newStr[j]=str[i];
    //         j++;
    //     }

    // }
    // printf("%s",newStr);
    // }
    //  char str[]="abhdghnhggvnji";
    //  int freq[256]={0};
    //  int ln = strlen(s);
    //  char result;
    //  int max=0;
    //  for(int i=0;i<ln;i++){
    //   freq[str[i]]++;
    //  }
    //  for(int i=0;i<ln;i++){
    //   if(freq[str[i]]>max){
    //     max=freq[str[i]];
    //     result=str[i];
    //   }
    //  }
    //  printf("%c",str);
    // }

    // {
    //   char str[] = "abcabbbbb";
    //   char subStr[] = "abc";
    //   if (strstr(str, subStr) = NULL)
    //   {
    //     printf("true");
    //   }
    // }
    // else
    // {
    //   printf("false");
    // }



    {
    for (int i = 0; i < ln - 1; i++)
{
  for (int j = i + 1; j < ln; j++)
  {
    if (str[i] > str[j])
    {
      char temp = str[i];
      str[i] = str[j];
      str[j] = temp;
    }
  }
}
    }