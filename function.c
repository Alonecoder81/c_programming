// #include<stdio.h>
// int addition(int a, int b) {
//     // return a+b;
//    printf("%d",a+b);
// }
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     // int add=sum(a,b);
//     // printf("sum is %d\n",add);
//     addition(a,b);
// }

// #include<stdio.h>
// void addition(int a, int b) {
//     // return a+b;
//     printf("%d",a+b);
// }
// int main(){ 
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     additional(a,b);
// }


// #include<stdio.h>
// int subtraction(int a,int b) {
//     return a-b;
// }
// int main() {
//     int sub=subtraction(56,34);
//     printf("subtraction is %d\n",sub);
//     return 0;
// }

// #include<stdio.h>
// int multiplication(int a,int b) {
//     return a*b;
// }
// int main() {
//     int mul=multiplication(23,5);
//     printf("multiplication is %d\n",mul);
//     return 0;
// }


// #include<stdio.h>
// int division(int a,int b) {
//     return a/b;
// }
// int main() {
//     int div=division(234,22);
//     printf("division is %d",div);
//     return 0;
// }



// #include<stdio.h>
// void swap(int *a,int *b) {
//     int temp=*b;
//     *b=*a;
//     *a=temp;
// }
// int main(){
//     int a=10;
//     int b=20;
//     printf("before swife %d %d\n",a,b);
//     swap(&a,&b);
//     printf("after swipe %d %d\n",a,b);
//     return 0;
// }


// #include<stdio.h>
// void swap(int a,int b) {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main() {
//     int a=10;
//     int b=20;
//     printf("before swap:- %d %d\n",a,b);
//     swap(a,b);
//     printf("after swap:- %d %d\n",a,b);
//     return 0;
// }


// #include<stdio.h>
// void checkprime() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int count=0;
//     for (int i=1; i<=a; i++) {
//         if (a%i==0) {
//             count++;
//             // break;
//         }
//     }
//     if (count==2) {
//         printf("a is prime number");
//     }
//     else {
//         printf("a is not prime number");
//     }
// }
//     void main() {
//         checkprime();
//         // return 0;
//     }



// #include<stdio.h>
// void checkperfect() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int sum=0;
//     for (int i=1; i<a; i++) {
//         if (a%i==0) {
//             sum+=i;
//         }
//     }
//     if (sum==a) {
//         printf("a is perfect number");
//     }
//     else {
//         printf("a is not perfect number");
//     }
// }
// void main() {
//     checkperfect();
// }



// #include<stdio.h>
// void checkprime() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int c=2;
//     int b=(a/2);
//     for (int i=2; i<=b; i++) {
//         if (a%i==0) {
//             c++;
//             break;
//         }
//     }
//     if (c==2) {
//         printf("this number is prime number");
//     }
//     else {
//         printf("this number is not prime number");
//     }
// }
// void main() {
//     checkprime();
// }



// #include<stdio.h>
// void swap(int *a,int *b) {
//     int temp=*a;
//     int *a = *b;
//     int *a=temp;
// }
// int main() {
//     int a=10;
//     int b=23;
//     printf("befor swap= %d %d",a,b);
//     swap(&a,&b);
//     printf("after swap= %d %d",a,b);
//     return 0;
//     }


// #include<stdio.h>
// void ajay(int a) {
//     for (int i=1; i<=a; i++) {
//         printf("Ajay kumar suryavanshi:-\n");
//     }
//     return;
// }
// int main() {
//     int a;
//     printf("enter the value of n:-");
//     scanf("%d",&a);
//     ajay(a);
// }


// #include<stdio.h>
// void ajay(int n) {
//     if (n==0) return;
//     printf("%d\n",n);
//     ajay(n-1);
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     ajay(n);
// }


// #include<stdio.h>
// void increasing(int n) {
//     if (n==0) return;
//     printf("%d\n",n);
//     increasing(n-1);
//     return;
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     increasing(n);
//     return 0;
// }


