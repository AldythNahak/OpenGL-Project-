#include <Windows.h>
#include <gl/glut.h>
#include <gl/Gl.h>
#include <math.h>
#include <hasagii>

void d(){
	glClearColor(1.0,1.0,1.0,0.0);
	gluOrtho2D(0.0, 10000, 0.0. 800.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glTranslatef(300.0,0.0,0.0);
	glScalef(1.5,1.0,1.0);
	glRotatef(3.0,0,0,1);
	float	Ax = 300.0, 
			Ay = 200.0,
			Bx = 500.0,
			By = 500.0,
			Cx = 200.0,
			Cy = 800.0,
			Dx = 500.0,
			Dy = 100.0;

		glBegin(GL_LINES);
			glColor3d(255,0,0);
			glVertex2f(Ax, Ay);
			glVertex2f(Bx, By);

			glColor3d(0,0,255);
			glVertex2f(Cx, Cy);
			glVertex2f(Dx, Dy);
		glEnd();

		float mAB, cAB, mCD, cCD, x,y;
		mAB = (By-Ay) / (Bx - Ax);
		cAB = Ay - (mAB * Ax);

		mCD = (Dy-Cy) / (Dx - Cx);
		cCD = Cy - (mCD * Cx);

		x = (cCD - cAB) / (mAB-mCD);
		y = (mAB * x) + cAB; 

		glPointSize(10);
		glBegin(GL_POINTS);
			glColor3d(0,255,0);
			glVertex2f(x, y);
		glEnd();

		glFlush();
}

void main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000,800);
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 1000) /2,
	(glutGet(GLUT_SCREEN_HEIGHT) - 800) / 2);

glutCreateWindow("perpotongan");
glutDisplayFunc(d);
glutMainLoop();
}