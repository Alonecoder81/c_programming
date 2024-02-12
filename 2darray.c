// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the number of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     int arr[n][n];
//     for(int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (int k=0; k<n; k++) {
//         for (int j=0; j<n; j++) {
//             arr[j][k]=a[k][j];
            
//         }
//     } for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             printf("%d\t",arr[i][j]);
//         }
//     }

//     return 0;
//     }



// identity matrix
// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int flage=0;
//     for(int k=0; k<n; k++) {
//         for (int l=0; l<n; l++) {
//             if (k==l) {
//                 if (a[k][l]!=1) {
//                     flage=1;
//                 }
//             } else if (a[k][l]!=0) {
//                 flage=1;
//             }
//         }
//     }
//     if (flage==0) {
//         printf("this is identity matrix:-");
//     } else {
//         printf("this is not identity matrix:-");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int flag=0;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             if (i==j) {
//                 if (a[i][j]!=1) {
//                     flag=1;
//                 }
//             }
//             if (a[i][j]==0) {
//                 flag=1;
//             }
//         }
//     }
//     if (flag==0) {
//         printf("this is daigonal matrix");
//     } else {
//         printf("this is not daigonal matrix");
//     }
//         return 0;      
// }




// set of 0

// #include<stdio.h>
// int main() {
//     int a[3][3]={{1,1,0},{1,0,1},{1,1,1}};
//     // int b=sizeof(a);
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             if (a[i][j]==0) {
//                 a[i][j]=-1;
//             }
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             if (a[i][j]==-1) {
//                 a[i][j]=0;
//                 int c=j;
//                 int r=i;
//                 for (int k=0; k<=c; k++) {
//                     if (a[k][c]!=-1){
//                         a[k][c]=0;
//                     }
//                 }
//                 for (int l=0; l<=r; l++) {
//                     if (a[r][l]!=-1) {
//                         a[r][l]=0;
//                     }
//                 }
//             }
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
// }





// lower tringular matrix sum
// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i>j) {
//                 sum+=a[i][j];

//             }
//         }
//     }
//     printf("%d",sum);
// }


// upper tringular matrix sum

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     for(int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (j>i) {
//                 sum+=a[i][j];
//             }
//         } 
//     }
//     printf("%d",sum);
//     return 0;
// }


// find max an matrix
// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);            
//         }
//     }
//     int max=a[0][0];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (max<a[i][j]) {
//                 max=a[i][j];
//             }
//         }
//     }
//     printf("%d",max);
//     return 0;
// }


// transpose matrix

// #include<stdio.h>
// int main() {
//     int n;
//     printf("entere the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     int arr[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             arr[j][i]=a[i][j];
//         }
//     }
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// spairal pattern
 


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



// diagonal sum
// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int f=0;
//     for(int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i==j) {
//                 if (a[i][j]!=1) {
//                     f=1;
//                 }
//             }else {
//                 if (a[i][j]==0) {
//                     f=1;
//                 }
//             }
//         }
//     }
//     if (f==0) {
//         int sum=0;
//         for (int i=0; i<n; i++) {
//             for (int j=0; j<n; j++) {
//                 sum+=a[i][j];
//             }
//         }
//         printf("%d",sum);
//     }
//     else {
//         printf("this is not diagonal matrix:-");
//     }
//     return 0;

// }


// minimum element

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int min=a[0][0];
//     for(int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (min>a[i][j]) {
//                 min=a[i][j];
//             }
//             else {
//                 min=min;
//             }
//         }
//     }
//     printf("%d",min);
//     return 0;
// }


// position

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int p;
//     printf("enter the value of p:-");
//     scanf("%d",&p);
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i==p && j==p) {
//                 printf("%d",a[i][j]);
//             }
//         }
//     }
// }


// multiply

// #include<stdio.h>
// int main() {
//     int a[3][3]={{2,3,4},{4,5,7},{1,2,9}};
//     int b[3][3]={{4,5,6},{10,2,4},{1,5,2}};
//     int c[3][3];
//     int sum=0;
//     int t=0;
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             for (int k=0; k<3; k++) {
//                 sum+=a[i][k]*b[k][j];
//             }
//             t+=sum;
//             c[i][j]=sum;
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             printf("%d",c[i][j]);
//         }
//     }
// }




// subtraction

// #include<stdio.h>
// int main() {
//     int a[3][3]={{4,5,9},{9,8,6},{43,8,32}};
//     int b[3][3]={{4,3,3},{8,5,9},{3,4,5}};
//     int c [3][3];
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             c[i][j]=a[i][j]-b[i][j];
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             printf("%d",c[i][j]);

//         }
//         printf("\n");
//     }
// }




// addition


// #include<stdio.h>
// int main() {
//     int a[3][3]={{3,12,4},{45, 6,12},{13,14,21}};
//     int b[3][3]={{21,3,12},{34,32,16},{34,54,43}};
//     int c[3][3];
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
// }




// #include<stdio.h>
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
//     }
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             printf("%d",mat[i][j]);
//         }
//         printf("\n");
//     }
// }


    // check magic square


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of length:-");
//     scanf("%d",&n);
//     int a[n][n];
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int s=0;
//     for (int i=0; i<n; i++) {
//         s+=a[0][i];
//     }
//     printf("%d\n",s);
//     int g1_s=0;
//     for (int  i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i==j) {
//                 g1_s+=a[i][j];
//             }
//         }
//     }
//     printf("%d\n",g1_s);
//     int g2_s=0;
//     for (int i=0; i<n; i++ ) {
//         g2_s+=a[i][n-i-1];
//     }
//     printf("%d\n",g2_s);
//     if ((g1_s+g2_s)/2==s) {
//         printf("this is magic square:-");
//     }
//     else {
//         printf("this is not magic square:-");
//     }
// }


