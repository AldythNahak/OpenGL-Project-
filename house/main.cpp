///*
// * GLUT Shapes Demo
// *
// * Written by Nigel Stewart November 2003
// *
// * This program is test harness for the sphere, cone
// * and torus shapes in GLUT.
// *
// * Spinning wireframe and smooth shaded shapes are
// * displayed until the ESC or q key is pressed.  The
// * number of geometry stacks and slices can be adjusted
// * using the + and - keys.
// */
//#include <windows.h>
//#include <GL/glut.h>
//
//static int slices = 16;
//static int stacks = 16;
//
///* GLUT callback Handlers */
//
//static void resize(int width, int height)
//{
//    const float ar = (float) width / (float) height;
//
//    glViewport(0, 0, width, height);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);
//
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity() ;
//}
//
//static void display(void)
//{
//    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
//    const double a = t*90.0;
//
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//    glColor3d(1,0,0);
//
//    glPushMatrix();
//        glTranslated(-2.4,1.2,-6);
//        glRotated(60,1,0,0);
//        glRotated(a,0,0,1);
//        glutSolidSphere(1,slices,stacks);
//    glPopMatrix();
//
//    glPushMatrix();
//        glTranslated(0,1.2,-6);
//        glRotated(60,1,0,0);
//        glRotated(a,0,0,1);
//        glutSolidCone(1,1,slices,stacks);
//    glPopMatrix();
//
//    glPushMatrix();
//        glTranslated(2.4,1.2,-6);
//        glRotated(60,1,0,0);
//        glRotated(a,0,0,1);
//        glutSolidTorus(0.2,0.8,slices,stacks);
//    glPopMatrix();
//
//    glPushMatrix();
//        glTranslated(-2.4,-1.2,-6);
//        glRotated(60,1,0,0);
//        glRotated(a,0,0,1);
//        glutWireSphere(1,slices,stacks);
//    glPopMatrix();
//
//    glPushMatrix();
//        glTranslated(0,-1.2,-6);
//        glRotated(60,1,0,0);
//        glRotated(a,0,0,1);
//        glutWireCone(1,1,slices,stacks);
//    glPopMatrix();
//
//    glPushMatrix();
//        glTranslated(2.4,-1.2,-6);
//        glRotated(60,1,0,0);
//        glRotated(a,0,0,1);
//        glutWireTorus(0.2,0.8,slices,stacks);
//    glPopMatrix();
//
//    glutSwapBuffers();
//}
//
//
//static void key(unsigned char key, int x, int y)
//{
//    switch (key)
//    {
//        case 27 :
//        case 'q':
//            exit(0);
//            break;
//
//        case '+':
//            slices++;
//            stacks++;
//            break;
//
//        case '-':
//            if (slices>3 && stacks>3)
//            {
//                slices--;
//                stacks--;
//            }
//            break;
//    }
//
//    glutPostRedisplay();
//}
//
//static void idle(void)
//{
//    glutPostRedisplay();
//}
//
//const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
//const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
//const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
//const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
//
//const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
//const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
//const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
//const GLfloat high_shininess[] = { 100.0f };
//
///* Program entry point */
//
//int main(int argc, char *argv[])
//{
//    glutInit(&argc, argv);
//    glutInitWindowSize(640,480);
//    glutInitWindowPosition(10,10);
//    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
//
//    glutCreateWindow("GLUT Shapes");
//
//    glutReshapeFunc(resize);
//    glutDisplayFunc(display);
//    glutKeyboardFunc(key);
//    glutIdleFunc(idle);
//
//    glClearColor(1,1,1,1);
//    glEnable(GL_CULL_FACE);
//    glCullFace(GL_BACK);
//
//    glEnable(GL_DEPTH_TEST);
//    glDepthFunc(GL_LESS);
//
//    glEnable(GL_LIGHT0);
//    glEnable(GL_NORMALIZE);
//    glEnable(GL_COLOR_MATERIAL);
//    glEnable(GL_LIGHTING);
//
//    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
//    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
//    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
//    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
//
//    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
//    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
//    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
//    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//
//    glutMainLoop();
//
//    return EXIT_SUCCESS;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <windows.h>
#include <GL/glut.h>
static float ypoz = 0, zpoz = 0, xpoz = 0,a = 0, b = 0,c = -10;
void coba(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
z1,float z2,float z3){
glColor3f(1,0,0); //sisi depan
glVertex3d(x1,y1,z2);
glVertex3d(x2,y2,z2);
glVertex3d(x3,y3,z2);
glVertex3d(x4,y4,z2);
glColor3f(1,0,0);//right
glVertex3d(x2,y2,z2);
glVertex3d(x2,y2,z1);
glVertex3d(x3,y3,z1);
glVertex3d(x3,y3,z2);
glColor3f(1,0,0);//back
glVertex3d(x1,y1,z1);
glVertex3d(x2,y2,z1);
glVertex3d(x3,y3,z1);
glVertex3d(x4,y4,z1);
glColor3f(1,0,0);//left
glVertex3d(x1,y1,z2);
glVertex3d(x1,y1,z1);
glVertex3d(x4,y4,z1);
glVertex3d(x4,y4,z2);
glColor3f(1,0,1);//bottom
glVertex3d(x1,y1,z2);
glVertex3d(x2,y2,z2);
glVertex3d(x2,y2,z1);
glVertex3d(x1,y1,z1);
glColor3f(1,1,0);//top
glVertex3d(x3,y3,z2);
glVertex3d(x4,y4,z2);
glVertex3d(x4,y4,z1);
glVertex3d(x3,y3,z1);
}
void cobain(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,float z1,float z2,float z3){ //atap
glColor3f(1,1,1);//kanan
glVertex3d(x3,y3,z1);
glVertex3d(x3,y3,z2);
glVertex3d(x3,y1,z3);
glColor3f(1,1,1);//kiri
glVertex3d(x4,y4,z2);
glVertex3d(x4,y4,z1);
glVertex3d(x4,y1,z3);
}
void cobaini(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,float z1,float z2,float z3){//atap
glColor3f(1,0,1);//belakang
glVertex3d(x4,y4,z1);
glVertex3d(x3,y3,z1);
glVertex3d(x3,y1,z3);
glVertex3d(x4,y1,z3);
glColor3f(1,0,1);//depan
glVertex3d(x3,y3,z2);
glVertex3d(x4,y4,z2);
glVertex3d(x4,y1,z3);
glVertex3d(x3,y1,z3);
}
void init(void)
{
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glOrtho(-12,12,-6,6,-35,35);
 glEnable(GL_DEPTH_TEST);
 glShadeModel (GL_SMOOTH);
 glMatrixMode (GL_PROJECTION);
 glLoadIdentity ();
 gluPerspective(80.0,2.2, 1.0, 20.0);
 glMatrixMode (GL_MODELVIEW);
}
void tampil(void)
{
 glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity ();
glTranslatef(a,b,c);
 glRotatef(xpoz,1,0,0);
glRotatef(ypoz,0,1,0);
 glRotatef(zpoz,0,0,1);
 glBegin(GL_QUADS);
//Rumah
coba(-8,-2,8,-2,8,2,-8,2,-5,3,0);//rumah
coba(2,-2,8,-2,8,2,2,2,-5,4,0);//kamar
coba(-8,-2,-7,-2,-7,2,-8,2,-5,4,0);//dindingpagar kiri
 coba(-8,-2,-7,-2,-7,0,-8,0,-5,5.5,0);
 coba(7,-2,8,-2,8,0,7,0,-5,5.5,0);
 cobaini(-3,5,0,0,8,2,-8,2,-5.5,4.5,0);
glColor3f(1,1,1);//plafon depan
glVertex3d(8,1.8,-3);
glVertex3d(-8,1.8,-3);
glVertex3d(-8,1.8,4.5);
glVertex3d(8,1.8,4.5);//
glVertex3d(8,1.8,4.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(-8,2,4.5);
glVertex3d(8,2,4.5);
glColor3f(1,1,1);//plafon belakang
glVertex3d(8,1.8,-5.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(8,1.8,4.5);
glVertex3d(8,1.8,-5.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(-8,2,-5.5);
glVertex3d(8,2,-5.5);

glVertex3d(4,-0.5,4.1);//cendela kamar
glVertex3d(6,-0.5,4.1);
glVertex3d(6,1,4.1);
glVertex3d(4,1,4.1);
glVertex3d(2.7,-0.5,4.1);//cendela kamar2
glVertex3d(3.8,-0.5,4.1);
glVertex3d(3.8,1,4.1);
glVertex3d(2.7,1,4.1);
glVertex3d(-2,-2,3.05);//pintu depan
glVertex3d(2,-2,3.05);
glVertex3d(2,1.3,3.05);
glVertex3d(-2,1.3,3.05);
glVertex3d(-2,-2,-5.05);//pintu belakang
glVertex3d(2,-2,-5.05);
glVertex3d(2,1,-5.05);
glVertex3d(-2,1,-5.05);
glVertex3d(-4.5,-1,3.05);//cendela rmh1 depan
glVertex3d(-2.5,-1,3.05);
glVertex3d(-2.5,1.3,3.05);
glVertex3d(-4.5,1.3,3.05);
glVertex3d(-6.5,-1,-5.05);//cendela rmh1 belakang
glVertex3d(-2.5,-1,-5.05);
glVertex3d(-2.5,1,-5.05);
glVertex3d(-6.5,1,-5.05);
glVertex3d(-7,-1,3.05);//cendela rmh2 depan
glVertex3d(-4.8,-1,3.05);
glVertex3d(-4.8,1.3,3.05);
glVertex3d(-7,1.3,3.05);
 glVertex3d(6.5,-1,-5.05);//cendela rmh2 belakang
glVertex3d(2.5,-1,-5.05);
glVertex3d(2.5,1,-5.05);
glVertex3d(6.5,1,-5.05);
 glEnd();
 glBegin(GL_TRIANGLES);
 cobain(-3,5,0,0,8,2,-8,2,-5.5,4.5,0);
 glEnd();
 glBegin(GL_LINES);
 glColor3f(0,0,0);
 glVertex3d(8,1.8,4.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(8,1.8,-5.5);
glColor3f(1,0,0);
glVertex3d(-4.5,-1,-5.05);
glVertex3d(-4.5,1,-5.05);
glVertex3d(4.5,-1,-5.05);
glVertex3d(4.5,1,-5.05);
 glEnd();
 glutSwapBuffers();
}
void kontrol(unsigned char key, int x, int y)
{
 switch (key) {

case 'x':
xpoz=xpoz+5;
 if (xpoz>360) xpoz=0;
 glutPostRedisplay();
 break;
case 'y':
 ypoz=ypoz+5;
 if (ypoz>360) ypoz=0;
 glutPostRedisplay();
 break;
 case 'z':
 zpoz = zpoz+1;
 if (zpoz>360) zpoz=0;
 glutPostRedisplay();
 break;
case 'w':
b = b + 1;
glutPostRedisplay();
break;
case 's':
b = b - 1;
glutPostRedisplay();
break;
case 'a':
a = a + 1;
glutPostRedisplay();
break;
case 'd':
a = a - 1;
glutPostRedisplay();
break;
case 'q':
c = c + 1;
glutPostRedisplay();
break;
case 'e':
c = c - 1;
glutPostRedisplay();
break;
 }
}
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
 glutInitWindowSize (500, 500);
 glutInitWindowPosition (100, 100);
 glutCreateWindow("Rumah|09_109,09_123,09_128");
 init ();
 glutDisplayFunc(tampil);
 glutKeyboardFunc(kontrol);
 glutMainLoop();
 return 0;
}

