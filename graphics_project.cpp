#include <graphics.h>
#include <iostream>
#include <dos.h>
#include <windows.h>
#include <process.h>
using namespace std;
int main()
{
	initwindow(1355,700,"Mini Game");
	//ROAD
	setcolor(LIGHTGRAY);for(int i=400; i<=420; i++)line(0,i,1500,i);
	//GREENARY
	setcolor(GREEN);for(int k=425; k<=440; k++)line(0,k,1500,k);
	//WATER
	setcolor(BLUE);
	for(int k=440; k<=1000; k++)line(0,k,1500,k);
    //MOUNTAINS
setcolor(GREEN);
for(int j=200; j<=202; j++)line(0,j,1500,j);
setfillstyle(1,GREEN);
line(0,200,150,100);
line(150,100,250,200);
floodfill(150,170,GREEN);
line(225,200,375,100);
line(375,100,475,200);
floodfill(375,130,GREEN);
line(425,200,550,100);
line(550,100,650,200);
floodfill(550,130,GREEN);
line(625,200,700,100);
line(700,100,825,200);
floodfill(700,130,GREEN);
line(775,200,900,100);
line(900,100,1025,200);
floodfill(900,130,GREEN);
line(975,200,1050,100);
line(1050,100,1150,200);
floodfill(1050,130,GREEN);
line(1125,200,1250,100);
line(1250,100,1350,200);
floodfill(1250,130,GREEN);

//SUN
setcolor(YELLOW);	
circle(240,100,40);
setfillstyle(1,YELLOW);
floodfill(240,100,YELLOW);

//BOAT
setcolor(CYAN);
arc(1050,400,230,310,170);
for(int x1=940; x1<=960; x1++)line(x1,530,1000,615);
for(int x2=1170; x2>=1150; x2--)line(x2,530,1100,615);
for(int y=615; y>=570; y-- )line(1000,y,1100,y);
for(int x=1050; x<=1052; x++)line(x,615,x,475);
for(int y=475; y<=515; y++)line(1050,y,1125,y);

//CAR
int c1=220,c2=310,l1x1=170,l1x2=350,l2x1=200,l2x2=310,s=1;
	setcolor(RED);setfillstyle(1,RED);
circle(c1,385,15);
floodfill(c1,385,RED);
circle(c2,385,15);
floodfill(c2,385,RED);setcolor(LIGHTRED);
for(int i=330; i<=370; i++)line(l1x1,i,l1x2,i);setcolor(RED);
for(int k=310; k<=330; k++)line(l2x1,k,l2x2,k);


//FISH 1

setcolor(LIGHTGRAY);
setfillstyle(1,LIGHTGRAY);
ellipse(300,550,0,360,30,18);
floodfill(300,550,LIGHTGRAY);
line(270,550,240,535);
line(270,550,240,565);
line(240,535,240,565);
setcolor(BLACK);
circle(315,545,4);setfillstyle(1,BLACK);
floodfill(315,545,BLACK);

//FISH 2
setcolor(LIGHTGRAY);
setfillstyle(1,LIGHTGRAY);
ellipse(125,500,0,360,30,18);
floodfill(125,500,LIGHTGRAY);
line(95,500,65,485);
line(95,500,65,515);
line(65,485,65,515);setcolor(BLACK);
circle(140,495,4);
setfillstyle(1,BLACK);
floodfill(140,495,BLACK);

//FISH 3

setcolor(LIGHTGRAY);
ellipse(125,600,0,360,30,18);setfillstyle(1,LIGHTGRAY);floodfill(125,600,LIGHTGRAY);
line(95,600,65,585);
line(95,600,65,615);
line(65,585,65,615);setcolor(BLACK);setfillstyle(1,BLACK);
//for(int i=140; i<=800; i++){
circle(140,595,4);floodfill(140,595,BLACK);
//}

//AIRPLANE
for(int k=1; k<=6; k++)
{ 
for(int i=-200; i<=1600; i++)
{
int c=1+2*rand()%5;
setcolor(c);
int t[6]={140+i,245,160+i,255,140+i,265};
drawpoly(3,t);setcolor(k+2);for(int y=245; y<=265; y++)line(50+i,y,140+i,y);
for(int y=250; y<=260; y++)line(50+i,y,30+i,y);
line(30+i,250,10+i,230);
line(30+i,260,10+i,280);
line(10+i,230,10+i,280);
line(80+i,245,60+i,225);
line(90+i,245,70+i,225);
line(60+i,225,70+i,225);
line(80+i,255,55+i,285);
line(95+i,255,65+i,290);
line(55+i,285,65+i,290);
delay(1);


setcolor(BLACK);
for(int y=245; y<=265; y++)line(50+i,y,140+i,y);
for(int y=250; y<=260; y++)line(50+i,y,30+i,y);
line(30+i,250,10+i,230);
line(30+i,260,10+i,280);
line(10+i,230,10+i,280);
line(80+i,245,60+i,225);
line(90+i,245,70+i,225);
line(60+i,225,70+i,225);
line(80+i,255,55+i,285);
line(95+i,255,65+i,290);
line(55+i,285,65+i,290);
}
}
getch();
}
