// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);        
//     }
//     for (int i=0; i<n; i++) {
//         printf("%d",a[i]);
//     }    
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     int e,o;
//     e=0;
//     o=0;
//     for(int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     } 
//     for (int i=0; i<n; i++) {
//         if (a[i]%2==0) {
//             e+=a[i];
//             // printf("even\n");
//             // printf("%d\n",e[i]);
//         }
//         else {
//             o+=a[i];
//             // printf("odd\n");
//             // printf("%d/n",o[i]);
//         }
//     }
//     // printf("e[n]=%d\n",e[n]);
//     // printf("o[n]=%d",o[n]);
//     printf("%d\n",e);
//     printf("%d\n",o);
//     return 0;
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
//     for (int i=0; i<n; i++) {
//         for (int j=i+1; j<n; j++) {
//             if (a[i]>a[j]) {
//                 int temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for (int i=0; i<n; i++) {
//         printf("%d",a[i]);
//         // if (i==2) {
//         //     printf("%d",a[i]);
//         // }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the number of n:-");
//     scanf("%d",&n);
//     int a[n];
   
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     int k=3;
//     for (int i=0; i<n; i++) {
//         k=k%n;
//         printf("%d",a[k]);
//         k+=3;  
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int day=6;
//     switch(day) {
//         case 1: {
//             printf("sunday");
//             break;
//         }
//         case 2: {
//             printf("Ajay:-monday");
//             break;
//         }
//         case 3: {
//             printf("ajay:-tuesday");
//             break;
//         }
//         case 4: {
//             printf("wedenesday");
//             break;
//         }
//         case 5: {
//             printf("thursday");
//             break;
//         }
//         case 6: {
//             printf("friday");
//             break;
//         }
//         case 7: {
//             printf("satarday");
//             break;
//         }
//         default: 
//         {
//             printf("not any day name:- please put the right number");
//             break;
//         }
//     }
//     return 0;
// }

