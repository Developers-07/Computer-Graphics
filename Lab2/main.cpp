
#include<windows.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<stdlib.h>

void init(){
    glClearColor(1.0,1.0,0.0,0.0);
    glOrtho(0,20,0,20,0,20);
}

/*void init(){
    glClearColor(0.0,0.0,1.0,0.0);
    glOrtho(-3,3,-3,3,-3,3);
}*/
void myDisplay(){

    glClear(GL_COLOR_BUFFER_BIT);
    int x1=1,y1=8,x2=2,y2=9;
    for(int j=0;j<8;j++){
        if(j%2==0){
            for(int i=0;i<8;i++){
                if(i%2==1){
                    glColor3ub(0,0,0);
                }
                else if(i%2==0){
                    glColor3ub(255,255,255);
                }
                glRectd(x1,y1,x2,y2);
                x1++;
                x2++;
            }
        }
        else if(j%2==1){
            for(int i=0;i<8;i++){
                if(i%2==0){
                    glColor3ub(0,0,0);
                }
                else if(i%2==1){
                    glColor3ub(255,255,255);
                }
                glRectd(x1,y1,x2,y2);
                x1++;
                x2++;
            }
        }
       x1=1;
       x2=2;
       y1-=1;
       y2-=1;
    }

    /*for(int i=0;i<=6;i++){
        if(i%2==0){
            glColor3ub(0,0,0);
        }
        else if(i%2==1){
            glColor3ub(255,255,255);
        }
            glRectd(x1,y1,x2,y2);
            x1++;
            x2++;
            y1++;
            y2++;
    }*/

       /* glColor3f(1.0,1.0,1.0);
        glRectd(2,2,5,4);

        glColor3f(0.0,0.0,0.0);
        glRectd(2.5,2,3,4);

        glColor3f(0.0,0.0,0.0);
        glRectd(3.5,2,4,4);

        glColor3f(0.0,0.0,0.0);
        glRectd(4.5,2,5,4);*/

    glFlush();

}

int main(){

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,500);
    glutInitWindowPosition(500,200);
    glutCreateWindow("Zishan");

    init();

    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;

}
