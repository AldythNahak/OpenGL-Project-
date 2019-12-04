#include <stdio.h>
#include <stdlib.h>
//#include <glut.h>
#include <math.h>

void userdraw(void) {

	glBegin(0,0,1);
	glColor3f( 0.1.0 , ... , ...);
	glVertex2i( ... , ...);

	glEnd();


}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	...();
	glutSwapBuffers();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(..., ...);
	glutInitWindowSize(... , ... );

	glutCreateWindow("ini hanya contoh source code nya");
	glClearColor(1,1,1,1);
	gluOrtho2D(... ,   ... , ... , ...);

	glutDisplayFunc(...);

	glutMainLoop();
	return 0;
}
