#include<stdio.h>
int main()
{
int a,b;
float s,p,d,r,m;
printf("dooner le 1er nombre : ");
scanf("%d",&a);
printf("dooner le 2eme nombre : ");
scanf("%d",&b);
s=a+b;
p=a*b;
d=(float) a/b;
r=a%b;
m=a-b;
printf("la somme est : %f",s);
printf("le produit est : %f",p);
printf("la devision est : %f",d);
printf("le modulo est : %f",r);
printf("la sustraction est : %f",m);

}