// #include<stdio.h>
// void sum(int n) {
//     int s=0;
//     for (int i=1; i<=n; i++) {
//         s=s+i;
//     }
//     printf("%d",s);
//     return;
// }
// int main() {
//     int n;
//     printf("enter tha value of n:-");
//     scanf("%d",&n);
//     sum(n);
// }


// #include<stdio.h>
// void sum (int n, int s) {
//     if (n==0) {
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     // printf("%d",s);
//     return;
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     sum(n,0);
// }



// #include<stdio.h>
// void factorial(int n, int s) {
//     if (n==0) {
//         printf("%d",s);
//         return;
//     }
//     factorial(n-1,s*n);
//     // printf("%d",s);
//     return;
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     factorial(n,1);
// }


// #include<stdio.h>
// void power(int a,int b) {
//     int c=1;
//     for(int i=1; i<=b; i++) {
//         c=c*a;
//     }
//     printf("power of a,b:- %d",c);
//     return;
// }
// int main() {
//     int a,b;
//     printf("enter the base value of a:-");
//     scanf("%d",&a);
//     printf("enter the power value of b:-");
//     scanf("%d",&b);
//     power(a,b);

// }


// #include<stdio.h>
// void sum(int n) {
//     int s=0;
//     for(int i=1; i<=n; i++) {
//         s=s+i;
//     }
//     printf("%d",s);
//     return;
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     sum(n);
// }


// #include <stdio.h>
// void subtraction(int a, int b) {
//     int c=a-b;
//     printf("%d",c);
//     return;
// }
// int main() {
//     int a,b;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     subtraction(a,b);
// }


// #include<stdio.h>
// void pow(int a,int b) {
//     if (b==0) return 1;
//     int ans=a*(a,b-1);
//     return ans;
// }
// int main() {
//     int a,b;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     pow(a,b);
// }




// #include<stdio.h>
// void factorial(int n) {
//     for (int i=1; i<=n; i++) {
//         int a=i;
//         int fac=1;
//         for (int j=a; j>=1; j--) {
//             fac=fac*j;
//         }
//         printf("%d",fac);
//     }
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     factorial(n);
//     return 0;
// }




// #include<stdio.h>
// void fibo(int n) {
//     if(n==1 || n==2) return 1;
//     int a=(n-1);
//     int b=(n-2);
//     int c=(a+b);
//     printf("%d",c);
// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     fibo(n);
// }


// #include<stdio.h>
// int stair(int n) {
//     if (n==0) return;
//     int total_ways= stair(n-1)+stair(n-2);
//     return total_ways;

// }
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int ways=stair(n);
//     printf("%d",ways);

// }




// #include<stdio.h>
// int cube(int a , int b) {
//     int s;
//     for(int i=1; i<=b; i++) {
//         s=a*a;
//     }
//     return s;
// }
// int main() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     int p=cube(a,b);
//     printf("%d",p);
// }



// #include<stdio.h>
// int area(int r) {
//     double a=22/7*r*r;
//     return a;
// }
// int main() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int p=area(a);
//     printf("%d",p);
// }



// #include<stdio.h>
// int max(int a ,int b) {
//     int m,min;
//     if (a<b) {
//         m=b;
//         return b;
//     }
//     else {
//         min=a;
//         return min;
//     }
// }
// int main() {
//     int a;
//     printf("enter the number value of a:-");
//     scanf("%d",&a);
//     int b;
//     printf("enter the number value of b:-");
//     scanf("%d",&b);
//     int ma=max(a,b);
//     printf("%d",ma);
// }

// #include<stdio.h>
// bool check()


// pattern pascal triangle


// #include <stdio.h>
// void printPascalsTriangle(int rows) {
//     int ajay=1;
//     for (int i = 0; i < rows; i++) {
//         for (int space = 1; space <= rows - i; space++)
//             printf("  ");
//         for (int j = 0; j <= i; j++) {
//             if (j == 0 || i == 0)
//                 ajay = 1;
//             else
//                 ajay = ajay * (i - j + 1) / j;
//             printf("%4d",ajay);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int rows;
//     printf("Enter the number of rows for Pascal's Triangle: ");
//     scanf("%d", &rows);
//     printPascalsTriangle(rows);
//     return 0;
// }





