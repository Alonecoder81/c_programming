// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int rev=0;
//     while (n>0) {
//         rev=rev*10+n%10;
//         n=n/10;
//     }
//     printf("%d",rev);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n,b,i;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for (i=1; i<=n; i++) {
//         for (int k=1; k<=n-i; k++) {
//             printf(" ");
//         } for (int g=1; g<=(2*i)-1; g++) {
//             printf("*");
//         } printf("\n");
//     }
//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     for (int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//         scanf("%d",&arr[i][j]);
//     }
// }for (int k=0;k<n;k++){
//     for (int l=0;l<n;l++){
//         printf("%d\n",arr[k][l]);
//     }
// }
// return 0;
// }

// #include<stdio.h>
// int  add(int a,int b){
//     printf("%d",a+b);
// }
// int main(){
//     int a;
//     int b;
//     scanf("%d%d",&a,&b);
//     add(a,b);
// }
// int arry(int arr[],int n);


// pattern
// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a=1;
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=i; j++) {
//             printf("%d",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// pattern
// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++) {
//         for (int j=1; j<=i; j++) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of  n:-");
//     scanf("%d",&n);
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n-i; j++) {
//             printf(" ");   
//         }
//         for (int k=1; k<=n; n--) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// pattern daymond
// #include<stdio.h>
// int main() {
//     int i,n,j,k;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for (i=1; i<=n; i++) {
//         for (j=1; j<=n-i; j++) {
//             printf(" ");
//         }
//         for (k=1; k<=(2*i-1); k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i=(n-1); i>=1; i--) {
//         for (j=1; j<=(n-i); j++) {
//             printf(" ");
//         }
//         for (k=1; k<=(2*i-1); k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n,i,j,k;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for (i=1; i<=n; i++) {
//         // for (j=1; j<=(n-i); j++) {
//         //     printf(" ");
//         // }
//          for (k=n; k>=i; k--) {
//             printf("*");
//         }
//         printf("\n");  
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n,i,j;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for (i=1; i<=n; i++) {
//         for(j=1; j<=n; j++) {
//             if (i==1 || i==n || j==1 || j==n) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         } printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for (int i=1; i<=n; i++) {
//         for(int j=1; j<n-i; j++) {
//             printf(" ");
//         } 
//         // for (int k=1; k<=i; k++) {
//             printf("***");
//         // }
//         printf("\n");
//     }
    
//     return 0;
//}


// int main() {
//     int i,j,n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     // j=1;
//     for(i=1; i<=n; i++) {
//         for (j=1; j<=i; j++) {
//             printf("%d",j);
//         }
//         printf("\n");

//     }
// }

// decimal to binary


// #include<stdio.h>
// #include<stdio.h>
// int main() {
//     int n,a,b,c;
//     printf("enter the number of n:-");
//     scanf("%d",&n);
//     a=0;
//     b=0;
//     c=1;
//     while (n>0) {
//         a=n%2;
//         b+=(a*c);
//         c*=10;
//         n=n/2;
// }
// printf("%d",b);
// }



// roman number


// #include<stdio.h>                   // worng answers
// #include<math.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scsanf("%d",&n);
//     int a[15]={1000,900,500,400,100,90,50,40,10,9,5,4,3,2,1};
//     char b[15]={"m","cm","d","cd","c","xc","l","xl","x","ix","v","iv","iii","ii","i"};
//     char c;
//     for (int i=0; i<15; i++) {
//         int m=n/a[i];
//         for (int j=0; j<m; j++) {
//             c+=b[j];
//             n=n%a[i];
//         }
//     }
//     printf("%c",c);
// }



// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int sum=0;
//     while (n>0) {
//         int a=n%10;
//         sum+=a;
//         n=n/10;
//     }
//     if (sum<10) {
//         printf("%d",sum);
//     }
//     else {
//         int s=0;
//         while (sum>0) {
//             int b=sum%10;
//             s+=b;
//             sum=sum/10;
//         }
//         printf("%d",s);
//     }
// }


// #include<stdio.h>
// #include<math.h>
// int main() {
//     char n;
//     printf("enter the value of n:-");
//     scanf("%s",&n);
//     int a=lenof(n);
//     int f=0;
//     for (int i=0; i<a; i++) {
//         for (int j=i+1; j<a; j++) {
//             if (n[i]-n[j]!=) {
//                 f=1;
//             }
//         }
//     }
//     if (f==0) {
//         printf("no");
//     }
//     else {
//         printf("yes");
//     }
// }


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int c=0;
//     for (int i=1; i<=n; i++) {
//         if (n%i==0) {
//             c++;
//         }
//     }
//     if (c==2) {
//         int a=n;
//         }
//     int rev=0;
//     while (n>0) {
//         rev=(rev*10)+(n%10);
//         n=n/10;
//     } 
//     int f=0;
//     for (int i=1; i<=rev; i++) {
//         if (rev%i==0) {
//             f++;
//         }

//     } 
//     if (f==2) {
//         printf("this is twich prime:-");
//     } else {
//         printf("this is not twich prime:-");
//     }
// } 


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int c=0;
//     // int i=1;
//     for (int i=1; i<=n; i++){
//         if (n%i==0) {
//             c++;
//         }
//         // i++;
//     }
//     if (c==2) {
//         printf("yes");
//     }
//     else {
//         printf("no");
//     }
// }


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     if (n%4==0 && n%100!=0) {
//         printf("leap year\n");
//     }
//     else {
//         printf("not leap year\n");
//     }   
// }




// #include<stdio.h>
// int main() {
//     char var=3;
//     printf("%d",var>>1);
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int a=3;
//     printf("%d",a<<1);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int a=89; 
//     int b=90;
//     printf("%d",b^a);
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int a=3;
//     int b=4;
//     printf("%d",a&b);
// }


//  #include<stdio.h>
// int main() {
//     int a=3;
//     int b=4;
//     printf("%d",a|b);
// }





// #include<stdio.h>
// int main() {
//     int a,b,c,d;
//     printf("enter the value of first number:-");
//     scanf("%d",&a);
//     printf("enter the value of second number:-");
//     scanf("%d",&b);
//     printf("enter the value of third number:-");
//     scanf("%d",&c);
//     printf("enter the value of fourth number:-");
//     scanf("%d",&d);
//     int max,smax,tmax;
//     max=0;
//     smax=0;
//     tmax=0;
//     if (a>b) {
//         max=a;
//         smax=b;
//     }
//     else {
//         smax=a;
//         max=b;
//     }
//     if (c>max) {
//         tmax=smax;
//         smax=max;
//         max=c;
//     }
//     else {
//         if (c>smax) {
//             tmax=smax;
//             smax=c;
//         }
//     }
//     if (d>max) {
//         tmax=smax;
//         smax=max;
//         max=d;
//     }
//     else {
//         if (d>smax) {
//             tmax=smax;
//             smax=d;
//         }
//         else {
//             if (d>tmax) {
//                 tmax=d;
//             }
//             else {
//                 tmax=d;
//             }
//         }
//     }
//     printf("%d",tmax);
// }



// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     for (int i=0; i<n/2; i++) {
//         // printf("%d ",a[n-i-1]);
//         int temp=a[i];
//         a[i]=a[n-i-1];
//         a[n-i-1]=temp;
//     }
//     for (int j=0; j<n; j++) {
//         printf("%d",a[j]);
//     }
// }





// #include<stdio.h>
// int main() {
//     int i,n;
//     printf("entetr the value of n:-");
//     scanf("%d",&n);
//     int sum=0;
//     i=1;
//     while(i<n) {
//         int j=1;
//         while(j<=i) {
//             if (i%j==0) {
//                 sum+=i;
//             }
//             j++;
//         }
//         i++;
//     }
//     printf("sum= %d",sum);
// }




// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1; i<n; i++) {
//         for (int j=1; j<=i; j++) {
//             if (i%j==0) {
//                 sum+=i;
//             }
//         }
//     }
//     printf("sum is %d",sum);
// }





// #include<stdio.h>
// int main () {
//     int s;
//     s=43;
//     printf("%p\n",&s);
// }


// #include<stdio.h>
// int main() {
//     int a=10;
//     int*ptr=&a;
//     printf("%d\n",a);
//     printf("%p\n",&a);
//     printf("%p\n",ptr);
// }



// #include<stdio.h>
// int main() {
//     int f=65;
//     int*ptr=&f;
//     printf("%p\n",&f);
//     printf("%p\n",ptr);
//     printf("%d\n",*ptr);
// }


// #include<stdio.h>
// int main() {
//     int a[3]={4,5,6};
//     for (int i=0; i<4; i++) {
//         printf("%p\n",&a[i]);
//     }
// }


// #include<stdio.h>
// int main() {
//     int a[7]={3,4,5,6,7,8,9};
//     printf("%lu\n",sizeof(a));
// }

// #include<stdio.h>
// int main() {
//     int aint;
//     printf("%lu\n",sizeof(aint));
// }


// #include<stdio.h>
// int main() {
//     int a[4]={3,4,5,6};
//     printf("%d\n",*a);
// }

// #include<stdio.h>
// int main() {
//     int a[4]={5,6,7,8};
//     int*ptr=a;
//     for (int i=0; i<4; i++) {
//         printf("%d\n",(*ptr+i));
//     } 
// }



// #include<stdio.h>
// int main() {
//     int a[5]={4,5,6,7,8};
//     *a=12;
//     *(a+1)=15;
//     printf("%d\n",*a);
//     printf("%d\n",*(a+1));
// }




// #include <stdio.h>
// #include <stdbool.h>
// int main() {
//     int ajay = 1;
//     bool kumar = true;
//     while (true) {
//         for (int i = 0; i < ajay; i++) {
//             printf("***");
//         }
//         printf("\n");
//         if (kumar) {
//             ajay++;
//         } else {
//             ajay--;
//         }
//         if (ajay == 5) {
//         kumar = false;
//         } else if (ajay == 1) {
//             kumar = true;
//         }
//     }
//     return 0;
// }


