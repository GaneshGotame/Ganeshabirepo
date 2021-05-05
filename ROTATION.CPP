#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
/*void draw()
{for(int i=0;i<20;i++)
{ line(20-i,80+i,20-i,140-i);
 line(20-i,80+i,80+i,80+i);
 line(80+i,80+i,80,140);
 line(20+i,140-i,80,140);
 delay(20);
 }
}
*/
void main()
{
 int i=0,gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 setcolor(RED);
  line(200,200-i,220,240-i); //1
 line(220,240-i,180,240-i);  //2
 line(180,240-i,200,200-i);  //3

 rectangle(180,240-i,220,340-i); //4

 line(180,300-i,180,380-i);
 line(180,380-i,100,380-i);
 line(100,380-i,180,300-i);

 line(220,300-i,220,380-i);
 line(220,380-i,300,380-i);
 line(300,380-i,220,300-i);


for(i=0;i<80;i++)
{
 setcolor(RED);
 line(180,300,180,380);
 line(180,380,100+i,380);
 line(100+i,380,180,300);

 line(220,300,220,380);
 line(220,380,300-i,380);
 line(300-i,380,220,300);
 delay(40);
}

for(i=0;i<250;i++)
{ clrscr();
  setcolor(RED);
 line(200,200-i,220,240-i); //1
 line(220,240-i,180,240-i);  //2
 line(180,240-i,200,200-i);  //3

 rectangle(180,240-i,220,340-i); //4

 line(180,300-i,180,380-i);
 line(180,380-i,100,380-i);
 line(100,380-i,180,300-i);

 line(220,300-i,220,380-i);
 line(220,380-i,300,380-i);
 line(300,380-i,220,300-i);


 delay(20);
 }

 getch();
 closegraph();


}