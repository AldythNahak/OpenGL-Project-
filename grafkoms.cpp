#include <windows.h>
#include <gl/glut.h>
#include <gl/Gl.h>

void myInit(void)
{
glClearColor(1.0,1.0,1.0,0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINTS);

glVertex2i(100, 50); // menggambar 3 titik
glVertex2i(100, 130);
glVertex2i(150, 130);

glEnd();
glFlush(); // kirim output ke layar
}

int main(int argc, char** argv)
{
glutInit(&argc, argv); // inisialisasi toolkit
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set modus display
glutInitWindowSize(640,480);
glutInitWindowPosition(100, 150);
glutCreateWindow("my first attempt");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}

