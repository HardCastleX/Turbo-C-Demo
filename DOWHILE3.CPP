#include <stdio.h>
#include <conio.h>
#include <dos.h>

int num=100;

void main(){
clrscr();
do{
printf("Su numero equivale a %d\n", num);
delay(75);
num--;
}
while(num>=1);
getch();
}