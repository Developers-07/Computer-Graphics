#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<stdlib.h>

int x,y,xc,yc,r,p;
float u=0 ;
float u1=0 ;
float u2 = 0 ;
int x1,y1,xc1,yc1,r1,p1 ;
int x2,y2,xc2,yc2,r2,p2 ;
int x3,y3,xc3,yc3,r3,p3 ;
int x4,y4,xc4,yc4,r4,p4 ;
int x5,y5,xc5,yc5,r5,p5 ;
int x6,y6,xc6,yc6,r6,p6 ;
int x7,y7,xc7,yc7,r7,p7 ;
int x8,y8,xc8,yc8,r8,p8 ;

int x9,y9,xc9,yc9,r9,p9 ;
int x10,y10,xc10,yc10,r10,p10 ;
int x11,y11,xc11,yc11,r11,p11 ;
int x12,y12,xc12,yc12,r12,p12 ;
int x13,y13,xc13,yc13,r13,p13 ;
int x14,y14,xc14,yc14,r14,p14 ;
int x15,y15,xc15,yc15,r15,p15 ;
int x16,y16,xc16,yc16,r16,p16 ;


int ax1,ay1,axc1,ayc1,ar1,ap1 ;
int ax2,ay2,axc2,ayc2,ar2,ap2 ;
int ax3,ay3,axc3,ayc3,ar3,ap3 ;
int ax4,ay4,axc4,ayc4,ar4,ap4 ;
int ax5,ay5,axc5,ayc5,ar5,ap5 ;
int ax6,ay6,axc6,ayc6,ar6,ap6 ;
int ax7,ay7,axc7,ayc7,ar7,ap7 ;
int ax8,ay8,axc8,ayc8,ar8,ap8 ;

int ax9,ay9,axc9,ayc9,ar9,ap9 ;
int ax10,ay10,axc10,ayc10,ar10,ap10 ;
int ax11,ay11,axc11,ayc11,ar11,ap11 ;
int ax12,ay12,axc12,ayc12,ar12,ap12 ;
int ax13,ay13,axc13,ayc13,ar13,ap13 ;
int ax14,ay14,axc14,ayc14,ar14,ap14 ;
int ax15,ay15,axc15,ayc15,ar15,ap15 ;
int ax16,ay16,axc16,ayc16,ar16,ap16 ;



void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);


//sky
    glColor3f (  .60, .85, .95 );
    glBegin(GL_POLYGON);
    glVertex2i ( 0,400);
    glVertex2i ( 1200, 400 );
    glVertex2i ( 1200, 800 );
    glVertex2i ( 0, 800 );
    glEnd();


//sun

    xc = 580 ;
    yc = 430 ;
    r = 48 ;
    p=1-r;
    x=0;
    y=r;


    while(x<=y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*(x+1)-2*(y+1);

        }
        glColor3f(.95, 0.45, 0.0);
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }


    glColor3f ( .96, .90, .65 ) ;
    glBegin(GL_POLYGON);
    glVertex2i ( 750,380);
    glVertex2i ( 1200, 300 );
    glVertex2i ( 1200, 400 );
    glVertex2i ( 740, 400 );
    glEnd();




//river
    glColor3f ( 0.25, .78, .98 ) ;
    glBegin(GL_POLYGON);
    glVertex2i ( 420,400);
    glVertex2i ( 175, 0 );
    glVertex2i ( 943, 0 );
    glVertex2i ( 750, 400 );
    glEnd();


//left cloud
    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 180, 440);
    glVertex2d ( 200, 440);
    glVertex2d ( 190, 450);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 200, 440);
    glVertex2d ( 210, 440);
    glVertex2d ( 205, 445);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 210, 470);
    glVertex2d ( 230, 470);
    glVertex2d ( 220, 480);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 230, 470);
    glVertex2d ( 240, 470);
    glVertex2d ( 235, 475);
    glEnd();


    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 190, 455);
    glVertex2d ( 210, 455);
    glVertex2d ( 200, 465);
    glEnd();




// .....left cloud End .....


//cloud middel
    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u2 + 600, 440);
    glVertex2d ( u2 + 620, 440);
    glVertex2d ( u2 +610, 450);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u2 +620, 440);
    glVertex2d ( u2 + 630, 440);
    glVertex2d (  u2 + 625, 445);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u2 + 630, 470);
    glVertex2d ( u2 + 650, 470);
    glVertex2d ( u2 + 640, 480);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u2 + 650, 470);
    glVertex2d ( u2 + 660, 470);
    glVertex2d ( u2 + 655, 475);
    glEnd();


    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u2 + 610, 455);
    glVertex2d ( u2 + 630, 455);
    glVertex2d ( u2 + 620, 465);
    glEnd();
    if(u2<=500)
    {
        u2=u2+0.01;
    }
    else
    {
        u2=0;
    }

//cloud left move

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u + 180, 440);
    glVertex2d ( u + 200, 440);
    glVertex2d ( u + 190, 450);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u + 200, 440);
    glVertex2d ( u + 210, 440);
    glVertex2d ( u + 205, 445);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d (  u + 210, 470);
    glVertex2d (  u + 230, 470);
    glVertex2d (  u + 220, 480);
    glEnd();


    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u + 230, 470);
    glVertex2d ( u + 240, 470);
    glVertex2d ( u + 235, 475);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u + 190, 455);
    glVertex2d ( u + 210, 455);
    glVertex2d ( u + 200, 465);
    glEnd();

    glColor3d( 1, 1, 1);
    glBegin(GL_TRIANGLES);
    glVertex2d ( u + 210, 455);
    glVertex2d ( u + 220, 455);
    glVertex2d ( u + 215, 460);
    glEnd();
    if(u<=1200)
    {
        u=u+0.05;
    }
    else
    {
        u=0;
    }

