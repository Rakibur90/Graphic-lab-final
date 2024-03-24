#include<iostream>
using namespace std;

#include <graphics.h>

#include <cmath>
#include<ctime>
#include <string>

const double pi = 3.14159265;


void bank(){
    initwindow(1000,1000,"BANK");
    setcolor(DARKGRAY);
  setfillstyle(SOLID_FILL,8);
    rectangle(100,160,500,360);
    floodfill(140,163,8);

     setcolor(7);
    setfillstyle(SOLID_FILL,7);
    rectangle(91,140,510,160);
    floodfill(96,141,7);
     setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(85,130,515,145);
    floodfill( 86,131,4);

    setcolor(8);
    setfillstyle(SOLID_FILL,8);
    line(95,130,305,40);
    line(505,130,305,40);
   line(95,130,505,130);
   floodfill(306,50,8);

   setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(95,160,130,165);
     floodfill(96,161,4);

      setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(97,165,125,172);
   floodfill(98,166,4);

     setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(100,165,122,360);
   floodfill(105,220,4);


   setcolor(4);
  setfillstyle(SOLID_FILL,4);
  rectangle(475,160,508,165);
   floodfill(481,161,4);

     setcolor(4);
  setfillstyle(SOLID_FILL,4);
  rectangle(480,165,505,170);
   floodfill(481,166,4);

     setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(482,165,502,360);
   floodfill(485,220,4);


 setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(270,245,325,360);
   floodfill(271,247,4);

   setcolor(7);
  setfillstyle(SOLID_FILL,7);
   rectangle(265,245,330,237);
   floodfill(267,239,7);

    setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(283,170,313,230);
   floodfill(284,177,15);

   setcolor(0);
   setfillstyle(SOLID_FILL,0);
   line(298,170,298,230);
   line(283,190,313,190);


    setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(200,160,235,165);
    floodfill(201,161,4);

    setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(203,165,232,172);
    floodfill(204,166,4);

    setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(206,172,229,360);
    floodfill(208,220,4);

    setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(358,160,392,165);
   floodfill(359,161,4);

   setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(360,165,390,170);
   floodfill(361,166,4);

   setcolor(4);
  setfillstyle(SOLID_FILL,4);
   rectangle(363,170,387,360);
   floodfill(364,222,4);

    setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(422,178,443,230);
   floodfill(423,179,15);

    setcolor(0);
  setfillstyle(SOLID_FILL,0);

  line(432.5,178,432.5,230);
   line(422,200,443,200);

    setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(422,280,443,332);
   floodfill(424,283,15);

   setcolor(0);
  setfillstyle(SOLID_FILL,0);

  line(432.5,280,432.5,332);
   line(422,298,443,298);


    setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(153,178,175,230);
   floodfill(154,179,15);

    setcolor(0);
  setfillstyle(SOLID_FILL,0);

   line(164,178,164,230);
   line(153,200,175,200);

   setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(153,280,175,332);
   floodfill(154,283,15);

   setcolor(0);
  setfillstyle(SOLID_FILL,0);

  line(164,280,164,332);
   line(153,298,175,298);

    setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(275,255,292,300);
   floodfill(276,256,15);

     setcolor(15);
  setfillstyle(SOLID_FILL,15);
   rectangle(304,255,320,300);
   floodfill(305,256,15);

   setcolor(15);
  setfillstyle(SOLID_FILL,15);
   circle(315,320,5);

  rectangle(80,360,520,365);

settextstyle(9,0,2);
outtextxy(265,100,"SIBL");
setcolor(14);







    getch();
    closegraph();
}

void Flag(){
    initwindow(1000,1000,"flag");

    setcolor(7);


     setcolor(GREEN);
    rectangle(50,50,315,218);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(90,90,GREEN);

     setcolor(WHITE);
    rectangle(50,40,40,420);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(41,41,WHITE);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    circle(45,35,9);
    floodfill(45,35,15);

    setcolor(RED);
    circle(195,132,50);
    setfillstyle(SOLID_FILL,RED);
    floodfill(194,130,RED);


    setcolor(6);
    rectangle(12,405,80,420);
    setfillstyle(SOLID_FILL,6);
    floodfill(16,406,6);

    setcolor(6);
    rectangle(23,395,65,405);
    setfillstyle(SOLID_FILL,6);
    floodfill(24,396,6);







    setcolor(WHITE);
    line(00,420,720,420);

    getch();
    closegraph();
}

