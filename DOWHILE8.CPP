#include <stdio.h>
#include <conio.h>

int num=0;
int suma=0;

void main(){
clrscr();
do{
	printf("Teclea un numero: ");
	scanf("%d", &num);
	suma=num+suma;
}
while(num!=0);
printf("Felicidades, ingresaste el numero correcto\n");
printf("La suma de tus intentos fue de %d", suma);
getch();
}