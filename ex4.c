#include<stdio.h>
int main()
{
int a,b,c,d,s;
float m;
printf("dooner le 1er nombre : ");
scanf("%d",&a);
printf("dooner le 2eme nombre : ");
scanf("%d",&b);
printf("dooner le 3eme nombre : ");
scanf("%d",&c);
printf("dooner le 4eme nombre : ");
scanf("%d",&d);
s=a+b+c+d;
printf("la somme est : %d",s);
m=(float)s/4;
printf("le moyenne est: %.2f",m);

}