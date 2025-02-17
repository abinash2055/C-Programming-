//Program:
#include<conio.h>
#include<graphics.h>
#include<dos.h>

//Animation
void Helicopter();
void Letters();
void Go();
void Close();

void main()
{
  clrscr();
  int gd=DETECT, gm;
  initgraph(&gd, &gm,"C://TurboC3/BGI");
  Letters();
  Go();
  Helicopter();
  Close();
  getch();
  closegraph();
}

 void Letters(){
  for(int i=0;i<50;i++){

    settextstyle(3,HORIZ_DIR,4);
    outtextxy(80,150,"An animation is going to happen...");
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(250,200,"3");
    setcolor(RED);
    delay(30);
    cleardevice();
    }

 for(int j=0;j<30;j++){
    settextstyle(3,HORIZ_DIR,4);
    outtextxy(80,150,"An animation is going to happen...");
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(250,200,"2");
    setcolor(YELLOW);
    delay(50);
    cleardevice();
    }

 for(int k=0;k<20;k++){
    settextstyle(3,HORIZ_DIR,4);
    outtextxy(80,150,"An animation is going to happen...");
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(250,200,"1");
    setcolor(GREEN);
    delay(50);
    cleardevice();
    }

 }
 //This Go is only to make it stand for some time
 void Go(){
//...........     For Background   .........
 for(int l=0;l<50;l++){
  //Road
  line(0,392,900,392);
  //Garage
  rectangle(0,392,180,300);
  line(180,300,220,320);
  //mountain
  line(0,199,200,100);
  arc(220,157,49,118,60);
  line(259,112,460,300);
  line(353,200,600,60);
  arc(625,115,49,118,60);
  //Sun
  arc(356,200,33,139,40);
  line(327,169,300,140);
  line(335,165,322,148);
  line(345,162,327,129);
  line(355,160,348,137);
  line(365,161,367,124);
  line(375,164,382,137);
  line(381,168,410,134);
  line(387,172,413,157);


  int b=0;                                      //Speed of y-axis of helicoptor
  int c=0;                                      //Speed of x-axis of helicoptor


 // Helicopter
   line(216+c,235-b,75+c,235-b);
  line(115+c,247-b,120+c,240-b);           //UpperBackSmallInclinedLine
  line(166+c,247-b,161+c,240-b);            //UpperFrontSmallInclinedLine
  line(120+c,240-b,161+c,240-b);                //UpperHorizontallLIne
  line(139+c,240-b,139+c,235-b);              //SmallBAckVerticalLIne
  line(141+c,240-b,141+c,235-b);                //SmallFrontVerticalLine
  arc(141+c,272-b,140,180,40);                     //BackArc
  arc(140+c,272-b,0,40,40);                          //FrontArc
  line(165+c,248-b,165+c,266-b);                //Glass
  line(165+c,266-b,180+c,266-b);                //Glass
  rectangle(130+c,282-b,150+c,255-b);       //Door
  circle(147+c,268-b,1);                               //KeyHole
  line(110+c,247-b,171+c,247-b);               //MiddleLine
  line(30+c,275-b,100+c,272-b);                 //backUpperLine
  line(180+c,273-b,180+c,285-b);               //frontArcVerticalLine
  line(25+c,285-b,180+c,285-b);                 //BottomBigLine
  line(30+c,275-b,20+c,260-b);                   //BackEndInclinedLine
  line(20+c,260-b,14+c,260-b);                   //BackUpperLine
  line(14+c,260-b,25+c,285-b);                   //LastEndInclinedLine
  circle(18+c,262-b,1);                                //BackSmallCircle
  //Legs
  line(80+c,299-b,167+c,299-b);                 //LowerBigLine
  line(80+c,295-b,167+c,295-b);                 //UpperBigLine
  line(80+c,295-b,80+c,299-b);                  //BackVerticalLine
  arc(167+c,279-b,270,310,20);                  //LowerCurve
  arc(167+c,275-b,270,310,20);                  //UpperCurve
  line(180+c,291-b,180+c,293-b);                //FrontSmallestLine
  line(110+c,285-b,110+c,295-b);                //StraightLine
  line(113+c,285-b,113+c,295-b);                //StraightLine
  line(165+c,285-b,160+c,295-b);                //VerticalLine
  line(163+c,285-b,158+c,295-b);
  setcolor(WHITE);
  delay(30);
  cleardevice();
 }
 }
 //For Helicopter
