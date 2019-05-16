#include <stdio.h>
#include <conio.h>
#include <dos.h>

int num=0;

void main(){
clrscr();
do{
printf("Hola mundo\n");
delay(50);
num++;
}
while(num<=10);
getch();
}