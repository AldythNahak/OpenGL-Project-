
#include <Windows.h>
#include <gl/glut.h>
#include <gl/Gl.h>

void myInit(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0f, 1.0f, 1.0f);
glPointSize(1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glLineWidth(1.0f);
gluOrtho2D(-1080.0, 1080.0, -1080.0, 1080.0);
}
void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(50.0);
glColor3f(1.0,0.5,0.0);
glBegin(GL_LINE_LOOP);
glVertex2i(100,200);
glVertex2i(500,200);
glVertex2i(100,0);
glVertex2i(500,0);
glEnd();

glutSwapBuffers();

glFlush();
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1080,720);
glutInitWindowPosition(100, 150);

glutCreateWindow("672017081");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}
//
//

//#include <Windows.h>
//#include <gl/glut.h>
//#include <gl/Gl.h>
//#include <math.h>
//
//void perpotongan(){
//	glClearColor(1.0,1.0,1.0,1.0);
//	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//	glClear(GL_COLOR_BUFFER_BIT);
//
////	glTranslatef(100.0,0.0,0.0);
////	glScalef(1.5,1.0,1.0);
////	glRotatef(5.0,0.0,0.0,0.0);
//	float
//            Ax = 100.0,
//			Ay = 50.0,
//			Bx = 500.0,
//			By = 475.0,
//			Cx = 125.0,
//			Cy = 300.0,
//			Dx = 650.0,
//			Dy = 275.0;
//
//		glBegin(GL_LINES);
//			glColor3d(255,0,0);
//			glVertex2f(Ax, Ay);
//			glVertex2f(Bx, By);
//
//			glColor3d(0,0,255);
//			glVertex2f(Cx, Cy);
//			glVertex2f(Dx, Dy);
//		glEnd();
//
//		float mAB, cAB, mCD, cCD, x,y;
//		mAB = (By-Ay) / (Bx - Ax);
//		cAB = Ay - (mAB * Ax);
//
//		mCD = (Dy-Cy) / (Dx - Cx);
//		cCD = Cy - (mCD * Cx);
//
//		x = (cCD - cAB) / (mAB-mCD);
//		y = (mAB * x)+ cAB;
//
//		glPointSize(5);
//		glColor3f(0.0,1.0,0.0);
//		glBegin(GL_POINTS);
//			glVertex2f(x, y);
//		glEnd();
//
//		glFlush();
//}
//
//int main(int argc, char** argv){
//glutInit(&argc, argv);
//glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//glutInitWindowSize(640,480);
//glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 640) /2,
//	(glutGet(GLUT_SCREEN_HEIGHT) - 480) / 2);
//
//glutCreateWindow("perpotongan");
//glutDisplayFunc(perpotongan);
//glutMainLoop();
//}

