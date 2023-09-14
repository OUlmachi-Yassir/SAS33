#include<stdio.h>
#include<math.h>
int main()
{
float Tc,Tf,T;
char unite ;
printf("donner une temperature : ");
scanf("%f",&T);
getchar();
printf("unite est : ");
scanf("%c",&unite);
switch (unite)
{
case 'f':
   {
 Tc=(T-32)/1.8;
 printf("le temperature en celisus est : %.2f%c",Tc,unite);
 if (Tc<0)
 {
    printf("tres froid");
 }
 else if (Tc<10)
 {
    printf("froid");
 }
 else if (Tc<25)
 {
    printf("chaud");
 }
 else
 {
    printf("tres chaud");
 }
}
   break;
case 'c':{
Tf=(T*1.8)+32;
printf("le temperature en celisus est : %.2f%c", Tf,unite);
 if (Tf<32)
 {
    printf("tres froid");
 }
 else if (Tf<50)
 {
    printf("froid");
 }
 else if (Tf<77)
 {
    printf("chaud");
 }
 else
 {
    printf("tres chaud");
 }
}
   break;


}
 
}