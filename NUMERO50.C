#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>

time_t t;
int x1,x2,x3; //Horizontal
int y1,y2,y3,y4; // Vertical
int h5=35;
int v5=10;
int comb;


int main(){f
for(comb; comb<=50; comb++){
	clrscr();
	srand ((unsigned) time(&t));
	x1 = rand()%2;
	x2 = rand()%2;
	x3 = rand()%2;
	y1 = rand()%2;
	y2 = rand()%2;
	y3 = rand()%2;
	y4 = rand()%2;
	gotoxy(26,10); printf("X1= %d", x1);
	gotoxy(26,11); printf("X2= %d", x2);
	gotoxy(26,12); printf("X3= %d", x3);
	gotoxy(45,10); printf("Y1= %d", y1);
	gotoxy(45,11); printf("Y2= %d", y2);
	gotoxy(45,12); printf("Y3= %d", y3);
	gotoxy(45,13); printf("Y4= %d", y4);

	//X1 Horizontal
	if(x1==1){
	for(h5; h5<=40; h5++){
	gotoxy(h5,10); printf("Û");
	}}
	h5=35;

	//X2 Horizontal
	if(x2==1){
	for(h5; h5<=40; h5++){
	gotoxy(h5,15); printf("Û");
	}}
	h5=35;

	//X3 Horizontal
	if(x3==1){
	for(h5; h5<=40; h5++){
	gotoxy(h5,20); printf("Û");
	}}

	//Y1 Vertical
	if(y1==1){
	for(v5; v5<=15; v5++){
	gotoxy(35,v5); printf("Û");
	}}
	v5=10;

	//Y2 Vertical
	if(y2==1){
	for(v5; v5<=15; v5++){
	gotoxy(40,v5); printf("Û");
	}}
	v5=10;

	//Y3 Vertical
	if(y3==1){
	for(v5; v5<=20; v5++){
	gotoxy(35,v5); printf("Û");
	}}
	v5=10;

	//Y4 Vertical
	if(y4==1){
	for(v5; v5<=20; v5++){
	gotoxy(40,v5); printf("Û");
	}}
	delay(720);
	clrscr();
}
return 0;
}