//#include <Windows.h>
//#include <gl/glut.h>
//#include <gl/Gl.h>
//#define RATIO 1.200
//#define WW 100
//#define WH (WW/RATIO)
//#define HALFX ((int)(WW/2))
//#define HALFY ((int)(WH/2))
//#define deltat .0009
//
//int WindowWidth;
//int WindowHeight;
//
//void InitGL();
//void Display();
//void Reshape(int,int);
//
//main(int argc, char **argv)
//{
//
// glutInit(&argc,argv);
// glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
//
// WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.4);
// WindowHeight = (int)(WindowWidth/RATIO);
//
// glutInitWindowSize(WindowWidth,WindowHeight);
//
//glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.1),(glutGet((GLenum)GLUT_SCREEN_HEIGHT)/2)-(WindowHeight/2));
//
// glutCreateWindow("Huruf A menjadi H (Created by Aldyth)");
//
// glutDisplayFunc(Display);
//
// glutReshapeFunc(Reshape);
//
// InitGL();
//
// glutMainLoop();
//}
//
//void Display()
//{
//
// glLineWidth(4.0);
//
//float StartShape[12][2]={{-8,23},{8,23},{23,-23},{11,-23},{7,-5},{-6,-5}, {-5,0}, {5,0}, {0,15}, {-5,0},{-11,-23},{-23,-23}};
//
//float EndShape[12][2]= {{-15,25},{-5,25},{-5,5},{5,5},{5,25},{15,25},{15,-25},{5,-25},{5,-5},{-5,-5},{-5,-25},{-15,-25}};
//
//float IntermediateShape[12][2];
//
//float VertexColors[12][3]={{0.7,0,0},{0.6,0.7,0},{0.3,0,0.7},{0,0.5,0},{0,0.8,0.4},{0,0,0.8},{0.3,0.5,0},{1,0,0.5},{0.5,1,0},{0.5,0,1}, {1,0,0.5},{0,1,0.5}};
//
// static float Tween=0.0-deltat;
//
// if(Tween<1)
// {
// Tween+= deltat;
// }
//
// for (int Vtx=0;Vtx<12;Vtx++)
// {
// IntermediateShape[Vtx][0]=(1.0-Tween)*StartShape[Vtx][0]+Tween*EndShape[Vtx][0];
// IntermediateShape[Vtx][1]=(1.0-Tween)*StartShape[Vtx][1]+Tween*EndShape[Vtx][1];
// }
//
// glVertexPointer(2,GL_FLOAT,0,IntermediateShape);
// glColorPointer(3,GL_FLOAT,0,VertexColors);
//
//for (int i = 0; i < 1000000; i++);
//
// glClear(GL_COLOR_BUFFER_BIT);
//
// glDrawArrays(GL_LINE_LOOP,0,12);
//
// glutSwapBuffers();
//
// glutPostRedisplay();
//}
//
//void Reshape(int w,int h)
//{
// glutReshapeWindow(w,(int)(w/RATIO));
// WindowWidth=w;
// WindowHeight=(int)(w/RATIO);
// InitGL();
//}
//
//void InitGL()
//{
//
// glMatrixMode(GL_PROJECTION);
// glLoadIdentity();
// gluOrtho2D(-HALFX,HALFX,-HALFY,HALFY);
// glMatrixMode(GL_MODELVIEW);
//
// glClearColor(0, 0, 0, 1);
//
// glEnableClientState (GL_VERTEX_ARRAY);
//
// glEnableClientState (GL_COLOR_ARRAY);
// glShadeModel(GL_SMOOTH);
// glViewport(0,0,WindowWidth,WindowHeight);
//}
//////////////////////////////////////////////////////////////////////////

