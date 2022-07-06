#include<windows.h>
#include<Gl/glut.h>
#include<Gl/glu.h>
#include<Gl/gl.h>
#include<stdlib.h>
#include<math.h>

static GLfloat spin=0.0;


void init(){

     glClearColor(0.0,0.0,0.0,0.0);
     glOrtho(-100.0,100.0,-100.0,100.0,-1.0,1.0);

}
void myDisplay(void){

    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

    glColor3f(1.0,1.0,1.0);

    glRotatef(spin,0.0,0.0,1.0);

    glRectf(-25.0,-25.0,25.0,25.0);

    glPopMatrix();

    glFlush();

}
void spin_left(){
     spin=spin+1;
     glutPostRedisplay();
}
void spin_right(){
     spin=spin-1;
     glutPostRedisplay();
}


void my_mouse(int button,int state,int x,int y){

    switch(button){

        case GLUT_LEFT_BUTTON:
             glutIdleFunc(spin_left);
            break;
        case GLUT_RIGHT_BUTTON:
            glutIdleFunc(spin_right);
            break;

        default:
            break;

    }

}

int main(){

     glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize(500,500);
     glutInitWindowPosition(100,100);
     glutCreateWindow("Rotation");
     init();
     glutDisplayFunc(myDisplay);
     glutMouseFunc(my_mouse);

     glutMainLoop();
     return 0;

}
