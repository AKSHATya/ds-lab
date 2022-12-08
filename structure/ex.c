#include <stdio.h>
#include <stdlib.h>
/*struct student
{
   int marks;
   int roll;
   char name[20];
}s;
scanf("%d%d%s",&s.marks,&s.roll,s.name);*/
/***           4          ***/
/*
  int i, j;

   struct hieght
   {
      int feet;
      int inches;
   } h[2];
   scanf("%d%d%d%d", &h[0].feet, &h[0].inches, &h[1].feet, &h[1].inches);

   i = (h[0].inches + h[1].inches) % 12;
   j = (h[0].inches + h[1].inches) / 12;
   printf("%d feet %d inches", h[0].feet + h[1].feet + j, i);
*/

/*              6                 */

/*
   int i, j;

   struct time
   {
      int hour, minute, second;
   } t[2];
   for (int i = 0; i < 2; i++)
   {
      scanf("%d%d%d", &t[i].hour, &t[i].minute, &t[i].second);
   }
   i = (t[0].second + t[1].second) / 60;
   j = (t[0].minute + t[1].minute + i) / 60;

   printf("%dhour %d minute %dsecond", t[0].hour + t[1].hour + j, (t[0].minute + t[1].minute + i) % 60, (t[0].second + t[1].second) % 60);*/

/*                5                 */
/*
struct complex
{
   int a,b;
}c[2];

scanf("%d%d%d%d",&c[0].a,&c[0].b,&c[1].a,&c[1].b);

printf("%d + %di",c[0].a+c[1].a,c[0].b+c[1].b);
*/

/*                8                */
/*
int main()
{
struct complex
{
   int a,b;
}c1,c2;

scanf("%d%d%d%d",&c1.a,&c1.b,&c2.a,&c2.b);
printf("%d + %di",c1.a+c2.a,c1.b+c2.b);     // addition
printf("%d + %di",c1.a*c2.a-c1.b*c2.b,c1.a*c2.b+c1.b*c2.a);

   return 0;
}
//ac-bd ad+bc*/

/**                9                 */

/*
int main(){
struct student
{
   int marks;
   int roll;
   char name[20];
}s[3];
int i;
for(i=0;i<3;i++){
scanf("%d%d%s",&s[i].marks,&s[i].roll,s[i].name);
}
for(i=0;i<3;i++){
printf("%d%d%s",s[i].marks,s[i].roll,s[i].name);
}

return 0;}*/


/*                   7              */

/**
struct student
{
   int roll, marks;
   char name[20];
} s[5], *s1;

int main()
{
   int i=0;
   s1 = &s[0];
   for(i=0;i<2;i++){
   scanf("%d%s%d", &(s1+i)->roll, &(s1+i)->name, &(s1+i)->marks);
   }
    
   for( i=0;i<2;i++){   
   printf("%d %s %d\n", (s1+i)->roll, (s1+i)->name, (s1+i)->marks);
   }
   return 0;
}*/

/*                   10            */
/*
struct customer
{
   int salary, balance;
   char name[20];
} s[15];




int main()
{
   int i=0;
   
   for(i=0;i<12;i++){
   scanf("%d%s%d", &s[i].salary, s[i].name, &s[i].balance);
   }
   for(i=0;i<12;i++){
   printf("%d %s %d\n", s[i].salary, s[i].name, s[i].balance);
   }
    
   return 0;
}*/

/*                    11              */
/*
struct date {
   int day ,month ,year;
}s[2];

int main(){
int i;
for(i=0;i<2;i++){
scanf("%d%d%d",&s[i].day,&s[i].month,&s[i].year);}
if(s->day==s[1].day&&s->month==s[1].month&&s->year==s[1].year)
printf("equal");
else printf("not equal");

   return 0;
}*/


/*                      12               */


struct salary
{
   int salary, balance;
   char name[20];
} s[2];

int main()
{
   int i=0;
   
   for(i=0;i<12;i++){
   scanf("%d%s%d", &s[i].salary, s[i].name, &s[i].balance);
   }
   for(i=0;i<12;i++){
   printf("%d %s %d\n", s[i].salary, s[i].name, s[i].balance);
   }
   
    
   return 0;
}
