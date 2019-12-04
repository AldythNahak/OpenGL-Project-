////#include <Windows.h>
////#include <gl/glut.h>
////#include <gl/Gl.h>
////#define RATIO 1.200
////#define WW 100
////#define WH (WW/RATIO)
////#define HALFX ((int)(WW/2))
////#define HALFY ((int)(WH/2))
////#define deltat .0009
////
////int WindowWidth;
////int WindowHeight;
////
////void InitGL();
////void Display();
////void Reshape(int,int);
////
////main(int argc, char **argv)
////{
////
//// glutInit(&argc,argv);
//// glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
////
//// WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.4);
//// WindowHeight = (int)(WindowWidth/RATIO);
////
//// glutInitWindowSize(WindowWidth,WindowHeight);
////
////glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.1),(glutGet((GLenum)GLUT_SCREEN_HEIGHT)/2)-(WindowHeight/2));
////
//// glutCreateWindow("672017081 - Aldyth Mayesthycho Valentyno Nahak");
////
//// glutDisplayFunc(Display);
////
//// glutReshapeFunc(Reshape);
////
//// InitGL();
////
//// glutMainLoop();
////}
////
////void Display()
////{
////
//// glLineWidth(4.0);
////
////float StartShape[12][2]={{-5,25},{5,25},{5,-10},{10,-10},{10,-10},{10,-15}, {-10,-15}, {-10,-10}, {-5,-10}, {-5,15},{-10,15},{-10,19}};
////
////float EndShape[12][2]= {{-15,25},{-8,25},{-8,5},{7,25},{16,25},{-3,0},{16,-25},{7,-25},{-8,-5},{-8,-25},{-15,-25},{-15,0}};
////
////float IntermediateShape[12][2];
////
////float VertexColors[12][3]={{0.7,0,0},{0.6,0.7,0},{0.3,0,0.7},{0,0.5,0},{0,0.8,0.4},{0,0,0.8},{0.3,0.5,0},{1,0,0.5},{0.5,1,0},{0.5,0,1}, {1,0,0.5},{0,1,0.5}};
////
//// static float Tween=0.0-deltat;
////
//// if(Tween<1)
//// {
//// Tween+= deltat;
//// }
////
//// for (int Vtx=0;Vtx<12;Vtx++)
//// {
//// IntermediateShape[Vtx][0]=(1.0-Tween)*StartShape[Vtx][0]+Tween*EndShape[Vtx][0];
//// IntermediateShape[Vtx][1]=(1.0-Tween)*StartShape[Vtx][1]+Tween*EndShape[Vtx][1];
//// }
////
//// glVertexPointer(2,GL_FLOAT,0,IntermediateShape);
//// glColorPointer(3,GL_FLOAT,0,VertexColors);
////
////for (int i = 0; i < 1000000; i++);
////
//// glClear(GL_COLOR_BUFFER_BIT);
////
//// //glDrawArrays(GL_LINE_LOOP,0,12);
////  glDrawArrays(GL_s,0,12);
////
//// glutSwapBuffers();
////
//// glutPostRedisplay();
////}
////
////void Reshape(int w,int h)
////{
//// glutReshapeWindow(w,(int)(w/RATIO));
//// WindowWidth=w;
//// WindowHeight=(int)(w/RATIO);
//// InitGL();
////}
////
////void InitGL()
////{
////
//// glMatrixMode(GL_PROJECTION);
//// glLoadIdentity();
//// gluOrtho2D(-HALFX,HALFX,-HALFY,HALFY);
//// glMatrixMode(GL_MODELVIEW);
////
//// glClearColor(0, 0, 0, 1);
////
//// glEnableClientState (GL_VERTEX_ARRAY);
////
//// glEnableClientState (GL_COLOR_ARRAY);
//// glShadeModel(GL_SMOOTH);
//// glViewport(0,0,WindowWidth,WindowHeight);
////}
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

