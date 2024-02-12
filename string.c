// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[10];
//     char m[10];
//     int a=strlen(s);
//     printf("enter the value of s:-");
//     scanf("%s",&s[10]);
//     printf("enter the character value of m:-");
//     scanf("%s",&m[10]);
//     for (int i=0; i<a; i++) {
//         if (s[i]==m[i]) {
//             printf("c");
//         }else {
//              printf("b");
//         }      
//     }
//     printf("\n");
//     return 0;
    
// }


// #include<stdio.h>
// #include<string.h>
// void main() {
//     char a[5];
//     printf("character value:-");
//     scanf("%s",&a[5]);
//     int c=strlen(a);
//     for (int i=0; i<c; i++) {
//         printf("%c\n",a[i]);
//     }
//     printf("\n");
    
// }




// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[100], s2[100];
//     int a[26]; // Assuming input consists of lowercase English letters
//     int b[26];
//     int Anagram = 1;
//     printf("Enter the value of first string: ");
//     scanf("%s", s);
//     printf("Enter the value of second string: ");
//     scanf("%s", s2);
//     int len1 = strlen(s);
//     int len2 = strlen(s2);

//     if (len1 != len2) {
//         Anagram = 0;
//     } else {
//         for (int i = 0; i < len1; i++) {
//             a[s[i] - 'a']++;
//             b[s2[i] - 'a']++;
//         }

//         for (int i = 0; i < len1; i++) {
//             if (a[i] != b[i]) {
//                 Anagram = 0;
//                 break;
//             }
//         }
//     }

//     if (Anagram!=0) {
//         printf("Anagram\n");
//     } else {
//         printf("Not Anagram\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "computer";
//     char s1[] = "cat";
//     char a[21];   
//     int in=0;   
//     for (int i = 0; s[i]!='\0'; i++) {
//         int f=0;        
//         for (int j = 0; s1[j]!='\0'; j++) {
//             if (s[i]==s1[j]) {
//                 f=1;
//                 break;
//             }
//         }       
//         if (f==0) {
//             a[in] = s[i];
//             in++;
//         }
//     }    
//     a[in] ='\0';    
//     printf("%s\n", a);     
//     return 0;
// }




// #include<stdio.h>
// #include<string.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     char s[n];
//     printf("enter the value of s:-");
//     scanf("%s",s);
//     int c=1;
//     int max=0;
//     for (int i=0; i<n; i++) {
//         if (s[i]==s[i+1]) {
//             c++;
//         } else {
//             if (max<c) {
//                 max=c;
//             }
//         }
//     }
//     printf("%d",max);
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main() {
//     char s[100];
//     printf("enter the string value of s:-");
//     scanf("%s",s);
//     char s1[100];
//     printf("enter the string value of s1:-");
//     scanf("%s",s1);
//     int a=strlen(s);
//     int b=strlen(s1);
//     for (int i=0; i<b; i++) {
//         for (int j=0; j<a; j++) {
//             if (s1[i]==s[j]) {
//                 for (int k=j; k<a; k++) {
//                     s[k]=s[k+1];
//                 }
//                 a--;
//                 j--;
//             }
//         }
//     }
//     printf("%s",s);
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     char str[10]="Hello";
//     char str1[10];
//     strcpy(str,str1);
//     printf("%s\n",str1);
// }


// #include <stdio.h>
// int main()
// {
//   char *arr[] = {"Geek", "Geeks", "Geekfor"};
//   printf("String array Elements are:\n");
   
//   for (int i = 0; i < 3; i++) 
//   {
//     printf("%s\n", arr[i]);
//   }
//   return 0;
// }


// #include<stdio.h>
// int main() {
//     int i;
//     char *a[100];
//     scanf("%s",a[100]);
//     int b=sizeof(a);
//     for (i=0; i<b; i++) {
//         printf("%s",a[i]);
//     }
//     printf("\n");
// }