//....boat.....
    glColor3f(.55, 0.3, 0.1 );
    glBegin(GL_POLYGON);
    glVertex2i ( u1 + 260, 120 );
    glVertex2i ( u1 + 280, 100 );
    glVertex2i ( u1 + 380, 100 );
    glVertex2i ( u1 + 400, 120 );
    glEnd();


    glColor3f(.75, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( u1 + 280, 140 );
    glVertex2i ( u1 + 280, 120 );
    glVertex2i ( u1 + 380, 120 );
    glVertex2i ( u1 + 380, 140 );
    glEnd();


    glColor3f( 0, 0, 0 );
    glBegin(GL_POLYGON);
    glVertex2i ( u1 + 278, 120 );
    glVertex2i ( u1 + 250, 98 );
    glVertex2i ( u1 + 258, 98 );
    glVertex2i ( u1 + 280, 120 );
    glEnd();

    if(u1<=500)
    {
        u1=u1+0.02;
    }
    else
    {
        u1=0;
    }


//....boat End......



//l1
    glColor3f ( .96, .90, .65 );
    glBegin(GL_POLYGON);
    glVertex2i ( 0,300);
    glVertex2i ( 410, 380 );
    glVertex2i ( 420, 400 );
    glVertex2i ( 0, 400 );
    glEnd();


//l2
    glColor3f ( .30, .95, .58 ) ;
    glBegin(GL_POLYGON);
    glVertex2i ( 0,180);
    glVertex2i ( 330, 250 );
    glVertex2i ( 410, 380 );
    glVertex2i ( 0, 320 );
    glEnd();


//l3

    glColor3f ( .55, .90, .10 ) ;
    glBegin(GL_POLYGON);
    glVertex2i ( 0, 0 );
    glVertex2i ( 175, 0 );
    glVertex2i ( 330, 250 );
    glVertex2i ( 0, 180 );
    glEnd();



//r2
    glColor3f ( 1, 1, 1 ) ;
    glBegin(GL_POLYGON);
    glVertex2i ( 822, 250 );
    glVertex2i ( 1200, 180 );
    glVertex2i ( 1200, 330 );
    glVertex2i ( 760, 380 );
    glEnd();

//r3
    glColor3f ( .55, .90, .10 ) ;
    glBegin(GL_POLYGON);
    glVertex2i ( 943, 0 );
    glVertex2i ( 1200, 0 );
    glVertex2i ( 1200, 210 );
    glVertex2i ( 822, 250 );
    glEnd();



//line
    glColor3f ( 0, 0, 1 ) ;

    glBegin(GL_LINES);
    glVertex2f( 822, 250 );
    glVertex2f( 1200, 210);
    glEnd();


    glColor3f ( 0, 0, 1 ) ;

    glBegin(GL_LINES);
    glVertex2f( 0, 400);
    glVertex2f( 1200, 400);
    glEnd();


    glColor3f ( 0, 0, 1 ) ;

    glBegin(GL_LINES);
    glVertex2f( 175, 0);
    glVertex2f( 420, 400);
    glEnd();

    glColor3f ( 0, 0, 1 ) ;

    glBegin(GL_LINES);
    glVertex2f( 943, 0);
    glVertex2f( 750, 400);
    glEnd();

    glColor3f ( 0, 0, .5 ) ;

    glBegin(GL_LINES);
    glVertex2f( 0, 180);
    glVertex2f( 330, 250);
    glEnd();



////  sun line



    glColor3f(.95, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( 500, 390 );
    glVertex2i ( 500, 388 );
    glVertex2i ( 660, 388 );
    glVertex2i ( 660, 390 );
    glEnd();

    glColor3f(.95, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( 510, 380 );
    glVertex2i ( 510, 378 );
    glVertex2i ( 650, 378 );
    glVertex2i ( 650, 380 );
    glEnd();

    glColor3f(.95, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( 520, 370 );
    glVertex2i ( 520, 368 );
    glVertex2i ( 640, 368 );
    glVertex2i ( 640, 370 );
    glEnd();

    glColor3f(.95, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( 530, 360 );
    glVertex2i ( 530, 358 );
    glVertex2i ( 630, 358 );
    glVertex2i ( 630, 360 );
    glEnd();

    glColor3f(.95, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( 540, 350 );
    glVertex2i ( 540, 348 );
    glVertex2i ( 620, 348 );
    glVertex2i ( 620, 350 );
    glEnd();

    glColor3f(.95, 0.5, 0.2 );
    glBegin(GL_POLYGON);
    glVertex2i ( 550, 340 );
    glVertex2i ( 550, 338 );
    glVertex2i ( 610, 338 );
    glVertex2i ( 610, 340 );
    glEnd();
//........Sun line End ..........


// right side tree Start
//c1
    xc1 = 15 ;
    yc1 = 415 ;
    r1 = 15 ;
    p1 =1-r1;
    x1=0;
    y1=r1;


    while(x1<=y1)
    {
        if(p1<0)
        {
            x1=x1+1;
            p1=p1+2*x1+1;
        }
        else
        {
            x1=x1+1;
            y1=y1-1;
            p1=p1+2*(x1+1)-2*(y1+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x1+xc1,y1+yc1);
        glVertex2i(x1+xc1,-y1+yc1);
        glVertex2i(-x1+xc1,-y1+yc1);
        glVertex2i(-x1+xc1,y1+yc1);
        glVertex2i(y1+xc1,x1+yc1);
        glVertex2i(y1+xc1,-x1+yc1);
        glVertex2i(-y1+xc1,-x1+yc1);
        glVertex2i(-y1+xc1,x1+yc1);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 13, 375 );
    glVertex2i ( 17, 375 );
    glVertex2i ( 17, 403 );
    glVertex2i ( 13, 403 );
    glEnd();

//c2


    xc2 = 60 ;
    yc2 = 415 ;
    r2 = 15 ;
    p2 =1-r2;
    x2=0;
    y2=r2;


    while(x2<=y2)
    {
        if(p2<0)
        {
            x2=x2+1;
            p2=p2+2*x2+1;
        }
        else
        {
            x2=x2+1;
            y2=y2-1;
            p2=p2+2*(x2+1)-2*(y2+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x2+xc2,y2+yc2);
        glVertex2i(x2+xc2,-y2+yc2);
        glVertex2i(-x2+xc2,-y2+yc2);
        glVertex2i(-x2+xc2,y2+yc2);
        glVertex2i(y2+xc2,x2+yc2);
        glVertex2i(y2+xc2,-x2+yc2);
        glVertex2i(-y2+xc2,-x2+yc2);
        glVertex2i(-y2+xc2,x2+yc2);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 58, 375 );
    glVertex2i ( 62, 375 );
    glVertex2i ( 62, 403 );
    glVertex2i ( 58, 403 );
    glEnd();

//c3
    xc3 = 35 ;
    yc3 = 415 ;
    r3 = 15 ;
    p3 =1-r3;
    x3=0;
    y3=r3;


    while(x3<=y3)
    {
        if(p3<0)
        {
            x3=x3+1;
            p3=p3+2*x3+1;
        }
        else
        {
            x3=x3+1;
            y3=y3-1;
            p3=p3+2*(x3+1)-2*(y3+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x3+xc3,y3+yc3);
        glVertex2i(x3+xc3,-y3+yc3);
        glVertex2i(-x3+xc3,-y3+yc3);
        glVertex2i(-x3+xc3,y3+yc3);
        glVertex2i(y3+xc3,x3+yc3);
        glVertex2i(y3+xc3,-x3+yc3);
        glVertex2i(-y3+xc3,-x3+yc3);
        glVertex2i(-y3+xc3,x3+yc3);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 33, 375 );
    glVertex2i ( 37, 375 );
    glVertex2i ( 37, 403 );
    glVertex2i ( 33, 403 );
    glEnd();

//c4
    xc4 = 85 ;
    yc4 = 420 ;
    r4 = 20 ;
    p4 =1-r4;
    x4=0;
    y4=r4;


    while(x4<=y4)
    {
        if(p4<0)
        {
            x4=x4+1;
            p4=p4+2*x4+1;
        }
        else
        {
            x4=x4+1;
            y4=y4-1;
            p4=p4+2*(x4+1)-2*(y4+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x4+xc4,y4+yc4 );
        glVertex2i(x4+xc4,-y4+yc4 );
        glVertex2i(-x4+xc4,-y4+yc4);
        glVertex2i(-x4+xc4,y4+yc4);
        glVertex2i(y4+xc4,x4+yc4);
        glVertex2i(y4+xc4,-x4+yc4);
        glVertex2i(-y4+xc4,-x4+yc4);
        glVertex2i(-y4+xc4,x4+yc4);
        glEnd();
    }


    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 83, 375 );
    glVertex2i ( 87, 375 );
    glVertex2i ( 87, 403 );
    glVertex2i ( 83, 403 );
    glEnd();

    //c5


    xc5 = 110 ;
    yc5 = 420 ;
    r5 = 20 ;
    p5 =1-r5;
    x5=0;
    y5=r5;


    while(x5<=y5)
    {
        if(p5<0)
        {
            x5=x5+1;
            p5=p5+2*x5+1;
        }
        else
        {
            x5=x5+1;
            y5=y5-1;
            p5=p5+2*(x5+1)-2*(y5+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x5+xc5,y5+yc5);
        glVertex2i(x5+xc5,-y5+yc5);
        glVertex2i(-x5+xc5,-y5+yc5);
        glVertex2i(-x5+xc5,y5+yc5);
        glVertex2i(y5+xc5,x5+yc5);
        glVertex2i(y5+xc5,-x5+yc5);
        glVertex2i(-y5+xc5,-x5+yc5);
        glVertex2i(-y5+xc5,x5+yc5);
        glEnd();
    }


    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 108, 375 );
    glVertex2i ( 112, 375 );
    glVertex2i ( 112, 403 );
    glVertex2i ( 108, 403 );
    glEnd();

//c6


    xc6 = 140 ;
    yc6 = 415 ;
    r6 = 15 ;
    p6 =1-r6;
    x6=0;
    y6=r6;


    while(x6<=y6)
    {
        if(p6<0)
        {
            x6=x6+1;
            p6=p6+2*x6+1;
        }
        else
        {
            x6=x6+1;
            y6=y6-1;
            p6=p6+2*(x6+1)-2*(y6+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x6+xc6,y6+yc6);
        glVertex2i(x6+xc6,-y6+yc6);
        glVertex2i(-x6+xc6,-y6+yc6);
        glVertex2i(-x6+xc6,y6+yc6);
        glVertex2i(y6+xc6,x6+yc6);
        glVertex2i(y6+xc6,-x6+yc6);
        glVertex2i(-y6+xc6,-x6+yc6);
        glVertex2i(-y6+xc6,x6+yc6);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 138, 375 );
    glVertex2i ( 142, 375 );
    glVertex2i ( 142, 403 );
    glVertex2i ( 138, 403 );
    glEnd();

    //c7


    xc7 = 160 ;
    yc7 = 415 ;
    r7 = 15 ;
    p7 =1-r7;
    x7=0;
    y7=r7;


    while(x7<=y7)
    {
        if(p7<0)
        {
            x7=x7+1;
            p7=p7+2*x7+1;
        }
        else
        {
            x7=x7+1;
            y7=y7-1;
            p7=p7+2*(x7+1)-2*(y7+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x7+xc7,y7+yc7);
        glVertex2i(x7+xc7,-y7+yc7);
        glVertex2i(-x7+xc7,-y7+yc7);
        glVertex2i(-x7+xc7,y7+yc7);
        glVertex2i(y7+xc7,x7+yc7);
        glVertex2i(y7+xc7,-x7+yc7);
        glVertex2i(-y7+xc7,-x7+yc7);
        glVertex2i(-y7+xc7,x7+yc7);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 158, 375 );
    glVertex2i ( 162, 375 );
    glVertex2i ( 162, 403 );
    glVertex2i ( 158, 403 );
    glEnd();


//c8


    xc8 = 180 ;
    yc8 = 415 ;
    r8 = 15 ;
    p8 =1-r8;
    x8=0;
    y8=r8;


    while(x8<=y8)
    {
        if(p8<0)
        {
            x8=x8+1;
            p8=p8+2*x8+1;
        }
        else
        {
            x8=x8+1;
            y8=y8-1;
            p8=p8+2*(x8+1)-2*(y8+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x8+xc8,y8+yc8);
        glVertex2i(x8+xc8,-y8+yc8);
        glVertex2i(-x8+xc8,-y8+yc8);
        glVertex2i(-x8+xc8,y8+yc8);
        glVertex2i(y8+xc8,x8+yc8);
        glVertex2i(y8+xc8,-x8+yc8);
        glVertex2i(-y8+xc8,-x8+yc8);
        glVertex2i(-y8+xc8,x8+yc8);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 178, 375 );
    glVertex2i ( 182, 375 );
    glVertex2i ( 182, 403 );
    glVertex2i ( 178, 403 );
    glEnd();


    //c9


    xc9 = 200 ;
    yc9 = 415 ;
    r9 = 15 ;
    p9 =1-r9;
    x9=0;
    y9=r9;


    while(x9<=y9)
    {
        if(p9<0)
        {
            x9=x9+1;
            p9=p9+2*x9+1;
        }
        else
        {
            x9=x9+1;
            y9=y9-1;
            p9=p9+2*(x9+1)-2*(y9+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x9+xc9,y9+yc9);
        glVertex2i(x9+xc9,-y9+yc9);
        glVertex2i(-x9+xc9,-y9+yc9);
        glVertex2i(-x9+xc9,y9+yc9);
        glVertex2i(y9+xc9,x9+yc9);
        glVertex2i(y9+xc9,-x9+yc9);
        glVertex2i(-y9+xc9,-x9+yc9);
        glVertex2i(-y9+xc9,x9+yc9);
        glEnd();
    }


    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 198, 375 );
    glVertex2i ( 202, 375 );
    glVertex2i ( 202, 403 );
    glVertex2i ( 198, 403 );
    glEnd();
//c10


    xc10 = 220 ;
    yc10 = 415 ;
    r10 = 15 ;
    p10 =1-r10;
    x10=0;
    y10=r10;


    while(x10<=y10)
    {
        if(p10<0)
        {
            x10=x10+1;
            p10=p10+2*x10+1;
        }
        else
        {
            x10=x10+1;
            y10=y10-1;
            p10=p10+2*(x10+1)-2*(y10+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x10+xc10,y10+yc10);
        glVertex2i(x10+xc10,-y10+yc10);
        glVertex2i(-x10+xc10,-y10+yc10);
        glVertex2i(-x10+xc10,y10+yc10);
        glVertex2i(y10+xc10,x10+yc10);
        glVertex2i(y10+xc10,-x10+yc10);
        glVertex2i(-y10+xc10,-x10+yc10);
        glVertex2i(-y10+xc10,x10+yc10);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 218, 375 );
    glVertex2i ( 222, 375 );
    glVertex2i ( 222, 403 );
    glVertex2i ( 218, 403 );
    glEnd();

//c11


    xc11 = 240 ;
    yc11 = 415 ;
    r11 = 15 ;
    p11 =1-r11;
    x11=0;
    y11=r11;


    while(x11<=y11)
    {
        if(p11<0)
        {
            x11=x11+1;
            p11=p11+2*x11+1;
        }
        else
        {
            x11=x11+1;
            y11=y11-1;
            p11=p11+2*(x11+1)-2*(y11+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x11+xc11,y11+yc11);
        glVertex2i(x11+xc11,-y11+yc11);
        glVertex2i(-x11+xc11,-y11+yc11);
        glVertex2i(-x11+xc11,y11+yc11);
        glVertex2i(y11+xc11,x11+yc11);
        glVertex2i(y11+xc11,-x11+yc11);
        glVertex2i(-y11+xc11,-x11+yc11);
        glVertex2i(-y11+xc11,x11+yc11);
        glEnd();
    }
    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 238, 375 );
    glVertex2i ( 242, 375 );
    glVertex2i ( 242, 403 );
    glVertex2i ( 238, 403 );
    glEnd();

//c12


    xc12 = 260 ;
    yc12 = 415 ;
    r12 = 15 ;
    p12 =1-r12;
    x12=0;
    y12=r12;


    while(x12<=y12)
    {
        if(p12<0)
        {
            x12=x12+1;
            p12=p12+2*x12+1;
        }
        else
        {
            x12=x12+1;
            y12=y12-1;
            p12=p12+2*(x12+1)-2*(y12+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x12+xc12,y12+yc12);
        glVertex2i(x12+xc12,-y12+yc12);
        glVertex2i(-x12+xc12,-y12+yc12);
        glVertex2i(-x12+xc12,y12+yc12);
        glVertex2i(y12+xc12,x12+yc12);
        glVertex2i(y12+xc12,-x12+yc12);
        glVertex2i(-y12+xc12,-x12+yc12);
        glVertex2i(-y12+xc12,x12+yc12);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 258, 375 );
    glVertex2i ( 262, 375 );
    glVertex2i ( 262, 403 );
    glVertex2i ( 258, 403 );
    glEnd();


//c13


    xc13 = 280 ;
    yc13 = 415 ;
    r13 = 15 ;
    p13=1-r13;
    x13=0;
    y13=r13;


    while(x13<=y13)
    {
        if(p13<0)
        {
            x13=x13+1;
            p13=p13+2*x13+1;
        }
        else
        {
            x13=x13+1;
            y13=y13-1;
            p13=p13+2*(x13+1)-2*(y13+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x13+xc13,y13+yc13);
        glVertex2i(x13+xc13,-y13+yc13);
        glVertex2i(-x13+xc13,-y13+yc13);
        glVertex2i(-x13+xc13,y13+yc13);
        glVertex2i(y13+xc13,x13+yc13);
        glVertex2i(y13+xc13,-x13+yc13);
        glVertex2i(-y13+xc13,-x13+yc13);
        glVertex2i(-y13+xc13,x13+yc13);
        glEnd();
    }
    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 278, 375 );
    glVertex2i ( 282, 375 );
    glVertex2i ( 282, 403 );
    glVertex2i ( 278, 403 );
    glEnd();

//c14


    xc14 = 300 ;
    yc14 = 415 ;
    r14 = 15 ;
    p14 =1-r14;
    x14=0;
    y14=r14;


    while(x14<=y14)
    {
        if(p14<0)
        {
            x14=x14+1;
            p14=p14+2*x14+1;
        }
        else
        {
            x14=x14+1;
            y14=y14-1;
            p14=p14+2*(x14+1)-2*(y14+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x14+xc14,y14+yc14);
        glVertex2i(x14+xc14,-y14+yc14);
        glVertex2i(-x14+xc14,-y14+yc14);
        glVertex2i(-x14+xc14,y14+yc14);
        glVertex2i(y14+xc14,x14+yc14);
        glVertex2i(y14+xc14,-x14+yc14);
        glVertex2i(-y14+xc14,-x14+yc14);
        glVertex2i(-y14+xc14,x14+yc14);
        glEnd();
    }
    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 298, 375 );
    glVertex2i ( 302, 375 );
    glVertex2i ( 302, 403 );
    glVertex2i ( 298, 403 );
    glEnd();

//c15


    xc15 = 320 ;
    yc15 = 415 ;
    r15 = 15 ;
    p15 =1-r15;
    x15=0;
    y15=r15;


    while(x15<=y15)
    {
        if(p15<0)
        {
            x15=x15+1;
            p15=p15+2*x15+1;
        }
        else
        {
            x15=x15+1;
            y15=y15-1;
            p15=p15+2*(x15+1)-2*(y15+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(x15+xc15,y15+yc15);
        glVertex2i(x15+xc15,-y15+yc15);
        glVertex2i(-x15+xc15,-y15+yc15);
        glVertex2i(-x15+xc15,y15+yc15);
        glVertex2i(y15+xc15,x15+yc15);
        glVertex2i(y15+xc15,-x15+yc15);
        glVertex2i(-y15+xc15,-x15+yc15);
        glVertex2i(-y15+xc15,x15+yc15);
        glEnd();
    }


    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 318, 375 );
    glVertex2i ( 322, 375 );
    glVertex2i ( 322, 403 );
    glVertex2i ( 318, 403 );
    glEnd();


    //c16


    xc16 = 340 ;
    yc16 = 415 ;
    r16 = 15 ;
    p16 =1-r16;
    x16=0;
    y16=r16;


    while(x16<=y16)
    {
        if(p16<0)
        {
            x16=x16+1;
            p16=p16+2*x16+1;
        }
        else
        {
            x16=x16+1;
            y16=y16-1;
            p16=p16+2*(x16+1)-2*(y16+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(x16+xc16,y16+yc16);
        glVertex2i(x16+xc16,-y16+yc16);
        glVertex2i(-x16+xc16,-y16+yc16);
        glVertex2i(-x16+xc16,y16+yc16);
        glVertex2i(y16+xc16,x16+yc16);
        glVertex2i(y16+xc16,-x16+yc16);
        glVertex2i(-y16+xc16,-x16+yc16);
        glVertex2i(-y16+xc16,x16+yc16);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 338, 375 );
    glVertex2i ( 342, 375 );
    glVertex2i ( 342, 403 );
    glVertex2i ( 338, 403 );
    glEnd();
//.........Right Side tree End...........!!


// left side tree start
//c1
    axc1 = 800 ;
    ayc1 = 415 ;
    ar1 = 15 ;
    ap1 =1-ar1;
    ax1=0;
    ay1=ar1;


    while(ax1<=ay1)
    {
        if(ap1<0)
        {
            ax1=ax1+1;
            ap1=ap1+2*ax1+1;
        }
        else
        {
            ax1=ax1+1;
            ay1=ay1-1;
            ap1=ap1+2*(ax1+1)-2*(ay1+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax1+axc1,ay1+ayc1);
        glVertex2i(ax1+axc1,-ay1+ayc1);
        glVertex2i(-ax1+axc1,-ay1+ayc1);
        glVertex2i(-ax1+axc1,ay1+ayc1);
        glVertex2i(ay1+axc1,ax1+ayc1);
        glVertex2i(ay1+axc1,-ax1+ayc1);
        glVertex2i(-ay1+axc1,-ax1+ayc1);
        glVertex2i(-ay1+axc1,ax1+ayc1);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 798, 375 );
    glVertex2i ( 802, 375 );
    glVertex2i ( 802, 403 );
    glVertex2i ( 798, 403 );
    glEnd();

//c2


    axc2 = 825 ;
    ayc2 = 415 ;
    ar2 = 15 ;
    ap2 =1-ar2;
    ax2=0;
    ay2=ar2;


    while(ax2<=ay2)
    {
        if(ap2<0)
        {
            ax2=ax2+1;
            ap2=ap2+2*ax2+1;
        }
        else
        {
            ax2=ax2+1;
            ay2=ay2-1;
            ap2=ap2+ax2*(ax2+1)-2*(ay2+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax2+axc2,ay2+ayc2);
        glVertex2i(ax2+axc2,-ay2+ayc2);
        glVertex2i(-ax2+axc2,-ay2+ayc2);
        glVertex2i(-ax2+axc2,ay2+ayc2);
        glVertex2i(ay2+axc2,ax2+ayc2);
        glVertex2i(ay2+axc2,-ax2+ayc2);
        glVertex2i(-ay2+axc2,-ax2+ayc2);
        glVertex2i(-ay2+axc2,ax2+ayc2);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 823, 375 );
    glVertex2i ( 827, 375 );
    glVertex2i ( 827, 403 );
    glVertex2i ( 823, 403 );
    glEnd();

//c3
    axc3 = 850 ;
    ayc3 = 415 ;
    ar3 = 15 ;
    ap3 =1-ar3;
    ax3=0;
    ay3=ar3;


    while(ax3<=ay3)
    {
        if(ap3<0)
        {
            ax3=ax3+1;
            ap3=ap3+2*ax3+1;
        }
        else
        {
            ax3=ax3+1;
            ay3=ay3-1;
            ap3=ap3+2*(ax3+1)-2*(ay3+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax3+axc3,ay3+ayc3);
        glVertex2i(ax3+axc3,-ay3+ayc3);
        glVertex2i(-ax3+axc3,-ay3+ayc3);
        glVertex2i(-ax3+axc3,ay3+ayc3);
        glVertex2i(ay3+axc3,ax3+ayc3);
        glVertex2i(ay3+axc3,-ax3+ayc3);
        glVertex2i(-ay3+axc3,-ax3+ayc3);
        glVertex2i(-ay3+axc3,ax3+ayc3);
        glEnd();
    }


    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 848, 375 );
    glVertex2i ( 852, 375 );
    glVertex2i ( 852, 403 );
    glVertex2i ( 848, 403 );
    glEnd();



//c4
    axc4 = 875 ;
    ayc4 = 420 ;
    ar4 = 20 ;
    ap4 =1-ar4;
    ax4=0;
    ay4=ar4;


    while(ax4<=ay4)
    {
        if(ap4<0)
        {
            ax4=ax4+1;
            ap4=ap4+2*ax4+1;
        }
        else
        {
            ax4=ax4+1;
            ay4=ay4-1;
            ap4=ap4+2*(ax4+1)-2*(ay4+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax4+axc4,ay4+ayc4 );
        glVertex2i(ax4+axc4,-ay4+ayc4 );
        glVertex2i(-ax4+axc4,-ay4+ayc4);
        glVertex2i(-ax4+axc4,ay4+ayc4);
        glVertex2i(ay4+axc4,ax4+ayc4);
        glVertex2i(ay4+axc4,-ax4+ayc4);
        glVertex2i(-ay4+axc4,-ax4+ayc4);
        glVertex2i(-ay4+axc4,ax4+ayc4);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 873, 375 );
    glVertex2i ( 877, 375 );
    glVertex2i ( 877, 403 );
    glVertex2i ( 873, 403 );
    glEnd();

    //c5


    axc5 = 905 ;
    ayc5 = 420 ;
    ar5 = 20 ;
    ap5 =1-ar5;
    ax5=0;
    ay5=ar5;


    while(ax5<=ay5)
    {
        if(ap5<0)
        {
            ax5=ax5+1;
            ap5=ap5+2*ax5+1;
        }
        else
        {
            ax5=ax5+1;
            ay5=ay5-1;
            ap5=ap5+2*(ax5+1)-2*(ay5+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax5+axc5,ay5+ayc5);
        glVertex2i(ax5+axc5,-ay5+ayc5);
        glVertex2i(-ax5+axc5,-ay5+ayc5);
        glVertex2i(-ax5+axc5,ay5+ayc5);
        glVertex2i(ay5+axc5,ax5+ayc5);
        glVertex2i(ay5+axc5,-ax5+ayc5);
        glVertex2i(-ay5+axc5,-ax5+ayc5);
        glVertex2i(-ay5+axc5,ax5+ayc5);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 903, 375 );
    glVertex2i ( 907, 375 );
    glVertex2i ( 907, 403 );
    glVertex2i ( 903, 403 );
    glEnd();


//c6


    axc6 = 935 ;
    ayc6 = 415 ;
    ar6 = 15 ;
    ap6 =1-ar6;
    ax6=0;
    ay6=ar6;


    while(ax6<=ay6)
    {
        if(ap6<0)
        {
            ax6=ax6+1;
            ap6=ap6+2*ax6+1;
        }
        else
        {
            ax6=ax6+1;
            ay6=ay6-1;
            ap6=ap6+2*(ax6+1)-2*(ay6+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax6+axc6,ay6+yc6);
        glVertex2i(ax6+axc6,-ay6+ayc6);
        glVertex2i(-ax6+axc6,-ay6+ayc6);
        glVertex2i(-ax6+axc6,ay6+ayc6);
        glVertex2i(ay6+axc6,ax6+ayc6);
        glVertex2i(ay6+axc6,-ax6+ayc6);
        glVertex2i(-ay6+axc6,-ax6+ayc6);
        glVertex2i(-ay6+axc6,ax6+ayc6);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 933, 375 );
    glVertex2i ( 937, 375 );
    glVertex2i ( 937, 403 );
    glVertex2i ( 933, 403 );
    glEnd();

    //c7


    axc7 = 960 ;
    ayc7 = 415 ;
    ar7 = 15 ;
    ap7 =1-ar7;
    ax7=0;
    ay7=ar7;


    while(ax7<=ay7)
    {
        if(ap7<0)
        {
            ax7=ax7+1;
            ap7=ap7+2*ax7+1;
        }
        else
        {
            ax7=ax7+1;
            ay7=ay7-1;
            ap7=ap7+2*(ax7+1)-2*(ay7+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax7+axc7,ay7+ayc7);
        glVertex2i(ax7+axc7,-ay7+ayc7);
        glVertex2i(-ax7+axc7,-ay7+ayc7);
        glVertex2i(-ax7+axc7,ay7+yc7);
        glVertex2i(ay7+axc7,ax7+yc7);
        glVertex2i(ay7+axc7,-ax7+yc7);
        glVertex2i(-ay7+axc7,-ax7+yc7);
        glVertex2i(-ay7+axc7,ax7+ayc7);
        glEnd();
    }


    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 958, 375 );
    glVertex2i ( 962, 375 );
    glVertex2i ( 962, 403 );
    glVertex2i ( 958, 403 );
    glEnd();

//c8

    axc8 = 985 ;
    ayc8 = 415 ;
    ar8 = 15 ;
    ap8 =1-ar8;
    ax8=0;
    ay8=ar8;


    while(ax8<=ay8)
    {
        if(ap8<0)
        {
            ax8=ax8+1;
            ap8=ap8+2*ax8+1;
        }
        else
        {
            ax8=ax8+1;
            ay8=ay8-1;
            ap8=ap8+2*(ax8+1)-2*(ay8+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax8+axc8,ay8+ayc8);
        glVertex2i(ax8+axc8,-ay8+ayc8);
        glVertex2i(-ax8+axc8,-ay8+ayc8);
        glVertex2i(-ax8+axc8,ay8+ayc8);
        glVertex2i(ay8+axc8,ax8+ayc8);
        glVertex2i(ay8+axc8,-ax8+ayc8);
        glVertex2i(-ay8+axc8,-ax8+ayc8);
        glVertex2i(-ay8+axc8,ax8+ayc8);
        glEnd();
    }


    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 983, 375 );
    glVertex2i ( 987, 375 );
    glVertex2i ( 987, 403 );
    glVertex2i ( 983, 403 );
    glEnd();

    //c9


    axc9 = 1010 ;
    ayc9 = 415 ;
    ar9 = 15 ;
    ap9 =1-ar9;
    ax9=0;
    ay9=r9;


    while(ax9<=ay9)
    {
        if(ap9<0)
        {
            ax9=ax9+1;
            ap9=ap9+2*ax9+1;
        }
        else
        {
            ax9=ax9+1;
            ay9=ay9-1;
            ap9=ap9+2*(ax9+1)-2*(ay9+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax9+axc9,ay9+ayc9);
        glVertex2i(ax9+axc9,-ay9+ayc9);
        glVertex2i(-ax9+axc9,-ay9+ayc9);
        glVertex2i(-ax9+axc9,ay9+ayc9);
        glVertex2i(ay9+axc9,ax9+ayc9);
        glVertex2i(ay9+axc9,-ax9+ayc9);
        glVertex2i(-ay9+axc9,-ax9+ayc9);
        glVertex2i(-ay9+axc9,ax9+ayc9);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1008, 375 );
    glVertex2i ( 1012, 375 );
    glVertex2i ( 1012, 403 );
    glVertex2i ( 1008, 403 );
    glEnd();

//c10


    axc10 = 1035 ;
    ayc10 = 415 ;
    ar10 = 15 ;
    ap10 =1-ar10;
    ax10=0;
    ay10=ar10;


    while(ax10<=ay10)
    {
        if(ap10<0)
        {
            ax10=ax10+1;
            ap10=ap10+2*ax10+1;
        }
        else
        {
            ax10=ax10+1;
            ay10=ay10-1;
            ap10=ap10+2*(ax10+1)-2*(ay10+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax10+axc10,ay10+ayc10);
        glVertex2i(ax10+axc10,-ay10+ayc10);
        glVertex2i(-ax10+axc10,-ay10+ayc10);
        glVertex2i(-ax10+axc10,ay10+ayc10);
        glVertex2i(ay10+axc10,ax10+ayc10);
        glVertex2i(ay10+axc10,-ax10+ayc10);
        glVertex2i(-ay10+axc10,-ax10+ayc10);
        glVertex2i(-ay10+axc10,ax10+ayc10);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1033, 375 );
    glVertex2i ( 1037, 375 );
    glVertex2i ( 1037, 403 );
    glVertex2i ( 1033, 403 );
    glEnd();

//c11


    axc11 = 1065 ;
    ayc11 = 415 ;
    ar11 = 15 ;
    ap11 =1-ar11;
    ax11=0;
    ay11=ar11;


    while(ax11<=ay11)
    {
        if(ap11<0)
        {
            ax11=ax11+1;
            ap11=ap11+2*ax11+1;
        }
        else
        {
            ax11=ax11+1;
            ay11=ay11-1;
            ap11=ap11+2*(ax11+1)-2*(ay11+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax11+axc11,ay11+ayc11);
        glVertex2i(ax11+axc11,-ay11+ayc11);
        glVertex2i(-ax11+axc11,ay11+ayc11);
        glVertex2i(ay11+axc11,ax11+ayc11);
        glVertex2i(ay11+axc11,-ax11+ayc11);
        glVertex2i(-ay11+axc11,-ax11+ayc11);
        glVertex2i(-ay11+axc11,ax11+ayc11);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1063, 375 );
    glVertex2i ( 1067, 375 );
    glVertex2i ( 1067, 403 );
    glVertex2i ( 1063, 403 );
    glEnd();

//c12


    axc12 = 1090 ;
    ayc12 = 415 ;
    ar12 = 15 ;
    ap12 =1-ar12;
    ax12=0;
    ay12=ar12;


    while(ax12<=ay12)
    {
        if(ap12<0)
        {
            ax12=ax12+1;
            ap12=ap12+2*ax12+1;
        }
        else
        {
            ax12=ax12+1;
            ay12=ay12-1;
            ap12=ap12+2*(ax12+1)-2*(ay12+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax12+axc12,ay12+ayc12);
        glVertex2i(ax12+axc12,-ay12+ayc12);
        glVertex2i(-ax12+axc12,-ay12+ayc12);
        glVertex2i(-ax12+axc12,ay12+ayc12);
        glVertex2i(ay12+axc12,ax12+ayc12);
        glVertex2i(ay12+axc12,-ax12+ayc12);
        glVertex2i(-ay12+axc12,-ax12+ayc12);
        glVertex2i(-ay12+axc12,ax12+ayc12);
        glEnd();
    }

    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1088, 375 );
    glVertex2i ( 1092, 375 );
    glVertex2i ( 1092, 403 );
    glVertex2i ( 1088, 403 );
    glEnd();


//c13


    axc13 = 1120 ;
    ayc13 = 415 ;
    ar13 = 15 ;
    ap13=1-ar13;
    ax13=0;
    ay13=ar13;


    while(ax13<=ay13)
    {
        if(ap13<0)
        {
            ax13=ax13+1;
            ap13=ap13+2*ax13+1;
        }
        else
        {
            ax13=ax13+1;
            ay13=ay13-1;
            ap13=ap13+2*(ax13+1)-2*(ay13+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax13+axc13,ay13+ayc13);
        glVertex2i(ax13+axc13,-ay13+ayc13);
        glVertex2i(-ax13+axc13,-ay13+ayc13);
        glVertex2i(-ax13+axc13,ay13+ayc13);
        glVertex2i(ay13+axc13,ax13+ayc13);
        glVertex2i(ay13+axc13,-ax13+ayc13);
        glVertex2i(-ay13+axc13,-ax13+ayc13);
        glVertex2i(-ay13+axc13,ax13+ayc13);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1118, 375 );
    glVertex2i ( 1122, 375 );
    glVertex2i ( 1122, 403 );
    glVertex2i ( 1118, 403 );
    glEnd();

//c14


    axc14 = 1140 ;
    ayc14 = 415 ;
    ar14 = 15 ;
    ap14 =1-ar14;
    ax14=0;
    ay14=ar14;


    while(ax14<=ay14)
    {
        if(ap14<0)
        {
            ax14=ax14+1;
            ap14=ap14+2*ax14+1;
        }
        else
        {
            ax14=ax14+1;
            ay14=ay14-1;
            ap14=ap14+2*(ax14+1)-2*(ay14+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax14+axc14,ay14+ayc14);
        glVertex2i(ax14+axc14,-ay14+ayc14);
        glVertex2i(-ax14+axc14,-ay14+ayc14);
        glVertex2i(-ax14+axc14,ay14+ayc14);
        glVertex2i(ay14+axc14,ax14+ayc14);
        glVertex2i(ay14+axc14,-ax14+ayc14);
        glVertex2i(-ay14+axc14,-ax14+ayc14);
        glVertex2i(-ay14+axc14,ax14+ayc14);
        glEnd();
    }
    glColor3f (  .75, .55, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1138, 375 );
    glVertex2i ( 1142, 375 );
    glVertex2i ( 1142, 403 );
    glVertex2i ( 1138, 403 );
    glEnd();

//c15


    axc15 = 1160 ;
    ayc15 = 415 ;
    ar15 = 15 ;
    ap15 =1-ar15;
    ax15=0;
    ay15=ar15;


    while(ax15<=ay15)
    {
        if(ap15<0)
        {
            ax15=ax15+1;
            ap15=ap15+2*ax15+1;
        }
        else
        {
            ax15=ax15+1;
            ay15=ay15-1;
            ap15=ap15+2*(ax15+1)-2*(ay15+1);

        }
        glColor3f( 0.1, 0.80, 0.45);
        glBegin(GL_POLYGON);
        glVertex2i(ax15+axc15,ay15+ayc15);
        glVertex2i(ax15+axc15,-ay15+ayc15);
        glVertex2i(-ax15+axc15,-ay15+ayc15);
        glVertex2i(-ax15+axc15,ay15+ayc15);
        glVertex2i(ay15+axc15,ax15+ayc15);
        glVertex2i(ay15+axc15,-ax15+ayc15);
        glVertex2i(-ay15+axc15,-ax15+ayc15);
        glVertex2i(-ay15+axc15,ax15+ayc15);
        glEnd();
    }

    glColor3f (  .55, .0, .15 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1158, 375 );
    glVertex2i ( 1162, 375 );
    glVertex2i ( 1162, 403 );
    glVertex2i ( 1158, 403 );
    glEnd();

    //c16


    axc16 = 1180 ;
    ayc16 = 415 ;
    ar16 = 15 ;
    ap16 =1-ar16;
    ax16=0;
    ay16=ar16;


    while(ax16<=ay16)
    {
        if(ap16<0)
        {
            ax16=ax16+1;
            ap16=ap16+2*ax16+1;
        }
        else
        {
            ax16=ax16+1;
            ay16=ay16-1;
            ap16=ap16+2*(ax16+1)-2*(ay16+1);

        }
        glColor3f( 0.1, 0.60, 0.35);
        glBegin(GL_POLYGON);
        glVertex2i(ax16+axc16,ay16+ayc16);
        glVertex2i(ax16+axc16,-ay16+ayc16);
        glVertex2i(-ax16+axc16,-ay16+ayc16);
        glVertex2i(-ax16+axc16,ay16+ayc16);
        glVertex2i(ay16+axc16,ax16+ayc16);
        glVertex2i(ay16+axc16,-ax16+ayc16);
        glVertex2i(-ay16+axc16,-ax16+ayc16);
        glVertex2i(-ay16+axc16,ax16+ayc16);
        glEnd();
    }

    glColor3f (  .75, .55, .20 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1178, 375 );
    glVertex2i ( 1182, 375 );
    glVertex2i ( 1182, 403 );
    glVertex2i ( 1178, 403 );
    glEnd();
//.........Left side tree end......!!

    //house1
    glColor3d( .85, .3, .2);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 1120,380);
    glVertex2d ( 1200,380 );
    glVertex2d ( 1160,410);
    glEnd();


    glColor3f (  .95, .85, .0 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1125, 380 );
    glVertex2i ( 1125, 350 );
    glVertex2i ( 1195, 350 );
    glVertex2i ( 1195, 380 );
    glEnd();

    glColor3f (  0, 0.5, 1 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1120, 350 );
    glVertex2i ( 1120, 355 );
    glVertex2i ( 1200, 355 );
    glVertex2i ( 1200, 350 );
    glEnd();
    glColor3f (  1, 1, 1 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1155, 375 );
    glVertex2i ( 1155, 355 );
    glVertex2i ( 1165, 355 );
    glVertex2i ( 1165, 375 );
    glEnd();

// house 2


    glColor3d( .85, .3, .80);
    glBegin(GL_TRIANGLES);
    glVertex2d ( 1065,385 );
    glVertex2d ( 1115,385 );
    glVertex2d ( 1090,410);
    glEnd();


    glColor3f (  .85, .75, .95 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1070, 385 );
    glVertex2i ( 1070, 355 );
    glVertex2i ( 1110, 355 );
    glVertex2i ( 1110, 385 );
    glEnd();

    glColor3f (  0.2, 0.5, .3 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1063, 355 );
    glVertex2i ( 1063, 350 );
    glVertex2i ( 1117, 350 );
    glVertex2i ( 1117, 355 );
    glEnd();
    glColor3f (  0, 0, 0 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1084, 375 );
    glVertex2i ( 1084, 355 );
    glVertex2i ( 1094, 355 );
    glVertex2i ( 1094, 375 );
    glEnd();


//house3

    glColor3d( .5, .3, 1 );
    glBegin(GL_TRIANGLES);
    glVertex2d ( 975,380);
    glVertex2d ( 1055,380 );
    glVertex2d ( 1015,410);
    glEnd();


    glColor3f (  .6, .7, .9 );
    glBegin(GL_POLYGON);
    glVertex2i ( 980, 380 );
    glVertex2i ( 980, 350 );
    glVertex2i ( 1050, 350 );
    glVertex2i ( 1050, 380 );
    glEnd();

    glColor3f (  0.5, 0, .5 );
    glBegin(GL_POLYGON);
    glVertex2i ( 972, 350 );
    glVertex2i ( 972, 355 );
    glVertex2i ( 1057, 355 );
    glVertex2i ( 1057, 350 );
    glEnd();
    glColor3f (  .85, .85, .85 );
    glBegin(GL_POLYGON);
    glVertex2i ( 1010, 375 );
    glVertex2i ( 1010, 355 );
    glVertex2i ( 1020, 355 );
    glVertex2i ( 1020, 375 );
    glEnd();




    glutPostRedisplay();

    glFlush ();
}
void init (void)
{

    glClearColor (0.0,0.0,0.0,0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1200,0,500);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1200,500);
    glutInitWindowPosition (100,100);
    glutCreateWindow ("Lake Scenario");
    init ();

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

