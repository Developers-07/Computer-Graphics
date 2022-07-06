#include<windows.h>
#include<Gl/glut.h>
#include<Gl/glu.h>
#include<Gl/gl.h>
#include<stdlib.h>
#include<math.h>

static float tx=0.0;
static float ty=0.0;

void init(){

     glClearColor(0.0,0.0,0.0,0.0);
     glOrtho(-100.0,100.0,-100.0,100.0,-1.0,1.0);

}
void myDisplay(void){

    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

    glColor3f(1.0,1.0,1.0);

    glTranslatef(tx,ty,0);

    glRectf(-25.0,-25.0,25.0,25.0);

    glPopMatrix();

    glFlush();

}
void spc_key(int key,int x,int y){

    switch(key){

        case GLUT_KEY_LEFT:
            tx=tx-1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_RIGHT:
            tx=tx+1;
            glutPostRedisplay();
            break;

        case GLUT_KEY_UP:
            ty=ty+1;
            glutPostRedisplay();
            break;
        case GLUT_KEY_DOWN:
            ty=ty-1;
            glutPostRedisplay();
            break;

        default:
            break;

    }

}

int main(){

     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize(500,500);
     glutInitWindowPosition(100,100);
     glutCreateWindow("Translation");
     init();
     glutDisplayFunc(myDisplay);
     glutSpecialFunc(spc_key);

     glutMainLoop();
     return 0;

}
