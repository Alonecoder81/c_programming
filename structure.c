// #include<stdio.h>
// int main() {
//     struct pokemon {
//         int hp;
//         int speed;
//         int attack;
//         char tier;     //S,A,B,C
//     };
//     struct pokemon pikachu;
//     pikachu.attack=60;
//     pikachu.hp=50;
//     pikachu.speed=100;
//     pikachu.tier='A'; 

//     printf("%d\n",pikachu.attack);

//     struct pokemon charizard;
//     charizard.attack=130;
//     charizard.hp=80;
//     charizard.speed=80;
//     charizard.tier='S';

//     struct pokemon mewtwo;
//     mewtwo.attack=123;
//     printf("enter the value of mewtwo.hp:-");
//     scanf("%d",&mewtwo.hp);
//     // mewtwo.hp=180;
//     mewtwo.speed=140;
//     mewtwo.tier='W';

//     printf("%d\n",mewtwo.hp);
// }


// #include<stdio.h>
// int main() {
//     struct ajay {
//         int age;
//         int hight;
//         char name;
//     };
//     struct ajay kumar;
//     printf("enter the value of kumar.age:-");
//     scanf("%d",&kumar.age);
//     printf("enter the value of kumar.hight:-");
//     scanf("%d",&kumar.hight);
//     kumar.name='A';

//     printf("%d\n%d\n%c\n",kumar.age,kumar.hight,kumar.name);
// }




// #include<stdio.h>
// int main() {
//     struct lambai {
//         int laptop;
//         int rathore;
//         int wire;
//         int display;
//     };
//      struct lambai hacking;

//      printf("enter the value of hacking.laptop:-");
//      scanf("%d",&hacking.laptop);
//      printf("enter the value of hacking.rathore:-");
//      scanf("%d",&hacking.rathore);
//      printf("enter the value of hacking.wire:-");
//      scanf("%d",&hacking.wire);
//      printf("enter the value of hacking.display:-");
//      scanf("%d",&hacking.display);

//      printf("%d\n%d\n%d\n%d\n",hacking.laptop,hacking.rathore,hacking.wire,hacking.display);
// }



// #include<stdio.h>
// int main() {
//     struct pokemon {
//         int hp;
//         int speed;
//         int attack;
//         char tier;     //S,A,B,C
//     } pikachu,charizard,mewtwo;
//     // struct pokemon pikachu;
//     pikachu.attack=60;
//     pikachu.hp=50;
//     pikachu.speed=100;
//     pikachu.tier='A'; 

//     printf("%d\n",pikachu.attack);

//     // struct pokemon charizard;
//     charizard.attack=130;
//     charizard.hp=80;
//     charizard.speed=80;
//     charizard.tier='S';

//     // struct pokemon mewtwo;
//     mewtwo.attack=123;
//     printf("enter the value of mewtwo.hp:-");
//     scanf("%d",&mewtwo.hp);
//     // mewtwo.hp=180;
//     mewtwo.speed=140;
//     mewtwo.tier='W';

//     printf("%d\n",mewtwo.hp);
// }



// #include<stdio.h>
// #include<string.h>
// int main() {
//     struct book {
//         char name[20];
//         int price;
//         int page;
//     } books,kitab;


//     printf("enter the value of books.price\n:-");
//     scanf("%d",&books.price);
//     printf("enter the value of books.page\n:-");
//     scanf("%d",&books.page);
//     strcpy(books.name,"math_ajay");

//     printf("%s\n%d\n%d\n",books.name,books.price,books.page);


//     printf("enter the value of books.price\n:-");
//     scanf("%d",&kitab.price);
//     printf("enter the value of books.page\n:-");
//     scanf("%d",&kitab.page);
//     strcpy(kitab.name,"math_ajay_kumar");

//     printf("%s\n%d\n%d\n",kitab.name,kitab.price,kitab.page);
// }




// #include<stdio.h>
// #include<string.h>
// int main() {
//     struct person{
//         char name[20];
//         int salary;
//         int age;
//     } A,B;
//     strcpy(A.name,"ajay_kumar");
//     printf("enter the value of A.salary:-");
//     scanf("%d",&A.salary);
//     printf("enter the value of A.age:-");
//     scanf("%d",&A.age);

//     printf("%s\n%d\n%d\n",A.name,A.salary,A.age);


//     strcpy(B.name,"ajays_kumar");
//     printf("enter the value of B.salary:-");
//     scanf("%d",&B.salary);
//     printf("enter the value of B.age:-");
//     scanf("%d",&B.age);

//     printf("%s\n%d\n%d\n",B.name,B.salary,B.age);
// }





// #include<stdio.h>
// int main() {
//     struct car {
//         int length;
//         int width;
//         int hight;
//         int tiers;
//         int seet;
//     } thar,scorpio,bmw;

//     // struct car thar;
//     printf("enter the value of thar.length:-");
//     scanf("%d",&thar.length);
//     printf("enter the value of thar.width:-");
//     scanf("%d",&thar.width);
//     printf("enter the value of thar.hight");
//     scanf("%d",&thar.hight);
//     printf("enter the value of thar.tiers:-");
//     scanf("%d",&thar.tiers);
//     printf("enter the value of thar.seet:-");
//     scanf("%d",&thar.seet);

//     printf("%d\n%d\n%d\n%d\n%d\n",thar.length,thar.width,thar.hight,thar.tiers,thar.seet);


