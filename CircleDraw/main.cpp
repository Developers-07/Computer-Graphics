#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<Math.h>

void init(){

    glClearColor(0.0,0.0,0.0,0.0);
    glOrtho(-400,400,-400,400,-400,400);

}

void DrawCircle(float x, float y, float x1, float y1, int n)
{
    glBegin(GL_TRIANGLE_FAN);

    for (int i=0;i<n;i++)
    {
        float Q=2.0f * 3.1415926f * float(i) / float(n);

        float a = x1 * cosf(Q);
        float b = y1 * sinf(Q);

        glVertex2f(a + x, b + y);

    }

    glEnd();
}

void display_Moon()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5,0.9,0.2);
    DrawCircle(0,0,200,200,200);
    glColor3f(0.0,0.0,0.0);
    DrawCircle(50,50,200,200,200);

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Lighting Moon");
    init();
    glutDisplayFunc(display_Moon);

    glutMainLoop();
    return 0;
}

