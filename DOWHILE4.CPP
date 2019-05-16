#include <stdio.h>
#include <conio.h>
#include <dos.h>

int num=0;

void main(){
clrscr();
printf("Ingrese un numero inicial: ");
scanf("%d", &num);
do{
printf("Su numero equivale a %d\n", num);
delay(75);
num++;
}
while(num<=100);
getch();
}