//     // struct car scorpio;

//     printf("enter the value of scorpio.length:-");
//     scanf("%d",&scorpio.length);
//     printf("enter the value of scorpio.width:-");
//     scanf("%d",&scorpio.width);
//     printf("enter the value of scorpio.hight");
//     scanf("%d",&scorpio.hight);
//     printf("enter the value of scorpio.tiers:-");
//     scanf("%d",&scorpio.tiers);
//     printf("enter the value of scorpio.seet:-");
//     scanf("%d",&scorpio.seet);

//     printf("%d\n%d\n%d\n%d\n%d\n",scorpio.length,scorpio.width,scorpio.hight,scorpio.tiers,scorpio.seet);

//     // struct car bmw;

//     printf("enter the value of bmw.length:-");
//     scanf("%d",&bmw.length);
//     printf("enter the value of bmw.width:-");
//     scanf("%d",&bmw.width);
//     printf("enter the value of bmw.hight");
//     scanf("%d",&bmw.hight);
//     printf("enter the value of bmw.tiers:-");
//     scanf("%d",&bmw.tiers);
//     printf("enter the value of bmw.seet:-");
//     scanf("%d",&bmw.seet);

//     printf("%d\n%d\n%d\n%d\n%d\n",bmw.length,bmw.width,bmw.hight,bmw.tiers,bmw.seet);

// }



// #include<stdio.h>
// typedef float realnumber;
// int main() {
//     int x;
//     realnumber y=4.3345;printf("%f",y);
// }



// #include<stdio.h>      // typedef ke madad se kisi bhi datatype ka name badal sakte hain
// int main() {
//     typedef struct ajay {
//         int a;
//         int b;
//         int c;
//     } ajay;

//     ajay d;
//     ajay e;
//     d.a=90;
//     d.b=43;
//     d.c=76;
//     printf("%d\n",d.a);

//     e.a=23;
//     e.b=43;
//     e.c=53;
//     printf("%d\n",e.b);
// }


// #include<stdio.h>
// typedef int* pointer;
// int main() {
//     int a=5,b=4;
//     pointer x=&a,y=&b;
//     printf("%p\n",x);
//     printf("%p\n",y);
// }


// array


// #include<stdio.h>
// #include<string.h>
// int main() {
//     typedef struct ajay {
//         int a;
//         int b;
//         int c;
//         char f[10];
//     }ajay;
//     ajay d[3];
//     printf("enter the value of d[0].a:-");
//     scanf("%d",&d[0].a);
//     printf("enter the value of d[0].b:-");
//     scanf("%d",&d[0].b);
//     printf("enter the value of d[0].c:-");
//     scanf("%d",&d[0].c);
//     strcpy(d[0].f,"ajay");

//     printf("enter the value of d[1].a:-");
//     scanf("%d",&d[1].a);
//     printf("enter the value of d[1].b:-");
//     scanf("%d",&d[1].b);
//     printf("enter the value of d[1].c:-");
//     scanf("%d",&d[1].c);
//     strcpy(d[1].f,"kumar");


//     printf("enter the value of d[2].a:-");
//     scanf("%d",&d[2].a);
//     printf("enter the value of d[2].b:-");
//     scanf("%d",&d[2].b);
//     printf("enter the value of d[2].c:-");
//     scanf("%d",&d[2].c);
//     strcpy(d[2].f,"suryavanshi");

//     for (int i=0; i<3; i++) {
//         printf("%d\n%d\n%d\n%s\n",d[i].a,d[i].b,d[i].c,d[i].f);
//     }

// }
 

//  #include<stdio.h>
//  int main() {
//     typedef struct ajay {
//         int a;
//         int b;
//         int c;
//     }ajay;
//     ajay d[3];
//     for (int i=0; i<3; i++) {
//         printf("enter the value of d[i].a:-");
//         scanf("%d%d%d",&d[i].a,&d[i].b,&d[i].c);
//         // printf("enter the valueof d[i].b:-");
//         // scnaf("%d",&d[i].b);
//         // printf("enter the value of d[i].c:-");
//         // scanf("%d",&d[i].c);
//     }

//     for (int i=0; i<3; i++) {
//         printf("%d\n%d\n%d\n",d[i].a,d[i].b,d[i].c);
//     }
//  }


// #include<stdio.h>
// #include<string.h>
// int main() {
//     typedef struct ajay {
//         char name[10];
//         int age;
//         int number;
//         int test_match;
//     } ajay;
//     ajay d[3];
//     strcpy(d[0].name,"ajay");
//     strcpy(d[1].name,"kumar");
//     strcpy(d[2].name,"suryavanshi");
//     for (int i=0; i<3; i++)  {
//         printf("entr the value of d[i].age,d[i].number,d[i].test_match:-");
//         scanf("%d%d%d",&d[i].age,&d[i].number,&d[i].test_match);
//     }
//     for (int i=0; i<3; i++) {
//         printf("%s\n%d\n%d\n%d\n",d[i].name,d[i].age,d[i].number,d[i].test_match);
//     }
// }


// #include<stdio.h>
// int main() {
//     typedef struct ajay {
//         char name[10];
//         int age;
//         int packege;
//         int number;
//     } ajay;
//     ajay seet[3];
//     strcpy(seet[0].name,"ajay");
//     strcpy(seet[1].name,"kumar");
//     strcpy(seet[2].name,"suryavanshi");

// }