void house(){
    initwindow(1000,1000,"HOUSE");
     setcolor(CYAN);
     setfillstyle(SOLID_FILL,3);
     line(150,150,500,150);
     line(150,150,190,110);
     line(500,150,460,110);
     line(190,110,460,110);
     floodfill(251,140,3);

     setcolor(BROWN);
     setfillstyle(SOLID_FILL,BROWN);
     line(190,110,460,110);
     line(190,110,220,80);
     line(460,110,430,80);
     line(220,80,430,80);
     floodfill(221,90,6);


       setcolor(8);
     setfillstyle(SOLID_FILL,8);
     line(220,80,430,80);
     line(250,50,400,50);
      line(220,80,250,50);
      line(430,80,400,50);
    floodfill(251,60,8);


       setcolor(WHITE);
     setfillstyle(SOLID_FILL,15);
     line(170,150,480,150);
     line(170,150,170,360);
    line(480,150,480,360);
    line(170,360,480,360);
    floodfill(171,160,15);

     setcolor(RED);
     setfillstyle(SOLID_FILL,4);
     line(170,150,170,360);
     line(275,150,275,360);
    line(480,150,480,360);
    line(370,150,370,360);
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    line(285,190,360,190);
    line(285,190,285,360);
    line(360,190,360,360);
    line(285,360,360,360);
    floodfill(286,195,4);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,15);
    circle(350,275,8);
    floodfill(351,274,15);

     setcolor(3);
    setfillstyle(SOLID_FILL,3);
    line(275,150,325,80);
    line(370,150,325,80);
    line(275,150,250,150);
    line(370,150,395,150);
    line(250,150,325,35);
    line(395,150,325,35);
    floodfill(325,40,3);




     setcolor(3);
     setfillstyle(SOLID_FILL,3);
    line(195,220,245,220);
    line(195,220,195,280);
    line(195,280,245,280);
    line(245,220,245,280);
    floodfill(200,221,3);

    setcolor(3);
    setfillstyle(SOLID_FILL,3);
    line(395,220,445,220);
    line(395,220,395,280);
    line(395,280,445,280);
    line(445,220,445,280);
    floodfill(397,221,3);

    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    line(395,250,445,250);
    line(420,220,420,280);

    setcolor(4);
    setfillstyle(SOLID_FILL,4);
     line(195,250,245,250);
     line(220,220,220,280);


      setcolor(WHITE);
      line(00,360,720,360);

     setcolor(2);
     setfillstyle(SOLID_FILL,2);
     ellipse(535,230,0,360,30,30);
    floodfill(520,221,2);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,2);
     ellipse(578,235,0,360,30,30);
     floodfill(580,250,2);

     setcolor(2);
     setfillstyle(SOLID_FILL,2);
     ellipse(555,215,0,360,30,40);
     floodfill(556,200,2);

     setcolor(BROWN);
     setfillstyle(SOLID_FILL,6);
     line(555,360,555,255);
     line(550,255,550,360);
     line(550,255,555,255);
     line(550,360,555,360);
     floodfill(551,256,6);







    getch();
    closegraph();
}

void fish(){
    initwindow(1000,500,"car");

     circle(550,200,25);
    circle(580,150,15);
    circle(580,250,15);
    circle(600,200,15);

      setcolor(BLUE);
     setfillstyle(SOLID_FILL,BLUE);
     ellipse(300,200,0,360,180,50);
     floodfill(301,201,BLUE);

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
     ellipse(445,200,0,360,35,25);
     floodfill(446,201,YELLOW);

     setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
     circle(450,195,5);
     floodfill(451,196,RED);

      setcolor(RED);
      setfillstyle(SOLID_FILL,RED);
     line(120,180,80,150);
     line(120,220,80,260);
     line(120,180,120,220);
     line(80,150,110,200);
     line(80,260,110,200);
     floodfill(111,220,RED);

     setcolor(RED);
     setfillstyle(SOLID_FILL,RED);
     line(300,150,200,80);
     line(200,80,250,150);
     line(300,150,250,150);
     floodfill(251,140,RED);


   //line(300,150,300,250);
       setcolor(RED);
     setfillstyle(SOLID_FILL,RED);
     line(300,250,200,300);
     line(200,300,250,250);
    line(300,250,250,250);
    floodfill(261,260,RED);

	getch();

	closegraph();
}


int main(){
    int gd = DETECT, gm;
    cout<<"NAME : MD. Rakibur Rahman"<<endl;
    cout<<"ID : CSE2101022070"<<endl;
    cout<<"=========================="<<endl;
    cout<<"-------------MENU---------"<<endl;
    cout<<"            1.bank"<<endl;
    cout<<"            2.Flag"<<endl;
    cout<<"            3.house"<<endl;
    cout<<"            4.fish"<<endl;

    cout<<"            Enter 0 to Exit"<<endl;

    cout<<"==========================="<<endl;
    int x;
    while(1){
    cout<<"Enter your choice from menu "<<endl;
    cin>>x;
    switch(x){
        case 1:
            bank();
            break;
        case 2:
            Flag();
            break;
        case 3:
            house();
            break;
        case 4:
            fish();
            break;


            return 0;
        default :
            cout<<"choose from menu number"<<endl;
            break;
        }
    }
}
