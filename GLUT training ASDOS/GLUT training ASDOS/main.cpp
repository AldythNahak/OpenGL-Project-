#include <Windows.h>
#include <glut.h>
#include <gl/Gl.h>
#include <math.h>

void perpotongan(){
	glClearColor(1.0,1.0,1.0,1.0);
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	glClear(GL_COLOR_BUFFER_BIT);

//	glTranslatef(100.0,0.0,0.0);
//	glScalef(1.5,1.0,1.0);
//	glRotatef(5.0,0.0,0.0,0.0);
	float
            Ax = 100.0,
			Ay = 50.0,
			Bx = 500.0,
			By = 475.0,
			Cx = 125.0,
			Cy = 300.0,
			Dx = 650.0,
			Dy = 275.0;

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
		y = (mAB * x)+ cAB;

		glPointSize(5);
		glColor3f(0.0,1.0,0.0);
		glBegin(GL_POINTS);
			glVertex2f(x, y);
		glEnd();

		glFlush();
}

int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 640) /2,
	(glutGet(GLUT_SCREEN_HEIGHT) - 480) / 2);

glutCreateWindow("perpotongan");
glutDisplayFunc(perpotongan);
glutMainLoop();
}

