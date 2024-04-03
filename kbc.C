#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<ctype.h>
  void menu();
  void cover();
  void play();
  void option();
  void about();
  void score();
  void help();
  void end();
  void round1();
  void round2();
  void prize();
  void stop();
  void crore();
  int hs;
    void main()
    {
     clrscr();
     cover();
     menu();
     getch();
    }
//****************************Front Page *****************************//
       void cover()
      {
	int gd=DETECT,gm,x,y,i,j;
	initgraph(&gd,&gm,"..\\BGI");
	setbkcolor(RED);
	setcolor(DARKGRAY);
	settextstyle(4,0,5);
	bar(95,9,525,285);
	bar(100,100,520,280);
	setcolor(BLUE);
	outtextxy(140,120,"Ko Banxa Crorepati");
	textcolor(WHITE);
	settextstyle(6,0,1);
	outtextxy(410,430,"@Vivek Bashyal");
	settextstyle(2,0,5);
	setcolor(RED);
	outtextxy(200,250,"Loading");
	rectangle(300,250,400,260);
	for(i=302;i<398;i++)
	{
	 for(j=252;j<=257;j++)
	 {
	  setcolor(GREEN);
	  rectangle(i,j,i+1,j+1);
	  delay(4);
	 }}
	 setcolor(CYAN);
	 settextstyle(8,0,3);
	 outtextxy(200,400,"Press any key");
	 getch();
	 cleardevice();
	 closegraph();
	 }
//********************Menu of Game******************************
	     void menu()
	     {
	       int a;
	       clrscr();
	       textcolor(RED);
	       gotoxy(15,6);
	       cprintf("Menu");
	       textcolor(BLUE);
	       gotoxy(7,8);
	       cprintf("1.Play");
	       gotoxy(22,8);
	       cprintf("2.Option");
	       gotoxy(7,10);
	       cprintf("3.Help");
	       gotoxy(22,10);
	       cprintf("4.About");
	       gotoxy(7,12);
	       cprintf("5.High Score");
	       gotoxy(22,12);
	       cprintf("6.Exit");
	       a=getch();
		switch(a)
		 {
		  case '1':
		    play();
		    break;
		  case '2':
		    option();
		    break;
		  case'3':
		    help();
		    break;
		  case'4':
		    about();
		    break;
		  case'5':
		    score();
		    break;
		  case'6':
		    end();
		    break;
		  default:
		    menu();
		   }
		  getch();
		  menu();
		  }