void Helicopter(){
 for(int i=0;i<=350;i++) {


  int b=i;   //Speed of y-axis of helicoptor
  int c=i*2;  //Speed of x-axis of helicoptor. It will move twice faster than y a-axis.


 // Helicopter
  line(115+c,247-b,120+c,240-b);                //UpperBackSmallInclinedLine
  line(166+c,247-b,161+c,240-b);                //UpperFrontSmallInclinedLine
  line(120+c,240-b,161+c,240-b);                //UpperHorizontallLIne
  line(139+c,240-b,139+c,235-b);                //SmallBAckVerticalLIne
  line(141+c,240-b,141+c,235-b);                //SmallFrontVerticalLine
  arc(141+c,272-b,140,180,40);                  //BackArc
  arc(140+c,272-b,0,40,40);                         //FrontArc
  line(165+c,248-b,165+c,266-b);                //Glass
  line(165+c,266-b,180+c,266-b);                //Glass
  rectangle(130+c,282-b,150+c,255-b);         //Door
  circle(147+c,268-b,1);                                //KeyHole
  line(110+c,247-b,171+c,247-b);                 //MiddleLine
  line(30+c,275-b,100+c,272-b);                   //backUpperLine
  line(180+c,273-b,180+c,285-b);                //frontArcVerticalLine
  line(25+c,285-b,180+c,285-b);                 //BottomBigLine
  line(30+c,275-b,20+c,260-b);                  //BackEndInclinedLine
  line(20+c,260-b,14+c,260-b);                  //BackUpperLine
  line(14+c,260-b,25+c,285-b);                  //LastEndInclinedLine
  circle(18+c,262-b,1);                               //BackSmallCircle
  //Legs
  line(80+c,299-b,167+c,299-b);                 //LowerBigLine
  line(80+c,295-b,167+c,295-b);                 //UpperBigLine
  line(80+c,295-b,80+c,299-b);                  //BackVerticalLine
  arc(167+c,279-b,270,310,20);                  //LowerCurve
  arc(167+c,275-b,270,310,20);                  //UpperCurve
  line(180+c,291-b,180+c,293-b);                //FrontSmallestLine
  line(110+c,285-b,110+c,295-b);                //StraightLine
  line(113+c,285-b,113+c,295-b);                //StraightLine
  line(165+c,285-b,160+c,295-b);                //VerticalLine
  line(163+c,285-b,158+c,295-b);                //VerticalLine
  //MovingWings
  if(i%2==0){
   line(141+c,235-b,75+c,243-b);
   line(141+c,235-b,83+c,258-b);
   line(141+c,235-b,164+c,278-b);
   line(141+c,235-b,99+c,268-b);
   line(141+c,235-b,196+c,243-b);
   line(141+c,235-b,195+c,258-b);
  }
  else{
   line(141+c,235-b,71+c,236-b);
   line(141+c,235-b,79+c,250-b);
   line(141+c,235-b,110+c,278-b);
   line(141+c,235-b,197+c,236-b);
   line(141+c,235-b,196+c,250-b);
   line(141+c,235-b,185+c,267-b);
   line(141+c,235-b,141+c,282-b);
  }
 
  //BackGround image
   //Road
  line(0,392,900,392);
  //Garage
  rectangle(0,392,180,300);
  line(180,300,220,320);
  //mountain
  line(0,199,200,100);
  arc(220,157,49,118,60);
  line(259,112,460,300);
  line(353,200,600,60);
  arc(625,115,49,118,60);
  //Sun
  arc(356,200,33,139,40);
  line(327,169,300,140);
  line(335,165,322,148);
  line(345,162,327,129);
  line(355,160,348,137);
  line(365,161,367,124);
  line(375,164,382,137);
  line(381,168,410,134);
  line(387,172,413,157);

  delay(30);
  cleardevice();

 }
}
 //3)Text
 void Close(){
 settextstyle(7,HORIZ_DIR,8);
 outtextxy(100,150,"Thank you");
  }