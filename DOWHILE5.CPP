#include <stdio.h>
#include <conio.h>
#include <dos.h>

int num=0;
int num2=0;

void main(){
clrscr();
printf("Ingrese su numero inicial: ");
scanf("%d", &num);
printf("Ingrese su numero final: ");
scanf("%d", &num2);
do{
printf("Su numero equivale a %d\n", num);
delay(75);
num++;
}
while(num<=num2);
getch();
}