//***************Different functions*******************************
	      void play()
	      {
	       clrscr();
	       textcolor(RED);
	       gotoxy(15,6);
	       cprintf("Welcome");
	       getch();
	       round1();
	       getch();
	       }
	      void option()
	      {
	       int x;
	       clrscr();
	       textcolor(RED);
	       gotoxy(15,6);
	       cprintf("Option");
	       textcolor(BLUE);
	       gotoxy(5,10);
	       cprintf("1.Sound");
	       getch();
	       menu();
	      }
	      void help()
	      {
	       char x;
	       clrscr();
	       textcolor(RED);
	       gotoxy(15,6);
	       cprintf("Help");
	       textcolor(BLUE);
	       gotoxy(3,8);
	       cprintf("This is \"Ko Banxa Crorepati\" game. This game consist of two round.");
	       gotoxy(3,9);
	       cprintf("On first round there asked three question out of which ");
	       gotoxy(3,10);
	       cprintf("one have to give two correct answer inorder to play next round,");
	       gotoxy(3,11);
	       cprintf(" where 12 question will be asked and prize is as:-");
	       textcolor(GREEN);
	       gotoxy(5,13);
	       cprintf("Press V to view prize type: ");
	       x=getch();
	       x=toupper(x);
	       if(x=='V')
		 prize();
	       else
		 menu();
	       getch();
	      }
	       void about()
	       {
		clrscr();
		textcolor(RED);
		gotoxy(15,6);
		cprintf("About");
		textcolor(BLUE);
		gotoxy(4,8);
		cprintf("C-Programming game ... Made on First Semester");
		gotoxy(4,9);
		cprintf("Vivek Bashyal @ KCC,Putalisadak,Kathmandu");
		gotoxy(5,10);
		cprintf("...............2017/2074.............");
		getch();
		menu();
	       }
	       void score()
	       {
		FILE *fa;
		char ch;
		fa=fopen("hscore.txt","r");
		clrscr();
		textcolor(RED);
		gotoxy(12,10);
		while((ch=getc(fa))!=EOF)
		  printf("%c",ch);
		gotoxy(20,10);
		cprintf("have recently won 5 crore");
		textcolor(BLUE);
		gotoxy(10,13);
		cprintf("So play to win 5 Crore");
		getch();
		menu();
		}
		void end()
		{
		 char x;
		 clrscr();
		 textcolor(BLUE);
		 gotoxy(5,6);
		 cprintf("Do you want to exit?");
		 textcolor(RED);
		 gotoxy(6,10);
		 cprintf("Y");
		 textcolor(GREEN);
		 gotoxy(12,10);
		 cprintf("N");
		 textcolor(WHITE);
		 gotoxy(7,10);
		 cprintf("es");
		 gotoxy(13,10);
		 cprintf("o");
		 x=getch();
		 x=toupper(x);
		 switch(x)
		  {
		   case 'Y':
		     exit(0);
		     break;
		   case 'N':
		     menu();
		     break;
		 default:
		   end();
		   }
		  getch();
		  }
		  void prize()
		  {
		  int gd=DETECT,gm,x,y,i,j;
		  initgraph(&gd,&gm,"..\\BGI");
		  setcolor(WHITE);
		  rectangle(150,50,350,450);
		  line(200,50,200,450);
		  line(150,90,350,90);
		  line(150,120,350,120);
		  line(150,150,350,150);
		  line(150,180,350,180);
		  line(150,210,350,210);
		  line(150,240,350,240);
		  line(150,270,350,270);
		  line(150,300,350,300);
		  line(150,330,350,330);
		  line(150,360,350,360);
		  line(150,390,350,390);
		  line(150,420,350,420);
		  setfillstyle(SOLID_FILL,BLUE);
		  floodfill(160,60,WHITE);
		  floodfill(255,60,WHITE);
		  setcolor(RED);
		  settextstyle(3,0,2);
		  outtextxy(162,60,"Q.");
		  outtextxy(255,60,"Prize");
		  setcolor(GREEN);
		  outtextxy(162,95,"1.");
		  outtextxy(162,125,"2.");
		  outtextxy(162,155,"3.");
		  outtextxy(162,185,"4.");
		  outtextxy(162,215,"5.");
		  outtextxy(162,245,"6.");
		  outtextxy(162,275,"7.");
		  outtextxy(162,305,"8.");
		  outtextxy(162,335,"9.");
		  outtextxy(162,365,"10.");
		  outtextxy(162,395,"11.");
		  outtextxy(162,425,"12.");
		  outtextxy(255,95,"5,000");
		  outtextxy(255,125,"15,000");
		  outtextxy(255,155,"60,000");
		  outtextxy(255,185,"2 lakh");
		  outtextxy(255,215,"8 lakh");
		  outtextxy(255,245,"16 lakh");
		  outtextxy(255,275,"30 lakh");
		  outtextxy(255,305,"50 lakh");
		  outtextxy(255,335,"80 lakh");
		  outtextxy(255,365,"1 crore");
		  outtextxy(255,395,"3 crore");
		  outtextxy(255,425,"5 crore");
		  getch();
		  cleardevice();
		  closegraph();
		  help();
		  }
		  void round1()
		  {
		   char x;
		   int c=0;
		   clrscr();
		   textcolor(RED);
		   gotoxy(12,5);
		   cprintf("Selection Round");
		   gotoxy(4,6);
		   textcolor(BLUE);
		   cprintf("you are welcome on selection round");
		   gotoxy(3,8);
		   cprintf("Q.1  What is the tallest mountain of world?");
		   gotoxy(5,9);
		   cprintf("a. Mt.K2                  b. Mt.Annapurna");
		   gotoxy(5,10);
		   cprintf("c. Mt.Everest             d. Mt.Kanchanjanga");
		   x=getch();
		   x=toupper(x);
		   if(x=='C')
		     {
		      gotoxy(17,13);
		      textcolor(GREEN);
		      cprintf("CORRECT");
		      textcolor(BLUE);
		      gotoxy(12,14);
		      cprintf("Wish you will entry on game");
		      c++;
		      getch();
		      }
		    else if(x=='A'||x=='B'||x=='D')
		     {
		      gotoxy(17,13);
		      textcolor(RED);
		      cprintf("WRONG");
		      textcolor(BLUE);
		      gotoxy(12,14);
		      cprintf("Try to give correct answer");
		      getch();
		      }
		    else
		      round1();
		   clrscr();
		   gotoxy(3,8);
		   cprintf("Q.2 Which country made the first declaration of warI ? ");
		   gotoxy(5,9);
		   cprintf("a. Germany                  b. Serbia");
		   gotoxy(5,10);
		   cprintf("c. Russia                   d. Austria-Hungary");
		   x=getch();
		   x=toupper(x);
		   if(x=='D')
		     {
		      gotoxy(17,13);
		      textcolor(GREEN);
		      cprintf("CORRECT");
		      textcolor(BLUE);
		      gotoxy(12,14);
		      cprintf("Wish you will entry on game");
		      c++;
		      getch();
		      }
		    else if(x=='A'||x=='B'||x=='C')
		     {
		      gotoxy(17,13);
		      textcolor(RED);
		      cprintf("WRONG");
		      textcolor(BLUE);
		      gotoxy(12,14);
		      cprintf("Try to give correct answer");
		      getch();
		      }
		    else
		      round1();
		      clrscr();
		   gotoxy(3,8);
		   cprintf("Q.3 Which country has world's largest man made lake?");
		   gotoxy(5,9);
		   cprintf("a. Uganda                 b. Canada");
		   gotoxy(5,10);
		   cprintf("c. China                  d. Russia");
		   x=getch();
		   x=toupper(x);
		   if(x=='A')
		     {
		      gotoxy(17,13);
		      textcolor(GREEN);
		      cprintf("CORRECT");
		      textcolor(BLUE);
		      gotoxy(12,14);
		      cprintf("Wish you will entry on game");
		      c++;
		      getch();
		      }
		    else if(x=='C'||x=='B'||x=='D')
		     {
		      gotoxy(17,13);
		      textcolor(RED);
		      cprintf("WRONG");
		      textcolor(BLUE);
		      gotoxy(12,14);
		      cprintf("Try to give correct answer");
		      getch();
		      }
		    else
		      round1();
		   if(c>=2)
		     round2();
		   else
		      stop();
		      getch();
		      }
		   void stop()
		   {
		     clrscr();
		     textcolor(RED);
		     gotoxy(18,10);
		     cprintf("%s Thanks for your play");
		     gotoxy(19,13);
		     cprintf("Try Again");
		     textcolor(YELLOW);
		     gotoxy(14,15);
		     getch();
		     exit(0);
		     }
		     void round2()
		     {
		  int gd=DETECT,gm,n=0,x;
		  initgraph(&gd,&gm,"..\\BGI");
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,383,WHITE);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q.By default real number in C is treated as: ");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.a char");
		  outtextxy(275,297,"2.a float");
		  outtextxy(25,387,"3.a double");
		  outtextxy(275,387,"4.a long ");
		  outtextxy(180,340,"5,000");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==3)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,353,WHITE);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q: Which country joined the war on the side of ");
		  outtextxy(13,189,"Allied powers in 1916 ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Romania");
		  outtextxy(275,297,"2.Greece");
		  outtextxy(25,387,"3.Bulgaria");
		  outtextxy(275,387,"4.Serbia");
		  outtextxy(180,340,"15,000");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==1)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,323,WHITE);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. The course of which river features the world's  ");
		  outtextxy(13,189,"highest waterfall ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Amazon");
		  outtextxy(275,297,"2.Niagora");
		  outtextxy(25,387,"3.Zambezi");
		  outtextxy(275,387,"4.Caroni ");
		  outtextxy(185,340,"60,000");
		 scanf("%d",&x);
		  if(x==4)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,293,WHITE);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. Which country first intercepted the ");
		  outtextxy(13,189,"Zimmer mann telegram ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.USA");
		  outtextxy(275,297,"2.Canada");
		  outtextxy(25,387,"3.Britain");
		  outtextxy(275,387,"4.France ");
		  outtextxy(185,340,"2 Lakh");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==3)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,263,WHITE);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. Which of these cannot be return type of a ");
		  outtextxy(13,189,"function ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Array");
		  outtextxy(275,297,"2.Pointer ");
		  outtextxy(25,387,"3.Structure");
		  outtextxy(275,387,"4.None ");
		  outtextxy(185,340,"8 Lakh");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==1)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,233,WHITE);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. What type of animal was 'Ben' in the film of  ");
		  outtextxy(13,189,"the same name ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Cat");
		  outtextxy(275,297,"2.Rat");
		  outtextxy(25,387,"3.Dog");
		  outtextxy(275,387,"4.Bear ");
		  outtextxy(180,340,"16 Lakh");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==2)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,203,WHITE);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. Which bird has eyes facing forward instead ");
		  outtextxy(13,189,"of on the sides of their heads ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Eagles");
		  outtextxy(275,297,"2.Falcons");
		  outtextxy(25,387,"3.Dove");
		  outtextxy(275,387,"4.Owls ");
		  outtextxy(185,340,"30 Lakh");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==4)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,173,WHITE);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. Earth has how many type of motion ? ");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Five");
		  outtextxy(275,297,"2.Two");
		  outtextxy(25,387,"3.Three");
		  outtextxy(275,387,"4.One ");
		  outtextxy(180,340,"40 Lakh");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==2)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,143,WHITE);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. The sun is ....million km away from earth ? ");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.100");
		  outtextxy(275,297,"2.200");
		  outtextxy(25,387,"3.150");
		  outtextxy(275,387,"4.175 ");
		  outtextxy(180,340,"80 Lakh");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==3)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,113,WHITE);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. How many times Brazil won FIFA World Cup ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.Five");
		  outtextxy(275,297,"2.Four");
		  outtextxy(25,387,"3.Six");
		  outtextxy(275,387,"4.Three ");
		  outtextxy(189,340,"1 Crore");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==1)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,83,WHITE);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. In which year football world cup held for ");
		  outtextxy(13,189,"  first time ?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.1928");
		  outtextxy(275,297,"2.1932");
		  outtextxy(25,387,"3.1924");
		  outtextxy(275,387,"4.1930 ");
		  outtextxy(189,340,"3 Crore");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==4)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		  setbkcolor(CYAN);
		  setcolor(RED);
		  settextstyle(4,0,4);
		  outtextxy(150,40,"Crorepati");
		  setcolor(WHITE);
		  rectangle(470,50,570,410);
		  settextstyle(1,0,2);
		  line(470,80,570,80);
		  setfillstyle(SOLID_FILL,LIGHTBLUE);
		  floodfill(475,53,WHITE);
		  outtextxy(475,53,"5 Crore");
		  line(470,110,570,110);
		  outtextxy(475,83,"3 Crore");
		  line(470,140,570,140);
		  outtextxy(475,113,"1 Crore");
		  line(470,170,570,170);
		  outtextxy(475,143,"80 Lakh");
		  line(470,200,570,200);
		  outtextxy(475,173,"40 Lakh");
		  line(470,230,570,230);
		  outtextxy(475,203,"30 Lakh");
		  line(470,260,570,260);
		  outtextxy(475,233,"16 Lakh");
		  line(470,290,570,290);
		  outtextxy(475,263,"8 Lakh");
		  line(470,320,570,320);
		  outtextxy(475,293,"2 Lakh");
		  line(470,350,570,350);
		  outtextxy(475,323,"60,000");
		  line(470,380,570,380);
		  line(20,293,150,293);
		  line(5,313,20,293);
		  line(5,313,20,333);
		  line(165,313,150,293);
		  line(165,313,150,333);
		  line(20,333,150,333);
		   line(270,293,400,293);
		  line(255,313,270,293);
		  line(255,313,270,333);
		  line(415,313,400,293);
		  line(415,313,400,333);
		  line(270,333,400,333);
		   line(20,383,150,383);
		  line(5,403,20,383);
		  line(5,403,20,423);
		  line(165,403,150,383);
		  line(165,403,150,423);
		  line(20,423,150,423);
		   line(270,383,400,383);
		  line(255,403,270,383);
		  line(255,403,270,423);
		  line(415,403,400,383);
		  line(415,403,400,423);
		  line(270,423,400,423);
		  ellipse(212,358,0,360,70,30);
		  outtextxy(475,353,"15,000");
		  outtextxy(475,383,"5,000");
		  setcolor(BLUE);
		  settextstyle(1,0,1);
		  outtextxy(10,170,"Q. This game is made by using?");
		  setcolor(WHITE);
		  settextstyle(1,0,2);
		  outtextxy(25,297,"1.C++");
		  outtextxy(275,297,"2.Java");
		  outtextxy(25,387,"3.C");
		  outtextxy(275,387,"4.PHP ");
		  outtextxy(180,340,"5 Crore");
		 // x=getch();
		 scanf("%d",&x);
		  if(x==3)
		    {
		    setfillstyle(SOLID_FILL,GREEN);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    closegraph();
		    crore();
		    }
		   /* setbkcolor(CYAN);
		    setcolor(GREEN);
		    outtextxy(150,200,"You won 5 Crore");
		    outtextxy(180,240,"You became Crorepati");

		    getch();
		    exit(0);
		    } */
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 3 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 3 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 3 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 3 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 1 crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 1 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 1 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 1 Crore");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 80 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 80 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 80 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 80 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 40 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 40 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 40 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 40 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 30 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 30 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 30 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 30 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 16 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 16 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 16 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 16 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 8 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 8 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 8 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 8 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 2 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 2 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 2 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won 2 Lakh");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 60 thousand");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 60 thousand");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 60 thousand");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You won only 60 thousand");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 15,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 15,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 15,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"You can won only 15,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==3)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can won only 5000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can won only 5,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can won only 5,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can won only 5,000 money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		    exit(0);
		    }
		   else if(x==1)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(25,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can't won any money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==2)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,297,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can't won any money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else if(x==4)
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(275,387,WHITE);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can't won any money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		   else
		   {
		    setfillstyle(SOLID_FILL,RED);
		    floodfill(180,340,WHITE);
		    getch();
		    cleardevice();
		    setbkcolor(LIGHTBLUE);
		    setcolor(RED);
		    outtextxy(100,100,"Thanks for Playing");
		    outtextxy(80,120,"Sorry you can't won any money");
		    outtextxy(110,140,"Try Again");
		    getch();
		    exit(0);
		    }
		  getch();
		  cleardevice();
		  closegraph();
		  }
		  void crore()
		  {
		   FILE *fa;
		   char ch;
		   clrscr();
		   //textbackground(CYAN);
		   fa=fopen("hscore.txt","w");
		   textcolor(DARKGRAY);
		   gotoxy(15,7);
		   cprintf("!!!!!CONGRATS!!!!!");
		   gotoxy(10,9);
		   cprintf("You have won 5 Crorre");
		   gotoxy(8,11);
		   cprintf("Please Enter your name:");
		   textcolor(WHITE);
		   fflush(stdin);
		   while((ch=getchar())!='\n')
		    putc(ch,fa);
		   fclose(fa);
		   getch();
		   }






