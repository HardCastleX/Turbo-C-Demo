#include <stdio.h>
#include <conio.h>
#include <dos.h>

int num=0;

void main(){
clrscr();
do{
printf("Su numero equivale a %d\n", num);
delay(50);
num++;
}
while(num<=10);
getch();
}