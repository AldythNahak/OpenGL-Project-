#include <Windows.h>
#include <gl/glut.h>
#include <gl/Gl.h>

void myInit(void)
{
glClearColor(0.0,1.0,0.50,0.0);
glColor3f(0.0f, 0.0f, 0.f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glLineWidth(4.0f);
gluOrtho2D(0.0, 500.0, 0.0, 300.0);
}

void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
///////////////////////////////////////////////////////////////////////////

glColor3f(0.50, 0.50, 0.50);
glBegin(GL_POLYGON); //tembok depan
glVertex2i(100, 100);
glVertex2i(100, 200);
glVertex2i(200, 200);
glVertex2i(200, 90);
glEnd();

glColor3f(1.0, 0.50, 0.0);
glBegin(GL_POLYGON); //tembok samping
glVertex2i(200, 90);
glVertex2i(200, 200);
glVertex2i(400, 200);
glVertex2i(400, 100);
glEnd();

glColor3f(1.0f,0.0f,1.0f);
glBegin(GL_POLYGON); //pintu
glVertex2i(130, 98);
glVertex2i(130, 150);
glVertex2i(160, 148);
glVertex2i(160, 95);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POINTS); //gagang pintu
glVertex2i(135, 125);
glEnd();

glColor3f(0.58, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(100, 200); //atap depan
glVertex2i(150, 250);
glVertex2i(200, 200);
glEnd();

glColor3f(0.0, 0.128, 0.60);
glBegin(GL_POLYGON); //atap gedung

glVertex2i(200, 200);
glVertex2i(150, 250);

glVertex2i(350, 250);
glVertex2i(400, 200);
glEnd();

glColor3f(0.198, 0.104, 0.0);
glBegin(GL_POLYGON); //cerobong

glVertex2i(325,225);
glVertex2i(325, 275);

glVertex2i(360, 275);
glVertex2i(360, 225);
glEnd();

glColor3f(0.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2i(275, 125); // Jendela kiri bawah
glVertex2i(275, 150);
glVertex2i(300, 150);
glVertex2i(300, 125);
glEnd();

glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(275, 150); // Jendela kiri atas
glVertex2i(275, 175);
glVertex2i(300, 175);
glVertex2i(300, 150);
glEnd();

glColor3f(0.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex2i(300, 125); // Jendela kanan bawah
glVertex2i(300, 150);
glVertex2i(325, 150);
glVertex2i(325, 125);
glEnd();

glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(300, 150); // Jendela kanan atas
glVertex2i(300, 175);
glVertex2i(325, 175);
glVertex2i(325, 150);
glEnd();
/////////////////////////////////////////////////////////////////////////////
//PAGAR
glColor3f(0.198, 0.104, 0.0);

glBegin(GL_LINES);
glVertex2i(85,136);
glVertex2i(85,71);
glEnd();

glBegin(GL_LINES);
glVertex2i(95,136);
glVertex2i(95,71);
glEnd();

glBegin(GL_LINES);
glVertex2i(105,136);
glVertex2i(105,70);
glEnd();

glColor3f(0.150, 0.1, 0.45);
glBegin(GL_POLYGON);
glVertex2i(105,70);
glVertex2i(160,130);
glVertex2i(160,64);
glVertex2i(105,136);
glEnd();

glColor3f(0.198, 0.104, 0.0);

glBegin(GL_LINES);
glVertex2i(160,129);
glVertex2i(160,64);
glEnd();

glBegin(GL_LINES);
glVertex2i(170,129);
glVertex2i(170,64);
glEnd();

glBegin(GL_LINES);
glVertex2i(180,129);
glVertex2i(180,64);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(190, 62);
glVertex2i(190, 129);
glVertex2i(207, 129);
glVertex2i(207, 60);

glEnd();
glBegin(GL_LINES);
glVertex2i(190,129);
glVertex2i(190,62);
glEnd();

glBegin(GL_LINES);
glVertex2i(207,129);
glVertex2i(207,60);
glEnd();

glBegin(GL_LINES);
glVertex2i(217,130);
glVertex2i(217,61);
glEnd();

glBegin(GL_LINES);
glVertex2i(227,130);
glVertex2i(227,61);
glEnd();

glBegin(GL_LINES);
glVertex2i(237,130);
glVertex2i(237,62);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(260,130);
glVertex2i(260,62);
glVertex2i(325,130);
glVertex2i(325,67);
glEnd();

glBegin(GL_LINES);
glVertex2i(348,131);
glVertex2i(348,67);
glEnd();

glBegin(GL_LINES);
glVertex2i(358,131);
glVertex2i(358,67);
glEnd();

glBegin(GL_LINES);
glVertex2i(368,131);
glVertex2i(368,68);
glEnd();

glBegin(GL_LINES);
glVertex2i(378,132);
glVertex2i(378,69);
glEnd();

glBegin(GL_LINES);
glVertex2i(388,132);
glVertex2i(388,70);
glEnd();

glBegin(GL_LINES);
glVertex2i(398,133);
glVertex2i(398,70);
glEnd();

glBegin(GL_LINES);
glVertex2i(408,133);
glVertex2i(408,70);
glEnd();

glBegin(GL_LINES);
glVertex2i(418,133);
glVertex2i(418,71);
glEnd();

////////////////////////////////////////////////////////////////////
glBegin(GL_LINES); //patokan samping bawah
glVertex2i(200,60);
glVertex2i(430,73);
glEnd();

glBegin(GL_LINES); //patokan samping atas
glVertex2i(200,128);
glVertex2i(430,133);
glEnd();

glBegin(GL_LINES); //patokan depan atas 1
glVertex2i(70,139);
glVertex2i(105,136);
glEnd();

glBegin(GL_LINES); //patokan depan atas 2
glVertex2i(200,128);
glVertex2i(160,130);
glEnd();

glBegin(GL_LINES); //patokan depan bawah 2
glVertex2i(200,60);
glVertex2i(133,66);
glEnd();

glBegin(GL_LINES); //patokan depan bawah 1
glVertex2i(70,74);
glVertex2i(131,67);
glEnd();

glColor3f(0.181f,0.148f,0.32f);
glBegin(GL_LINES); //garis pintu pagar
glVertex2i(132,100);
glVertex2i(132,66);
glEnd();

glColor3f(0.0f,0.128f,0.0f);
glBegin(GL_POLYGON); //rumput samping
glVertex2i(430,73);
glVertex2i(430,150);
glVertex2i(640,165);
glVertex2i(640,85);
glEnd();

glColor3f(0.0f,0.128f,0.0f);
glBegin(GL_POLYGON); //rumput depan
glVertex2i(70,73);
glVertex2i(70,150);
glVertex2i(0,161);
glVertex2i(0,83);
glEnd();

/////////////////////////////////////////////////////////

glColor3f(0.0f,0.0f,.0f);
glBegin(GL_LINE_LOOP);
glVertex2i(100, 100); // Garis tembok depan
glVertex2i(100, 200);
glVertex2i(200, 200);
glVertex2i(200, 90);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(130, 98); // garis pintu
glVertex2i(130, 150);
glVertex2i(160, 148);
glVertex2i(160, 95);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(200, 90); // garis tembok belakang
glVertex2i(200, 200);
glVertex2i(400, 200);
glVertex2i(400, 100);
glEnd();

glBegin(GL_LINE_LOOP);
glVertex2i(100, 200); // garis Atap depan
glVertex2i(150, 250);
glVertex2i(200, 200);
glEnd();

//garis atap belakang
glBegin(GL_LINES);
glVertex2i(325,250);
glVertex2i(150,250);
glEnd();
glBegin(GL_LINES);
glVertex2i(360,241);
glVertex2i(400,200);
glEnd();

glBegin(GL_LINE_STRIP);
glVertex2i(325,225);// garis cerobong
glVertex2i(325, 275);

glVertex2i(360, 275);
glVertex2i(360, 225);
glEnd();
//////////////////////////////////////////////////////////////////////
//garis jendela bawah
glColor3f(0.0f,0.0f,0.0f);

glBegin(GL_LINE_LOOP);
glVertex2i(275, 125); // Jendela kiri bawah
glVertex2i(275, 150);
glVertex2i(300, 150);
glVertex2i(300, 125);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(275, 150); // Jendela kiri atas
glVertex2i(275, 175);
glVertex2i(300, 175);
glVertex2i(300, 150);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(300, 125); // Jendela kanan bawah
glVertex2i(300, 150);
glVertex2i(325, 150);
glVertex2i(325, 125);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2i(300, 150); // Jendela kanan atas
glVertex2i(300, 175);
glVertex2i(325, 175);
glVertex2i(325, 150);
glEnd();
glFlush();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(100, 150);

glutCreateWindow("HOUSE");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
}
