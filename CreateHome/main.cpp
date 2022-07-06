#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(0,20,0,20,0,20);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_LINE_LOOP);
        glVertex3d(2.0,10.0,0.0);
        glVertex3d(5.0,15.0,0.0);
        glVertex3d(7.0,10.0,0.0);
    glEnd();
    glBegin(GL_LINES);
         glColor3f(1.0f,1.0f,1.0f);
        glVertex3d(2.3,10.0,0.0);
        glVertex3d(2.3,2.0,0.0);

        glVertex3d(6.7,10.0,0.0);
        glVertex3d(6.7,2.0,0.0);

        glVertex3d(2.3,2.0,0.0);
        glVertex3d(6.7,2.0,0.0);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glRectf(2.7,5.0,6.2,8.0);

    glColor3f(1.0f,1.0f,1.0f);
    glRectf(4.0,11.0,5.5,12.5);


    glBegin(GL_LINE_STRIP);
        glVertex3d(5.5,13.5,0.0);
        glVertex3d(13.5,13.5,0.0);
        glVertex3d(16.0,8.0,0.0);
    glEnd();

    glBegin(GL_LINES);
        glVertex3d(6.7,8.0,0.0);
        glVertex3d(16.0,8.0,0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex3d(6.7,2.0,0.0);
        glVertex3d(14.0,2.0,0.0);
        glVertex3d(14.0,8.0,0.0);
    glEnd();


    glColor3f(1.0f,1.0f,1.0f);
    glRectf(11.0,4.0,13.0,6.0);


    glColor3f(1.0f,1.0f,1.0f);
    glRectf(8.0,2.5,9.0,6.0);

    glColor3f(1.0f,1.0f,1.0f);
    glRectf(7.0,2.0,10.0,6.0);


    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Build House");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