// bubble sort

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         for (int j=0; j<n-1; j++) {
//             if (a[j]>a[j+1]) {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0; i<n; i++) {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }



// insert element


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     for(int i=0; i<n; i++) {
//         for (int j=i; j<n; j++) {
//             printf("subarray=:-");
//             for (int k=i; k<j+1; k++) {
//                 printf("%d",a[k]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }


// insert value

// #include <stdio.h>
// int main()
// {
//     int n;    
//     printf("enter the value  of n:-");
//     scanf("%d",&n);
//     int array[n];
//     for (int i=0; i<n; i++){
//     scanf("%d",&array[i]);
//     }
//     int pos,value;
//     printf("Enter the number of pos:- ");
//     scanf("%d",&pos);
//     printf("enter the number of value:- ");
//     scanf("%d",&value);
//     pos--;
//     n++;
//     for (int i=n-1; i>pos; i--)
//         array[i]=array[i - 1];
//     array[pos]=value;
//     printf("Array after insertion: ");    
//     for (int i=0; i<n; i++)
//         printf("%d ", array[i]);
//     printf("\n");
 
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     int pos,value;
//     printf("enter the value of value:-");
//     scanf("%d",&value);
//     for (int j=0; j<n; j++) {
//         if (a[j]==value) {
//             for(int b=j; b<n; b++){
//                 a[b]=a[b+1];
//             }
//         }
//     } 
//     for (int k=0; k<n-1; k++) {
//             printf("%d ",a[k]);
//     }
//     return 0;   
// }



// #include<stdio.h>
// int main() {
//     int gap,count,k,i;
//     gap=1;
//     count=1;
//     k=2;
//     int a[6]={2,4,5,6,8,9};
//     for (i=0; i<6; i++) {
//         if (gap==k) {
//             if (a[i]!=-1) {
//                 printf("%d\n",a[i]);
//                 count++;
//                 a[i]=-1;
//             }
//             else {
//                 gap=0;
//                 gap++;
//                 i=(i+1)%10;
//             }
//         }
//         else {
//             gap++;
//             i=(i+1)%10;
//         }
//     }
//     return 0;    
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
//     int b=2;
//     for (int i=0; i<n; i++) {
//         if (a[i]==b) {
//             a[i]=-1;
//         }
//     }
//     int c=-1;
//     for (int j=0; j<n; j++) {
//         if (a[j]==c) {
//             a[j]=0;
//         }
//     }
//     for (int i=0; i<n; i++) {
//         printf("%d",a[i]);
//         printf("\n");
//     }
    
//     return 0;
// }


// max find

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     int max=0;
//     for (int i=0; i<n; i++) {
//         if (max<a[i]) {
//             max=a[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }




// #include <stdio.h>
// #define bool int
// bool isLucky(int n)
// {
//     static int counter = 2;
 
//     if (counter > n)
//         return 1;
//     if (n % counter == 0)
//         return 0;
 
//     /*calculate next position of input no.
//       Variable "next_position" is just for
//     readability of the program we can
//     remove it and update in "n" only */
//     int next_position = n - (n / counter);
 
//     counter++;
//     return isLucky(next_position);
// }
// int main()
// {
//     int x;
//     printf("enter the value of x:-");
//     scanf("%d",&x);
 
//     // Function call
//     if (isLucky(x))
//         printf("%d is a lucky no.", x);
//     else
//         printf("%d is not a lucky no.", x);
//     getchar();
// }


// #include<stdio.h>
// int main() {
//     int a[6]={2,3,4,6,7,8};
//     for (int i=0; i<6; i++) {
//         if (a[i]-a[i+1]!=-1) {
//             printf()
//         }
//     }
// }


// sort 

// #include<stdio.h>
// int main() {
//     int a[6]={3,7,2,8,4,1};
//     for (int i=0; i<6; i++) {
//         for (int j=i+1; j<6; j++) {
//             if (a[i]>a[j]) {
//                 int temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for (int i=0; i<6; i++) {
//         printf("%d ",a[i]);
//         printf("\n");
//     }
    
// }

// sort


// #include<stdio.h>
// int main() {
//     int a[6]={8,3,9,2,7,5};
//     for (int i=0; i<6; i++) {
//         for(int j=0; j<6-1; j++) {
//             if (a[j]>a[j+1]) {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0; i<6; i++) {
//         printf("%d ",a[i]);
//         printf("\n");
//     }
// }


// sort


// #include<stdio.h>
// int main() {
//     int a[6]={2,7,3,8,4,9};
//     for (int i=1; i<6; i++) {
//         int b=a[i];
//         for (int j=i-1; j>=0; j--) {
//             if (b<a[j]) {
//                 int temp=b;
//                 b=a[j];
//                 a[j]=temp;                
//             }
//         }
//     }
//     for (int i=0; i<6; i++) {
//         printf("%d ",a[i]);
//         printf("\n");
//     }
// }


// binary search


// #include<stdio.h>
// int main() {
//     int k;
//     printf("enter the value of n:-");
//     scanf("%d",&k); 
//     int a[10]={3,5,6,11,12,13,14,15,21,43};
//     int f=0;
//     for (int i=0; i<10; i++) {
//         if (a[i]==k) {
//             printf("%d",i);
//         }        
//     }
//     // printf("not found:-");
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int k;
//     printf("enter the value of k:-");
//     scanf("%d",&k);
//     int a[6]={3,6,9,12,54,2};
//     int f=0;
//     for (int i=0; i<6; i++) {
//         if (a[i]==k) {
//             f=1;
//         }
//     }
//     if (f==1) {
//         printf("yes");
//     }
//     else {
//         printf("no");
//     }
// }



// #include<stdio.h>
// int main() {
//     int k;
//     printf("enter the value of k:-");
//     scanf("%d",&k);
//     int a[k];
//     for (int i=0; i<k; i++) {
//         scanf("%d",&a[i]);
//     }
//     int oc=0;
//     for(int i=0; i<k; i++) {
//         for (int j=i+1; j<k; j++) {
//             if (a[i]==a[j]) {
//                 oc++;
//             }
//         }
//     }
//     printf("%d",oc);
//     return 0;
// }



// #include<stdio.h>
// int main() {
//     int k;
//     printf("enter the value of k:-");
//     scanf("%d",&k);
//     int a[k];
//     for (int i=0; i<k; i++) {
//         scanf("%d",&a[i]);
//     }
//     int d=0;
//     for(int i=0; i<k; i++) {
//         for (int j=i+1; j<k; j++) {
//             if (a[i]==a[j]) {
//                 d++;
//             }
//         }
//     }
//     printf("%d",d);
//     return 0;
// }



// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     // int b[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (j%2==0) {
//                 if (a[i]%2!=0) {
//                     if (a[i+1]%2==0){
//                     int temp=a[i];
//                     a[i]=a[i+1];
//                     a[i+1]=temp;
//                     }


//                 }
//             }
//         }

//     }
//     for (int i=0; i<n+1; i++) {
//         printf("%d ",a[i]);
//     }
// }




// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of babies born in a particular month: ");
//     scanf("%d", &n);
//     if (n <= 0) {
//         printf("No baby weights to process.\n");
//         return 0;
//     }
//     float total_weight = 0;
//     float max_weight, min_weight;
//     for (int i = 1; i <= n; i++) {
//         float weight;
//         printf("Enter the weight of baby %d in kilograms: ", i);
//         scanf("%f", &weight);
//         total_weight += weight;
//         if (i == 1) {
//             max_weight = weight;
//             min_weight = weight;
//         } else {
//             if (weight > max_weight) {
//                 max_weight = weight;
//             }
//             if (weight < min_weight) {
//                 min_weight = weight;
//             }
//         }
//     }
//     float mean_weight = total_weight / n;
//     printf("Mean weight of the babies: %.2f kilograms\n", mean_weight);
//     printf("Maximum weight of the babies: %.2f kilograms\n", max_weight);
//     printf("Minimum weight of the babies: %.2f kilograms\n", min_weight);
    
//     return 0;
// }




// k=3 so print 3sra max

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value ofn:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     int c=0;
//     for (int i=0; i<n; i++) {
//         for (int j=i+1; j<n-1; j++) {
//             if (a[i]==a[j]) {
//                 a[i]=-1;
//                 c++;
//             }
//         }
//     }
    // for (int i=0; i<n; i++) {
    //     for (int j=i+1; j<n; j++) {
    //         if (a[i]>a[j]) {
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }
    // for (int i=1; i<=c; i++) {
    //     for (int j=0; j<n; j++) {
    //         a[j]=a[j+1];
    //     }
    // }
    // for (int i=0; i<n-c; i++) {
    //     if (i==2) {
    //         printf("%d",a[i]);
    //     }
    //     // printf("%d ",a[i]);
    // }
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
//     int sum=0;
//     int mod=0;
//     int max=0;
//     int c=0;
//     for (int i=0; i<n; i++) {
//         sum+=a[i];
//         for (int j=i+1; j<n; j++) {
//             if (a[j]==a[j+1]) {
//                 mod=a[j];
//                 c++;
//             }
//             else {
//                 if (max<c) {
//                     max=c;
//                 }
//             }
//         }
//     }
//     int mean=sum/n;
//     printf("%d\n",mod);
//     printf("%d\n",a[n/2]);
//     printf("%d",mean);
// }


// #include<stdio.h>
// int main() {
//     int a[6]={2,3,4,5,6,7};
//     int b[6]={6,7,8,12,34,54};
//     int c[12];
//     for (int i=0; i<6; i++) {
//         c[i]=a[i];
//     }
//     for (int i=0; i<6; i++) {
//         c[i+6]=b[i];
//     }
//     for (int i=0; i<12; i++) {
//         printf("%d ",c[i]);
//     }
// }


// #include<stdio.h>           // sudhar karna hai esme
// int main() {
//     int a[5]={1,2,3,4,5};
//     int b[5]={2,3,5,6,7};
//     int u[5];
//     int i[5];
//     for (int k=0; k<5; k++) {
//         int c=a[k];
//         for (int j=0; j<5; j++) {
//             if (c==b[j]) {
//                 u[j]=b[j];
//             }
//             else{
//                 i[j]=b[j];
//             }
//         }
//     }
//     for (int d=0; d<5; d++) {
//         printf("%d\n",u[d]);
//     }
//     for (int e=0; e<5; e++) {
//         printf("%d ",i[e]);
//     }
// }


// #include<stdio.h>
// int main() {
//     int a[5]={1,2,3,4,5};
//     int b[7]={3,5,7,8,9,11,13};
//     int c[12];
//     for (int i=0; i<5; i++) {
//         c[i]=a[i];
//     }
//     for (int i=0; i<7; i++) {
//         c[i+5]=b[i];
//     }
//     int d=12/2;
//     printf("%d",c[d]);
// }



// #include<stdio.h>
// int main() {
//     int a[10]={2,3,2,4,5,3,6,7,8,9};
//     int c=0;
//     for (int i=0; i<10; i++) {
//         for (int j=1; j<10-1; j++) {
//             if (a[i]==a[j]) {
//                 a[i]=-1;
//                 c++;
//             }
//         }
//     }
//     for (int i=0; i<10; i++) {
//         printf("%d\t",a[i]);
//     }
// }



//    1 posetive and negative

// #include<stdio.h>
// int main() {
//     typedef struct ajay{
//         int value;
//     }ajay;
//     ajay arr[5];
//     for (int i=0; i<5; i++) {
//         printf("enter the value of array");
//         scanf("%d",&arr[i].value);
//     }
//     for (int i=0; i<5; i++) {
//         for (int j=i+1; j<5;) {
//             if (arr[i].value>arr[j].value) {
//                 int t=arr[i].value;
//                 arr[i].value=arr[j].value;
//                 arr[j].value=t;
//             }
//         }
//     }
//     ajay po[3],ne[3];
//     for(int i=0; i<5; i++) {
//         if (arr[i].value>0) {
//             po[i].value=arr[i].value;
//         }
//         else {
//             ne[i].value=arr[i].value;
//         }
//     }
// }

    // 2insert value

// #include <stdio.h>
// int main()
// {
//     int n;    
//     printf("enter the value  of n:-");
//     scanf("%d",&n);
//     int array[n];
//     for (int i=0; i<n; i++){
//     scanf("%d",&array[i]);
//     }
//     int pos,value;
//     printf("Enter the number of pos:- ");
//     scanf("%d",&pos);
//     printf("enter the number of value:- ");
//     scanf("%d",&value);
//     pos--;
//     n++;
//     for (int i=n-1; i>pos; i--)
//         array[i]=array[i - 1];
//     array[pos]=value;
//     printf("Array after insertion: ");    
//     for (int i=0; i<n; i++)
//         printf("%d ", array[i]);
//     printf("\n");
 
//     return 0;
// }


    // 3
// #include<stdio.h>
// int main() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i=0; i<a; i++) {
//         scanf("%d",&arr[i]);
//     }
//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     for(int i=0; i<b; i++) {
//         for (int j=0; j<a-1; j++) {
//             int t=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=t;
//         }

//     }
//     for (int i=0; i<a; i++) {
//         printf("%d ",arr[i]);
//     }
// }


//    4 90degree

// #include<stdio.h>
// int main() {
//     int r;
//     printf("enter the value of r:-");
//     scanf("%d",&r);
//     int c;
//     printf("enter the value of c:-");
//     scanf("%d",&c);
//     int arr[r][c];
//     for (int i=0; i<r; i++) {
//         for (int j=0; j<c; j++) {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int b[r][c];
//     for (int i=0; i<r; i++) {
//         for (int j=0; j<c; j++) {
//             b[i][j]=arr[j][i];
//         }

//     }
//     for (int i=0; i<r; i++) {
//         for (int j=0; j<c; j++) {
//             printf("%d ",b[i][j]);
//         }
//     }
// }


//    5 passcal

// #include <stdio.h>

// int main() {
//     int n; 
//     printf("Enter the size of the spiral:- ");
//     scanf("%d",&n);
//     int mat[n][n]; 
//     int col_s=0,col_e=n-1,row_s=0,row_e=n-1; 
//     int num=1; 
//     while (num<n*n) {
//         for (int i=row_s;i<=row_e;i++) {
//             mat[col_s][i]=num;
//             num++;
//         }        
//         col_s++; 
//         for (int i=col_s;i<=col_e;i++) {
//             mat[i][row_e]=num;
//             num++;
//         }
//         row_e--; 
//         for (int i=row_e; i >= row_s; i--) {
//             mat[col_e][i] = num;
//             num++;
//         }
//         col_e--; 
//         for (int i=col_e;i>=col_s;i--) {
//             mat[i][row_s]=num;
//             num++;
//         }
//         row_s++; 
//     }
//     printf("Spiral Pattern:\n");
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             printf("%d ",mat[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i=0; i<a; i++) {
//         scanf("%d",&arr[i]);
//     }
//     for (int i=0; i<a; i++) {
//         for (int j=i+1; j<a; j++) {
//             if (arr[i]>arr[j]) {
//                 int t=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=t;
//             }
//         }
//     }
//     int po[10];
//     int ne[10];
//     for (int i=0; i<a; i++) {
//         if (arr[i]>0) {
//             po[i]=arr[i];
//         }
//         else {
//             ne[i]=arr[i];
//         }
//     }
//     for 
// }


