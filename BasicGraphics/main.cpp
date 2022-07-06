#include<windows.h>
#include<Gl/glut.h>
#include<stdlib.h>
void init(){
    glClearColor(1.0,1.0,0.0,0.0);
    glOrtho(0,6,0,6,0,6);
}

/*void init(){
    glClearColor(0.0,0.0,1.0,0.0);
    glOrtho(-3,3,-3,3,-3,3);
}*/
void myDisplay(){

    glClear(GL_COLOR_BUFFER_BIT);
    /*glColor3f(1.0,0.0,1.0);

    glBegin(GL_LINE_STRIP);
        glVertex2i(2,2);
        glVertex2i(3,2);
        glVertex2i(3,1);
    glEnd();*/
    glBegin(GL_POLYGON);
        glColor3f(1.0,0.0,1.0);

        glVertex2i(1,1);
        glVertex2i(1,4);
        glVertex2i(2,3);
        glVertex2i(3,5);
        glVertex2i(4,2);
        glVertex2i(5,5);
        glVertex2i(5,1);
    glEnd();

    /*glBegin(GL_TRIANGLES);
        glVertex3f(-1.0,1.5,0.0);
        glVertex3f(-1.0,2.0,0.0);
        glVertex3f(1.0,1.5,0.0);

        glColor3f(0.0,1.0,0.0);
        glVertex3f(-1.0,2.0,0.0);
        glVertex3f(1.0,1.5,0.0);
        glVertex3f(1.0,2.0,0.0);


        glColor3f(1.0,0.0,0.0);
        glVertex3f(1.0,2.0,0.0);
        glVertex3f(0.0,2.5,0.0);
        glVertex3f(-1.0,2.0,0.0);
    glEnd();*/

   /* glBegin(GL_QUADS);
        glVertex3f(2.0,2.0,0.0);
        glVertex3f(2.0,-2.0,0.0);
        glVertex3f(-2.0,-2.0,0.0);
        glVertex3f(-2.0,2.0,0.0);
    glEnd();

    glColor3f(1.0,0.0,0.0);
    glBegin(GL_LINES);
        glVertex3f(1.5,1.0,0.0);
        glVertex3f(0.0,0.0,0.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
        glVertex3f(0.0,1.0,0.0);
        glVertex3f(-1.0,-1.0,0.0);
        glVertex3f(1.0,-1.0,0.0);
    glEnd();*/

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
