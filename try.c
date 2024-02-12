// #include<stdio.h> 
// int main(){
//     int a,b;
//     printf("Enter the value of the first side  :-");
//     scanf("%d",&a);
//     printf("Enter the value of the second side  :-");
//     scanf("%d",&b);
//     int area=a*b;
//     int per=2*(a+b);
//     printf("Area of :- %d",area);
//     printf("\n");
//     printf("Perim of :- %d",per);
//     printf("\n");
// return 0;
// }


// # rectangle
// int main(){
//     int a, b;
//     scanf("%d  %d",&a,&b);
//     printf("%d\n2%d",(a*b),2*(a+b));
//     printf("\n");
// return 0;
// }

// # Squar
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int area=a*a;
//     int per=4*a;
//     printf("%d \n %d",area,per);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     int per=(a+b+c);
//     printf("%d\n",per);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float pi=3.14;
//     int radius;
//     scanf("%d",&radius);
//     float area=(pi*radius);
//     printf("%f\n",area);
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int l,b,h;
// scanf("%d %d %d",&l,&b,&h);
// int area=(2*h)*(l+b);
// int total=2*(l*b+b*h+h*l);
// printf("%d \n %d",area,total);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int product_price,discount_price,total_price;
//     scanf("%d %d",&product_price,&discount_price);
//     total_price=product_price-discount_price;
//     printf("%d\n",total_price);

//     return 0;


// }


// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if (b<a && a%b==0){
//         printf("a is desible by b");
//     }else{
//         printf("a is not desible by b");
     
//         }
//     return 0;
//     }


// #include<stdio.h>
// int main(){
//     int month;
//     scanf("%d",&month);
//     if (month==2){
//         printf("this month in 28 or 29 day\n");

//     }else if (month==1,3,5,7,8,10,12){
//         printf("this month in 31 day\n");
//     }else if(month==4,6,9,11){
//         printf("this month in 30 day\n");
//     }else{
//         printf("month is invailed");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int hight;
//     printf("enter value of hight:-");
//     scanf("%d",&hight);
//     if (hight>=60){
//         printf("yes you can ride\n");

//     }else{
//         printf("no you can not ride\n");
//     }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int l,b,a;
//     printf("enter the value of lenght:-");
//     scanf("%d",&l);
//     printf("enter the value of wight:-");
//     scanf("%d",&b);
//     printf("enter the value of angle:-");
//     scanf("%d",&a);
//     if (l==b && a==90){
//         printf("square\n");
//     }else if (l!=b && a==90){
//         printf("rectangle\n");
//     }else if (l!=b && a<360 && 60<a){
//         printf("parallelogram\n");
//     }else if (l==b && a!=90){
//         printf("rhombus\n");
//     }else{
//         printf("irregular\n");
   
//     }
// return 0;
// }




// #include<stdio.h>
// int main(){
//     int a,b,c,m,sm;
//     printf("enter the value of 1st number:-");
//     scanf("%d",&a);
//     printf("enter the value of 2nd number:-");
//     scanf("%d",&b);
//     printf("enter the value of 3rd number:-");
//     scanf("%d",&c);
//     m=0;
//     sm=0;
//     if (a>b){
//         m=a;
//         sm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }else if (a>c && sm>c){
//         m=b;
//         sm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     } else if (c>a && sm<c){
//         m=c;
//         sm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }else  {
//         m=b;
//         sm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//      }
//     //  else if (a==b && c>b) {
//     //     m=c;
//     //     sm=b;
//     //     printf("%d\n",m);
//     //     printf("%d\n",sm);
//     // } else{
//     //     printf("only max no sm max");
//     // }
//     return 0;
//     }