// #include <windows.h>
//#include <GL/glut.h>
//
//bool depan = true;
//
//void initGL() {
//   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//   glClearDepth(1.0f);
//   glEnable(GL_DEPTH_TEST);
//   glDepthFunc(GL_LEQUAL);
//   glShadeModel(GL_SMOOTH);
//   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
//
//}
//
//void display() {
//   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//   glBegin(GL_QUADS);
//      glColor3f(1.0f, 0.0f, 0.0f);//depan
//        glVertex3f( -3.0f, -3.0f, 0.0f);
//          glVertex3f(3.0f, -3.0f, 0.0f);
//          glVertex3f(3.0f, 3.0f,  0.0f);
//          glVertex3f( -3.0f, 3.0f,  0.0f);
//
//        glColor3f(1.0f, 0.5f, 0.0f);//belakang
//          glVertex3f( -3.0f, -3.0f, -6.0f);
//          glVertex3f(3.0f, -3.0f, -6.0f);
//          glVertex3f(3.0f, 3.0f,  -6.0f);
//          glVertex3f( -3.0f, 3.0f,  -6.0f);
//
//           glColor3f(0.0f, 1.0f, 0.0f);
//           glVertex3f( 3.0f, -3.0f, 0.0f);//kanan
//          glVertex3f(3.0f, -3.0f, -6.0f);
//          glVertex3f(3.0f, 3.0f,  -6.0f);
//          glVertex3f( 3.0f, 3.0f,  0.0f);
//
//          glColor3f(0.0f, 0.0f, 1.0f);
//         glVertex3f( -3.0f, -3.0f, 0.0f);//kiri
//          glVertex3f(-3.0f, -3.0f, -6.0f);
//          glVertex3f(-3.0f, 3.0f,  -6.0f);
//          glVertex3f( -3.0f, 3.0f,  0.0f);
//
//           glColor3f(1.0f, 1.0f, 1.0f);
//         glVertex3f( -3.0f, -3.0f, 0.0f);//bawah
//          glVertex3f(-3.0f, -3.0f, -6.0f);
//          glVertex3f(3.0f, -3.0f,  -6.0f);
//          glVertex3f( 3.0f, -3.0f,  0.0f);
//
//        glColor3f(1.0f, 1.0f, 0.0f);
//         glVertex3f( -3.0f, 3.0f, 0.0f);//atas
//          glVertex3f(-3.0f, 3.0f, -6.0f);
//          glVertex3f(3.0f, 3.0f,  -6.0f);
//          glVertex3f( 3.0f, 3.0f,  0.0f);
//
//   glEnd();
////   glBegin(GL_TRIANGLES);
////   glColor3f(0.0f, 1.0f, 0.0f);    //kanan
////    glVertex3f( 3.0f, -3.0f, 0.0f);
////    glVertex3f(6.0f, 0.0f, 0.0f);
////    glVertex3f(3.0f, 3.0f,  0.0f);
////      glColor3f(0.5f, 0.5f, 0.5f);   //kiri
////    glVertex3f( -3.0f, -3.0f, 0.0f);
////    glVertex3f(-6.0f, 0.0f, 0.0f);
////    glVertex3f(-3.0f, 3.0f,  0.0f);
////    glColor3f(1.0f, 0.0f, 0.0f);    //atas
////    glVertex3f( -3.0f, 3.0f, 0.0f);
////    glVertex3f(0.0f, 6.0f, 0.0f);
////    glVertex3f(3.0f, 3.0f,  0.0f);
////     glColor3f(1.0f, 1.0f, 0.0f);    //bawah
////    glVertex3f( -3.0f, -3.0f, 0.0f);
////    glVertex3f(0.0f, -6.0f, 0.0f);
////    glVertex3f(3.0f, -3.0f,  0.0f);
////   glEnd();
//   glutSwapBuffers();
//}
//
//
//void reshape(GLsizei width, GLsizei height) {
//
//   if (height == 0) height = 1;
//   GLfloat aspect = (GLfloat)width / (GLfloat)height;
//
//
//   glViewport(0, 0, width, height);
//
//
//   glMatrixMode(GL_PROJECTION);
//   glLoadIdentity();
//
//   gluPerspective(45.0f, aspect, 0.1f, 100.0f);
//}
//
//void keyboard(unsigned char key, int x, int y) {
//   switch (key) {
//			 //gerak ke kiri
//		case 'b':
//		case 'B':
//			depan = false;
//			break;
//			 //gerak ke kiri
//		case 'v':
//		case 'V':
//			depan = true;
//			break;
//			 //gerak ke kiri
//		case 'a':
//		case 'A':
//			glTranslatef(-5.0, 0.0, 0.0);
//			break;
//			 //gerak ke kanan
//		case 'd':
//		case 'D':
//			glTranslatef(5.0, 0.0, 0.0);
//			break;
//			 //gerak ke depan
//		case 'w':
//		case 'W':
//			glTranslatef(0.0, 0.0, 5.0);
//			break;
//			 //gerak ke belakang
//		case 's':
//		case 'S':
//			glTranslatef(0.0, 0.0, -5.0);
//			break;
//			 //rotate ke kiri
//		case 'j':
//		case 'J':
//			glRotatef(1.0, 0.0, -10.0, 0.0);
//			break;
//			//rotate ke kanan
//		case 'l':
//		case 'L':
//			glRotatef(1.0, 0.0, 10.0, 0.0);
//			break;
//
//			//rotate ke atas
//		case 'i':
//		case 'I':
//			glRotatef(5.0, -10.0, 0.0, 0.0);
//			break;
//			//rotate ke bawah
//		case 'k':
//		case 'K':
//			glRotatef(5.0, 10.0, 0.0, 0.0);
//			break;
//   }
//   display();
//}
//
//
//int main(int argc, char** argv) {
//   glutInit(&argc, argv);
//   glutInitDisplayMode(GLUT_DOUBLE);
//   glutInitWindowSize(640, 480);
//   glutInitWindowPosition(50, 50);
//   glutCreateWindow("Latihan 3D");
//   glutDisplayFunc(display);
//   glutReshapeFunc(reshape);
//   glutKeyboardFunc(keyboard);
//   initGL();
//   glutMainLoop();
//   return 0;
//}