//#include <windows.h>
//#include <GL/glut.h>
//float xrot = 0.0f;
//float yrot = 0.0f;
//float xdiff = 0.0f;
//float ydiff = 0.0f;
//
//bool mouseDown = false;
//
//void Inisialisasi(void){
//glClearColor(0.0,0.0,0.0,1.0);
//glEnable(GL_LIGHTING);
//glEnable(GL_COLOR_MATERIAL);
//glEnable(GL_LIGHT0);
//glEnable(GL_DEPTH_TEST);
//}
//
//void desain(void){
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glLoadIdentity();
//    gluLookAt(0.0,2.0,5.0,0.0,0.0,0.0,5.0,0.0,0.0);
//    glRotatef(xrot,1.0,0.0,0.0);
//    glRotatef(yrot,1.0,0.0,0.0);
//    glPushMatrix();
//    glScalef(2.0,2.0,2.0);
//    glutSolidCube(20.0);
//    glPopMatrix();
//    glutSwapBuffers();
//
//}
//
//int main(int argc, char** argv) {
//   glutInit(&argc, argv);            // Initialize GLUT
//   glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode
//   glutInitWindowSize(640, 480);   // Set the window's initial width & height
//   glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
//   glutCreateWindow("Latihan 3D");          // Create window with the given title
//   glutDisplayFunc(desain);       // Register callback handler for window re-paint event
//   //glutReshapeFunc(reshape);       // Register callback handler for window re-size event
//   //glutKeyboardFunc(keyboard);
//   Inisialisasi();                       // Our own OpenGL initialization
//   glutMainLoop();                 // Enter the infinite event-processing loop
//   return 0;
//}
///////////////////////////////////////////LAMPION///////////////////////////////////////////////////////////////////
#include <windows.h>
#include <GL/glut.h>
int w=800, h=600, z=0;
int x1=0, y1=0, z1=0, sudut=0;
void renderScene (void) {
static float alpha =0;
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glClearColor (0, 0, 0, 0);
glLoadIdentity ();
glTranslatef (0, 0, z);
glRotatef (sudut, x1, y1, z1);
glRotatef (alpha,1,1,1);
glColor3f(1, 1, 0);
alpha = alpha +0.5;
//glutWireCube (3);//fungsi kubus
//glutSolidCube(3);//kubus penuh warna
glutWireSphere(2,90,90);//fungsi bola
//glutWireCone(2, 4, 25, 25);//fungsi kerucut
glColor3f(1,0,0);
glutWireTorus (4, 2, 90, 30);//fungsi donat
//glutWireTeapot (4);//fungsi ceret
//glutSolidIcosahedron ();//fungsi delima
//glutWireDodecahedron ();//fungsi bola
//glutWireTetrahedron();//fungsi piramida
glutSwapBuffers ();
}
void resize (int w1, int h1) {
glViewport (0, 0, w1, h1);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective (45.0,(float) w1/(float) h1,1.0, 100.0);
glMatrixMode (GL_MODELVIEW);
glLoadIdentity ();
}
void Keyboard (GLubyte key, GLint x, GLint y) {
if (key == 'a' || key == 'A') z+=2;
if (key == 'd' || key == 'D') z-=2;
if (key == 'x' || key == 'X') {
x1=1;
y1=0;
z1=0;
sudut +=10;
}
if (key == 'y' || key == 'Y') {
x1=0;
y1=1;
z1=0;
sudut +=-10;
}
if (key == 'z'|| key == 'Z') {
x1=0;
y1=0;
z1=1;
sudut +=-10;
}
if ( key == 'f'|| key == 'F') {
glutFullScreen ();
}
{
int foo;
foo = x + y;
if ('q' == key || 'Q' == key || 27 == key)
exit (0);
}
}
void timer (int value) {
glutPostRedisplay ();
glutTimerFunc (1,timer,0);
}
int main (int argc, char **argv) {
glutInit (&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
glutInitWindowPosition (100,100);
glutInitWindowSize (w,h);
glutCreateWindow ("3D");
gluOrtho2D (-w/2,w/2,-h/2,h/2);
glutDisplayFunc (renderScene);
glutReshapeFunc (resize);
glutKeyboardFunc (Keyboard);
glutTimerFunc (1,timer,0);
glutMainLoop ();
}
////////////////////////////////////BALING-BALING///////////////////////////////////////////////////////////////
//#include <windows.h>
//#include <GL/glut.h>
//int y=0;
//int x=0;
//int z=0;
//int z2=360;
//int s=0;
//void drawQuad1() {
//glBegin (GL_POLYGON);
//glColor3f(0,0,0);
//glVertex2i(0,0);
//glVertex2i(-50,-200);
//glVertex2i(50,-200);
//glVertex2i(0,0);
//glVertex2i(-50,200);
//glVertex2i(50,200);
//glColor3f(1,0,0);
//glVertex2i(0,0);
//glVertex2i(-50,125);
//glVertex2i(50,125);
//glVertex2i(0,0);
//glVertex2i(-50,-125);
//glVertex2i(50,-125);
//glEnd();
//}
//void renderScene(void){
//glClear(GL_COLOR_BUFFER_BIT);
//glClearColor(1,1,1,1);
//glRotatef(x,0,0,1);
//drawQuad1();
//glFlush();
//}
//void timer (int value){
//if (z <= 360){
//x = 1;
//z +=1;
//}
//if (z > 360){
//x = +1;
//z2 +=1;
//}
///*if (z2 < 0) {
//x = 1;
//z = 0;
//z2 = 360;
//}*/
//glutPostRedisplay();
//glutTimerFunc(1, timer, 0);
//}
//void Keyboard(GLubyte key, GLint x, GLint y){
//if (key == 'f' || key=='F') {
//glutFullScreen ();
//}
//{
//int foo;
//foo = x + y;
//if ('q' == key || 'Q' == key ||27 ==key)
//exit (0);
//}
//}
//int main(int argc, char **argv){
//glutInit(&argc, argv);
//glutInitWindowPosition (100,100);
//glutInitWindowSize (300,300);
//glutCreateWindow ("TUGAS KIKI HERMANSYAH 123510665");
//gluOrtho2D(-200.0,200.0,-200.0,200.0);
//glutDisplayFunc(renderScene);
//glutTimerFunc(5,timer,0);
//glutMainLoop();
//}