// #include<stdio.h>
// int main(){
//     int a,b,c,d,e,m;
//     printf("enter the value of 1st number:-");
//     scanf("%d",&a);
//     printf("enter the value of 2nd number:-");
//     scanf("%d",&b);
//     printf("enter the value of 3d number:-");
//     scanf("%d",&c);
//     printf("enter the value of 4th number:-");
//     scanf("%d",&d);
//     printf("enter the value of 5th number:-");
//     scanf("%d",&e);
//     if (a>b && a>c && a>d && a>e){
//         m=a;
//         printf("%d\n",m);
//     }else if (b>a && b>c && b>d && b>e) {
//         m=b;
//         printf("%d\n",m);
//     }else if (c>a && c>b && c>d && c>e){
//         m=c;
//         printf("%d\n",m);
//     }else if (d>a && d>b && d>c && d>e){
//         m=d;
//         printf("%d\n",m);
//     }else{
//         m=e;
//         printf("%d\n",m);
//     }
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the value of 1st number:-");
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         if (i%2==0 && i%7==0){
//             printf("%d\n",i);

//         } 
//     }
// return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,sum;
//     printf("enter the value of 1st number:");
//     scanf("%d",&a);
//     sum=0;
//     for(int i=1; i<=a; i++){
//         if (i%3==0){
//                sum+=(i*i);      
//         }
//     }printf("%d",sum);
// return 0;
// }



// #include<stdio.h>
// int main(){
//     int n,p,q;
//     printf("enter the value of range number:-");
//     scanf("%d",&n);
//     printf("enter the value of upper number:-");
//     scanf("%d",&p);
//     printf("enter the value of lower number:-");
//     scanf("%d",&q);
//     int sum=0;
//     for (int i=1; i<=n; i++){
//         if (i%p==0 && i%q!=0){
//             sum+=i;
//         }

//     }
//     printf("%d\n",sum);
//     return 0;


// }

// <<<<<<<<<<<worng>>>>>>>
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b;
//     printf("enter the value of range number:-");
//     scanf("%d",&a);
//     printf("enter the value of pwer number:-");
//     scanf("%d",&b);
//     int sum=0;
//     for(int i=1; i<=a; i++){
//         sum+=(i*b);
//     }printf("%d\n",sum);
//  return 0;

// }

// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("entetr the value of given user smallest number:-");
//     scanf("%d",&m);
//     printf("enter the value of range number:-");
//     scanf("%d",&n);
//     int p=1;
//     while(m<=n){
//         p*=m;
//         m++;
//     }
//     printf("%d",p);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a=5;
//     int b=11;
//     int n;
//     printf("enter the value of given number:-");
//     scanf("%d",&n);
//     if (n%a==0 && n%b==0){
//         printf("disivel by both 5 or 11 \n");
//     }else if (n%a==0 && n%b!=0){
//         printf("only disivel by 5 \n");
//     }else if (n%a!=0 && n%b==0){
//         printf("only disivel by 11 \n");
//     }else{
//         printf("None \n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,sum;
//     printf("enter the value of given n number:-");
//     scanf("%d",&n);
//     sum=0;
//     for(int i=1; i<=n; i++){
//         sum+=i;

//     }
//     printf("%d\n",sum);
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b;
//     printf("enter the value of 1st number:-");
//     scanf("%d",&a);
//     printf("enter the value of 2nd number:-");
//     scanf("%d",&b);
//     int min=0;
//     int h=0;
//     while (a>b){
//              min=b;
//     }
//     min=a;
//     for (int i=1; i<=min; i++){
//         if (a%i==0 && b%i==0){
//             int h=i;
//     }     
//     }
//     int lcm=((a*b)/h);
//         printf("%d \n %d \n",h,lcm);
   
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,n,i,sum;
//     printf("enter the value of n number:-");
//     scanf("%d",&n);
//     a=5;
//     sum=0;
//     i=1;
//     while (i<=n){
//         sum+=a;
//         a=(a*10)+5;
//         i++;
//     }
//     printf("%d \n",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,b,n,sum;
//     printf("enter the value of given number:-");
//     scanf("%d",&n);
//     sum=0;
//     b=1;
//     for(int i=1; i<=n; i++){
//         b*=i;
//         sum+=b;
//     }
//     printf("%d \n",sum);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,b,c,n;
//     printf("enter the value of n number:-");
//     scanf("%d",&n);
//     a=2;
//     b=1;
//     c=1;
//     for (int i=1; i<=n; i++){
//         printf("%d \n",c);
//         b=(b*10)+1;
//         c=(b*b);

//     }
//     return 0;

// }



// count of perfact number


// # include<stdio.h>
// int main(){
//     int n,c1,c;
//     printf("enter the value of n number:-");
//     scanf("%d",&n);
//     c=0;
//     for (int i=1; i<=n; i++){
//         int sum=0;
//         for (int j=1; j<i; j++){
//             if (i%j==0){
//                 sum+=j;
//             }
//         }
//         if (sum==i){
//             c+=1;
//         }
//     }
//     printf("%d \n",c);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n,count;
//     printf("value of the given number:-");
//     scanf("%d",&n);
//     int array[n];
//     for(int i=1; i<n; i++) {
//         scanf("%d",&array[i]);
//     }    
//     for(int i=0; i<n; i++) {
//         int c=0;
//         for(int j=1; j<=array[i]; j++) {
//             if (array[i]%j==0) {
//                 c+=1;
//             }
//         }
//         if (c==2) {
//             printf("%d\n",array[i]);
//         }
//     }
//     return 0;        
// }




// #include<stdio.h>
// int main(){
//     int i=0;
//     do{
//         i++;
//         printf("%d\n",i);
//     }while(i<10);
//     return 0;
// }



// perfect number
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("value of the given range:-");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=1;i<n;i++){
//         int sum=0;
//         for(int j=1;j<i;j++){
//             if (i%j==0){
//                 sum+=j;
//             }
//         }
//         if (i==sum){
            
//     printf("%d\n",i);
//         }
//     }
//     return 0;
// }



// second max

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the value of 1st number:-");
//     scanf("%d",&a);
//     printf("enter the value of 2nd number:-");
//     scanf("%d",&b);
//     printf("enter the vlue of 3rd number:-");
//     scanf("%d",&c);
//     int m=0;
//     int sm=0;
//     if (c>b && b>a){
//         m=c;
//         sm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }
//     else if (b>c && c>a) {
//         m=b;
//         sm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }
//     else if (b>a && a>c) {
//         m=b;
//         sm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }
//     else if (a>b && b>c) {
//         m=a;
//         sm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }
//     else if (a>c && c>b) {
//         m=a;
//         sm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }
//     else if (c>a && a>b) {
//         m=c;
//         sm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }else if (a==b && a>c) {
//         m=a;
//         sm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//     }else if (a==b && c>a) {
//         m=c;
//         sm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         } 
//         else {
//         printf("all number is same");
//     }
//     return 0;
// }





// third max
// #include<stdio.h>
// int main(){
//     int a,b,c,d,m,sm,tm;
//     printf("enter the value of 1st number:-");
//     scanf("%d",&a);
//     printf("enter the value of 2nd number:-");
//     scanf("%d",&b);
//     printf("entetr the value of 3rd number:-");
//     scanf("%d",&c);
//     printf("enter the value of 4th number:-");
//     scanf("%d",&d);
//     m=0;
//     sm=0;
//     tm=0;
//     if(d>c && c>b && b>1) {
//         m=d;
//         sm=c;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }
//     else if (b>d && d>c && c>a) {
//         m=b;
//         sm=d;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }else if (d>b && b>c && c>a) {
//         m=d;
//         sm=b;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);

//     }else if (c>b && b>d && d>a) {
//         m=c;
//         sm=b;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);

//     }else if (c>d && d>b && b>a) {
//         m=c;
//         sm=d;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>c && c>d && d>a) {
//         m=b;
//         sm=c;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }else if (d>c && c>a && a>b) {
//         m=d;
//         sm=c;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (d>b && b>a && a>c) {
//         m=d;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (c>b && b>a && a>d) {
//         m=c;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }else if (b>c && c>a && a>d) {
//         m=b;
//         sm=c;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (c>d && d>a && a>b) {
//         m=c;
//         sm=d;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>d && d>a && a>c) {
//         m=b;
//         sm=d;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (d>a && a>b && b>c) {
//         m=d;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (c>a && a>b && b>d){
//         m=c;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (c>a && a>d && d>b) {
//         m=c;
//         sm=a;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>a && a>d && d>c) {
//         m=b;
//         sm=a;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (d>a && a>c && c>b) {
//         m=d;
//         sm=a;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>a && a>c && c>d) {

//         m=b;
//         sm=a;
//         tm=c;
//          printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>d && d>c && c>b) {
//         m=a;
//         sm=d;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>d && d>b && b>c) {
//         m=a;
//         sm=d;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>c && c>b && b>d) {
//         m=a;
//         sm=c;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b>c && c>a) {
//         m=a;
//         sm=b;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>c && c>d && d>b) {
//         m=a;
//         sm=c;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b>d && d>c) {
//         m=a;
//         sm=b;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==b && b>d && d>c) {
//         m=a;
//         sm=d;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>a && b==c && a>d) {
//         m=b;
//         sm=a;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b>c && c==d) {
//         m=d;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==b && b>c && c>d) {
//         m=a;
//         sm=c;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>a && b==c && d>a) {
//         m=b;
//         sm=d;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && c>b && c==d) {
//         m=d;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }
//     else if(a==b && c>b && c<d) {
//         m=c;
//         sm=d;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b==c && d>a) {
//         m=d;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>d && d>b && b==c) {
//         m=a;
//         sm=d;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b>c && c==d) {
//         m=a;
//         sm=b;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>a && a>c && c==d) {
//         m=b;
//         sm=a;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==b && b>c && d>b) {
//         m=d;
//         sm=a;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==b && c>b && b>d) {
//         m=c;
//         sm=a;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>a && b==c && d>b) {
//         m=d;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b==c && b>d) {
//         m=a;
//         sm=b;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>c && c>b && c==d) {
//         m=a;
//         sm=c;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b>c && c>a && d==c) {
//         m=b;
//         sm=c;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==c && b>c && d>b) {
//         m=d;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==c && b>d && d>a) {
//         m=b;
//         sm=d;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==d && b>c && c>d) {
//         m=b;
//         sm=c;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==d && c>b && b>a) {
//         m=c;
//         sm=b;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b==d && a>b && c>a) {
//         m=c;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==c && a>d && b>a) {
//         m=b;
//         sm=a;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==d && b>a && b>c) {
//         m=b;
//         sm=a;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==d && a<c && a>b) {
//         m=c;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==d && a>b && b>c) {
//         m=a;
//         sm=b;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==d && a>c && c>b) {
//         m=a;
//         sm=c;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==c && a>d && d>b) {
//         m=a;
//         sm=d;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a==c && a>b && b>d) {
//         m=a;
//         sm=b;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b==d && a>b && c>a) {
//         m=c;
//         sm=a;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b==d && c>b && a>c) {
//         m=a;
//         sm=c;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (a>b && b==d && b>c) {
//         m=a;
//         sm==b;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b==d && c>b && b>a) {
//         m=c;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b==d && d>c && c>a) {
//         m=d;
//         sm=c;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (b==d && d>a && a>c) {
//         m=d;
//         sm=a;
//         tm=c;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     } else if (c==d && c>b && b>a) {
//         m=c;
//         sm=b;
//         tm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }else if (a>b && d>b && c==d) {
//         m=a;
//         sm=d;
//         tm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("%d\n",tm);
//     }
//     else if (a==b && b==c && d>b) {
//         m=d;
//         sm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("not any third number thi group:-\n");
//     } else if (a==b && b==c && b<d) {
//         m=a;
//         tm=d;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("not any third number thi group:-\n");
//     } else if (a<b && b==c && c==d) {
//         m=b;
//         sm=a;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("not any third number this group:-\n");
//     } else if (a>b && b==c && c==d) {
//         m=a;
//         sm=b;
//         printf("%d\n",m);
//         printf("%d\n",sm);
//         printf("not any third number this group:-\n");
//     }
//      else {
//         printf("all number are same ");
//     }
    
// return 0;
// }



// factorial

// #include<stdio.h>
// int main() {
//     int n;
//     printf("value of the given number:-");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=1; i<=n; i++) {
//         int fac=1;
//         for(int j=1; j<=i; i--) {
//             fac*=i;
//         }
//         arr[n]=fac;
//     }
//     printf("%d ",arr[n]);
//     return 0;
// }



// union intersection
// #include<stdio.h>
// int main() {
//     int n;
//     int a[]={2,3,4,5,6};
//     int b[]={2,3,5,7,8};
//     int u[n];
//     int in[n];
//     printf("value of the 1st lenght number:-");
//     scanf("%d",&n);
//     int c;
//     for(int i=0; i<n; i++) {
//         if (a[i]==b[i]) {
//             u[n]=a[i];
//         } else {
//             in[n]=b[i];
//         }

//     }
//     printf("%d\n %d",u[n],in[n]);
//     return 0;
// }


//  #include<stdio.h>
//  int main(){
//     int n;
//     printf("value of number:-");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&arr[i]);
//     }
//     for (int j=0; j<n; j++) {
//         printf("%d/,",arr[j]);
//     }
// return 0;
//  }



// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter n prakritik number:-");
//     scanf("%d",&n);
//     int arr[10];
//     int sum=0;
//     for (int i=1; i<=n; i++) {
//         sum+=i;
//         scanf("%d",&arr[i]);
//         arr[10]=i;
//     }
//     printf("%d\n",sum);
//     printf("%d\n",arr[10]);
//     return 0;
// }




// #include<stdio.h>
// int main() {
//     int a,p,q;
//     printf("enter the given number:-");
//     scanf("%d",&a);
//     printf("enter value of p:-");
//     scanf("%d",&p);
//     printf("enter value of q:-");
//     scanf("%d",&q);
//     int arr[30];
//     int sum=0;
//     for(int i=1; i<=a; i++) {
//         if (i%p==0 && i%q!=0) {
//             sum+=i;
//             arr[30]=i;
//         }
//     }
//     printf("%d\n",sum);
//     printf("%d\n",arr[30]);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int arr[10]={2,3,4,3,23,22,12,32,34,12};
//     for (int i=1; i<=10; i++) {
//         if (arr[i]%2==0) {
//             arr[10]=i;
//         }
//     }
//     printf("%d\n",arr[10]);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter value of n:-");
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         char s='A';
//         for (int j=0;j<=i;j++ ){
//             printf("%c",s);
//             s++;
            
//         }
//         printf("\n");
        
//     }
// return 0;
// }

// #include <stdio.h> 

// int main(){
//     int n = 4;
//     for (char i = 'A'; i<'A'+n; i++)
//     {
//         printf("%c\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++) {
//         for (int j=1; j<=i; j++) {
//             if (i%2!=0){
//             if (j%2==1) {
//                 printf("0");
//             } else {
//                 printf("1");
//             }
//             }else{
//             if (j%2==1) {
//                 printf("1");
//             } else {
//                 printf("0");
//             }
//             }
//         }
//             printf("\n");
//     }
//     return 0; }
// //
// 0
// 1 0 
// 0 1 0 
// 1 0 1 0 



// #include <stdio.h>
// int main() {
//     int n;
//     double sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) {
//         double a=1/(double)(i * i * i);
//         sum+=a;
//     }
//     printf("%lf\n",sum);
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int k=0;
//     while (k<n)
//     {
//         int sum=0;
//         for (int j=1;j<a[k];j++){
//             if (a[k]%j==0){
//                 sum+=j;
//             }
//         }if (sum==a[k]){
//             printf("perfect=:-%d",a[k]);
//         }
//         k++;
//     }
// return 0;
// }


// prime number

// #include<stdio.h>
// int main(){
//     int n;
//     printf("entetr the value of n:-");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++) {
//         scanf("%d",&a[i]);
//     }
//     // int b[20]={};
//     int j=0;
//     while (j<n) {
//         int count=0;
//         for(int k=1; k<=a[j]; k++) {
//             if (a[j]%k==0) {
//                 count+=1;
//             }
//         } if (count==2) {
//             printf("%d\n",a[j]);
//         }
//         j++;
//     }
//     return 0;
    
// }


// #include<stdio.h>
// int main() {
//     int a,n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     a=n;
//     for (int i=1; i<=n; i++) {
//         printf("%d",);
//     }
// }



// #include<stdio.h>
// int main() {
//     int n,num;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     num=0;
//     for (int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             num++;
//             printf("%d",num);
//         }
//         printf("\n");
//     }
//     return 0;

// }


// power any randome number


// #include<stdio.h>
// int main() {
//     int base,exp;
//     printf("enter the velue of bese:-");
//     scanf("%d",&base);
//     printf("enter the value of exp:-");
//     scanf("%d",&exp);
//     double ans=1;
//     while (exp!=0) {
//         ans*=base;
//         --exp;
//     }
//     printf("%.0lf",ans);
//     return 0;
// }

// sort array
// #include<stdio.h>
// int main() {
//     int a[7]={2,4,7,5,6,3,1};
//     int i=0;
//     while (i<7) {
//         int j=i+1;
//         while (j<7) {
//             if (a[i]>a[j]) {
//                 int temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//                 j++;
//             } else {
//                 j++;
//             }
//         }
//         i++;
//     }
//     printf("%ls",a);
//     return 0;   
// }


// pattern A to Z

// #include<stdio.h>
// int main() {
//     int n;
//     char s='A';
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             printf("%c",s);
//             s++;
//         }
//          s++;
//          s='A';
//          printf("\n");
//     }
//     return 0;
// }


      // max_subarray_sum 

// #include<stdio.h>
// int main(){
//     int n;
//     int s,e;
//     int max_s=0;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int i=0;
//     while (i<n){
//         int j=i;
//         while (j<n){
//             int k=i;
//             int sum_s=0;
//             printf("subarray:-");
//             while (k<=j){
//                 printf("%d",arr[k]);
//                 sum_s+=arr[k];
//                 k++;
//             }if (max_s<sum_s){
//                 max_s=sum_s;
//                 s=i;
//                 e=k;
//             }
//             j++;
//         printf("\n");
//         }
//         i++;
        
//     }
//     printf("%d\n",max_s);
//     while(s<e){
//         printf("%d\n",arr[s]);
//         s++;
//     }
    
// return 0;
// }



// lcm,hcf
// #include<stdio.h>
// int main(){
//     int a,b,min;
//     printf("enter the value of a:- ");
//     scanf("%d",&a);
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     min=0;
//     if (a<b) {
//         min=a;
//     } else {
//         min=b;
//     }
//     int hcf=0;
//     for (int i=1; i<=min; i++) {
//         if (a%i==0 && b%i==0) {
//             hcf=i;
//         }
//     } 
//     int lcm=(a*b)/hcf;
//     printf("%d\n%d",lcm,hcf);
//     return 0;
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
//     addition(a,b);
// }

// #include<stdio.h>
// int main() {
//     printf("hello ajay");
// }



//use function sqrt

// #include <stdio.h>
// #include<math.h>
// int main() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int root=sqrt(a);
//     printf("square rooth of a:= %d",root);

//     return 0;
// }



// use pow function

// #include <stdio.h>
// #include<math.h>
// int main() {
//     int a,b;
//     printf("enter the value of a,b:-");
//     scanf("%d%d",&a,&b);
//     int root=pow(a,b);
//     printf("square rooth of a:= %d",root);

//     return 0;
// }




// #include<stdio.h>
// int main() {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int ajay=(a*((a>>31)|1));
//     printf("%d",ajay);
// }