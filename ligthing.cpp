
//Nama : Kalep
//NIM : 672014194
#include <gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void jendela(float r,float g,float b);
void lantai1(float r,float g,float b);
void lantai2(float r,float g,float b);
void atap();
void idle();
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);
void pagar(int panjang,float r,float g,float b);
void pintu(float pr,float pg,float pb,float tr,float tg,float tb);
void kursisofapanjang(float r,float g,float b);
void mejakecil(float r,float g,float b);
void lemari(float r,float g,float b); void kursi(float r,float g,float b);
void tangga(); void entertaiment(); void mejadapur(); void kompor(); void perabotlt1(); void mejamakan(float r,float g,float b);
void bakmandi(); void closet(); void tempattidur(); void mejakerja(); void perabotlt2();

int dinding2=0,dinding1=0,ataprumah=0,lantaibawah=0,lantaiatas=0;
bool mouseDown = false;
float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;

float xpos = 0.0f;
float ypos = 0.0f;
float zpos = 0.0f;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TUGAS AKHIR - GRAFIKA KOMPUTER 2015");
    init();	
	glEnable (GL_BLEND);
		glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glutDisplayFunc(tampil);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);  	
	glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);    
	glEnable(GL_DEPTH_TEST);
		//pencahayaan
		glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_TRUE);
		glEnable(GL_LIGHTING);			
		glEnable(GL_LIGHT0);
		//set cahaya
		GLfloat qaAmbientLight[] = {0.2,0.2,0.2,1.0};
		GLfloat qaDiffuseLight[] = {1,1,1,1};
		GLfloat qaSpecularLight[] = {1,1,1,1};
		glLightfv(GL_LIGHT0, GL_AMBIENT,qaAmbientLight);
		glLightfv(GL_LIGHT0,GL_DIFFUSE,qaDiffuseLight);
		glLightfv(GL_LIGHT0,GL_SPECULAR,qaSpecularLight);
		//posisi cahaya
		GLfloat posisilampu[] = {0,160,200,1};
		glLightfv(GL_LIGHT0,GL_POSITION,posisilampu);
	glEnable(GL_COLOR_MATERIAL);
	glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_MODELVIEW);
    glOrtho(-1,1,-1,1,-1,1);
	glPointSize(2.0);    
    glLineWidth(2.0);

}


void tampil(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();	
	glTranslatef(xpos, ypos, zpos);	 
	glRotatef(xrot+20, 1.0f, 0.0f, 0.0f);
	glRotatef(yrot-20, 0.0f, 1.0f, 0.0f);	
	
	glColor3f(1,0,0);
		//tanah
		glPushMatrix();	
			glColor3f(0.4,0.5,0.3);
			glScalef(100,1,100);
			glTranslatef(0,0,0);
			glutSolidCube(1);
		glPopMatrix();
		//dasar
		glPushMatrix();	
			glColor3f(0.7,0.6,0.5);
			glScalef(60,1,40);
			glTranslatef(0,0.2,0);
			glutSolidCube(1);
		glPopMatrix();
		for(int a=-30;a<=30;a+=2){
			glColor3f(1,1,1);
			glBegin(GL_LINES);				
				glVertex3f(a,0.8,20);
				glVertex3f(a,0.8,-20);
			glEnd();
		}
		for(int a=-20;a<=20;a+=2){
			glColor3f(1,1,1);
			glBegin(GL_LINES);				
				glVertex3f(-30,0.8,a);
				glVertex3f(30,0.8,a);
			glEnd();
		}
		if(lantaibawah==0){
			perabotlt1();	
		}
		if(lantaiatas==0){
			perabotlt2();
		}		
		if(ataprumah==0){
			atap();
		}
		//lantai2
		if(dinding2==0){
			lantai2(1,0.8,0.6);			
		}
		//lantai1
		if(dinding1==0){
			lantai1(1,0.8,0.6);
		}		
    glutSwapBuffers();

}
void atap(){
	//atap kanan
	glPushMatrix();	
		glColor3f(1,0.5,0.5);				
		glTranslatef(22.5,30,0);
		glRotatef(37,0,0,1);				
		glScalef(1,40,50);
		glutSolidCube(1);				
	glPopMatrix();
	//tengah
	glPushMatrix();	
		glColor3f(1,0.5,0.5);				
		glTranslatef(-10,43.5,0);
		glRotatef(8,0,0,1);
		glScalef(60,1,50);
		glutSolidCube(1);				
	glPopMatrix();
	glBegin(GL_QUADS);
		glColor3f(0.5,0.5,0.5);
		glVertex3f(-30,40,20);
		glVertex3f(15,40,20);
		glVertex3f(15,40,-20);
		glVertex3f(-30,40,-20);
	glEnd();
	glColor3f(1,0.8,0.6);
	glBegin(GL_POLYGON);
		glVertex3f(-30,40,20);
		glVertex3f(15,40,20);
		glVertex3f(10,46,20);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(-30,40,-20);
		glVertex3f(15,40,-20);
		glVertex3f(10,46,-20);
	glEnd();
}

void pintu(float pr,float pg,float pb,float tr,float tg,float tb){
	//pintu
	glPushMatrix();
		glColor3f(pr,pg,pb);
		glScalef(5,10,0.5);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
		glColor3f(tr,tg,tb);
		glScalef(5,10,1);
		glTranslatef(0,1,0);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
		glColor3f(1,1,1);
		glScalef(0.25,1,1);
		glTranslatef(8,0,0);
		glutSolidCube(1);
	glPopMatrix();
}
void pagar(int panjang,float r,float g,float b){
	glColor3f(r,g,b);
	panjang=panjang*2;		
	for(int y=0;y<=panjang;y++){
		//atas
		glPushMatrix();	
		glScalef(0.5,0.5,0.5);
		glTranslatef(0+y,5,0);
		glutSolidCube(1);
		glPopMatrix();
	}
	for(int x=1; x <= panjang; x+=2){
		glPushMatrix();	
		glScalef(0.5,5,0.5);
		glTranslatef(0+x,0,0);
		glutSolidCube(1);
		glPopMatrix();		
	}
}
void tangga(){
	for(int x=0;x<20;x++){		
			glPushMatrix();
			glColor3f(0.5,0.4,0.3);
			glTranslatef(-14+x,20-x,-17.5);
			glScalef(2.5,1,4);
			glutSolidCube(1);
			glPopMatrix();		
	}
	
}
void kursisofapanjang(float r,float g,float b){
	glColor3f(r,g,b);
	//tengah
	glPushMatrix();
		glScalef(10,2,6);
		glTranslatef(0,1,0);
		glutSolidCube(0.5);
	glPopMatrix();
	//kaki kiri
	glPushMatrix();
		glTranslatef(-3,2.5,0);
		glScalef(2,8,8);		
		glutSolidCube(0.5);
	glPopMatrix();
	//kaki kanan
	glPushMatrix();
		glTranslatef(3,2.5,0);
		glScalef(2,8,8);		
		glutSolidCube(0.5);
	glPopMatrix();
	//belakang
	glPushMatrix();
		glTranslatef(0,3.5,-1.25);
		glRotatef(-15,1,0,0);
		glScalef(10,6,2);		
		glutSolidCube(0.5);
	glPopMatrix();
}
void mejakecil(float r,float g,float b){
	glColor3f(r,g,b);
	//meja
	glPushMatrix();
		glScalef(10,1,8);
		glTranslatef(0,2,0);
		glutSolidCube(0.5);
	glPopMatrix();
	//kaki meja
	glPushMatrix();
		glScalef(4,1,2);
		glTranslatef(0,1.5,0);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glScalef(6,1,4);
		glTranslatef(0,1,0);
		glutSolidCube(0.5);
	glPopMatrix();
}
void lemari(float r,float g,float b){
	glColor3f(r,g,b);
	glPushMatrix();
		glTranslatef(0,5,0);	
		glScalef(8,20,6);		
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,5.2,1.5);	
		glScalef(6,16,1);		
		glutSolidCube(0.5);
	glPopMatrix();
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex3f(0,1.25,1.75);
		glVertex3f(0,9,1.75);
	glEnd();
	glColor3f(1,1,1);
	glPushMatrix();
		glTranslatef(0,5,1.6);	
		glScalef(1,2,1);		
		glutSolidCube(0.5);
	glPopMatrix();
}
void mejamakan(float r,float g,float b){	
	glColor3f(r,g,b);
	glPushMatrix();
		glTranslatef(0,3,0);
		glScalef(30,1,12);
		glutSolidCube(0.25);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,2.75,0);
		glScalef(26,2,8);
		glutSolidCube(0.25);
	glPopMatrix();
	//kaki
	glPushMatrix();
		glTranslatef(-2,1.8,0);
		glScalef(2,8,2);
		glutSolidCube(0.25);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(2,1.8,0);
		glScalef(2,8,2);
		glutSolidCube(0.25);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-2,0.8,0);
		glScalef(4,1,4);
		glutSolidCube(0.25);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(2,0.8,0);
		glScalef(4,1,4);
		glutSolidCube(0.25);
	glPopMatrix();
}
void kursi(float r,float g, float b){
	glColor3f(r,g,b);	
		glPushMatrix();
			glTranslatef(0,2,0);
			glScalef(6,1,6);
			glutSolidCube(0.25);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0,2.5,0.5);
			glRotatef(25,1,0,0);
			glScalef(6,16,1);
			glutSolidCube(0.25);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0,1.3,0);
			glRotatef(-30,1,0,0);
			glScalef(6,6,1);
			glutSolidCube(0.25);
		glPopMatrix();
}
void entertaiment(){
	//meja
		glColor3f(0.7,0.5,0.4);
		//bawah
		glPushMatrix();
			glTranslatef(0,0.75,0);	
			glScalef(20,1,6);
			glutSolidCube(0.25);
		glPopMatrix();
		//tengah
		glPushMatrix();
			glTranslatef(0,2,0);	
			glScalef(20,1,6);
			glutSolidCube(0.25);
		glPopMatrix();
		//atas
		glPushMatrix();
			glTranslatef(0,3.5,0);	
			glScalef(20,1,6);
			glutSolidCube(0.25);
		glPopMatrix();
		//kaki kiri
		glPushMatrix();
			glTranslatef(-2,2,0);	
			glScalef(1,6,3);
			glutSolidCube(0.5);
		glPopMatrix();
		//kaki kanan
		glPushMatrix();
			glTranslatef(2,2,0);	
			glScalef(1,6,3);
			glutSolidCube(0.5);
		glPopMatrix();
	//console,reciever
		glColor3f(0.2,0.2,0.2);
		glPushMatrix();
			glTranslatef(0,1,0);	
			glScalef(6,1,2);
			glutSolidCube(0.5);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(0,1.5,0);	
			glScalef(4,1,2);
			glutSolidCube(0.5);
		glPopMatrix();

		glColor3f(0.5,0.5,0.5);
		glPushMatrix();
			glTranslatef(-1,2.25,0);	
			glScalef(3,1,2);
			glutSolidCube(0.5);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(1,2.25,0);	
			glScalef(3,1,2);
			glutSolidCube(0.5);
		glPopMatrix();
	//tv/monitor
		glColor3f(0.1,0.1,0.1);
		glPushMatrix();
			glTranslatef(0,5.85,0);	
			glScalef(10,8,0.5);
			glutSolidCube(0.5);
		glPopMatrix();		
		glPushMatrix();
			glTranslatef(-1.5,3.75,0);	
			glRotatef(-15,0,1,0);
			glScalef(0.75,0.5,2);
			glutSolidCube(0.5);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(1.5,3.75,0);	
			glRotatef(15,0,1,0);
			glScalef(0.75,0.5,2);
			glutSolidCube(0.5);
		glPopMatrix();
	//audio
		glPushMatrix();
			glTranslatef(3.5,2.5,0);				
			glScalef(4,12,3);
			glutSolidCube(0.5);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-3.5,2.5,0);				
			glScalef(4,12,3);
			glutSolidCube(0.5);
		glPopMatrix();
}
void mejadapur(){
	glColor3f(1,1,1);
	//teko
	glPushMatrix();
		glTranslatef(0,5.85,0);	
		glutSolidTeapot(0.5);
	glPopMatrix();
	//meja
	glColor3f(0.5,0.3,0.2);
	glPushMatrix();	
		glTranslatef(0,3,0);
		glScalef(16,10,5);
		glutSolidCube(0.5);
	glPopMatrix();	
	glPushMatrix();
		glTranslatef(-2.5,3,1.4);
		glScalef(8,14,1);
		glutSolidCube(0.25);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,3,1.4);
		glScalef(8,14,1);
		glutSolidCube(0.25);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(2.5,3,1.4);
		glScalef(8,14,1);
		glutSolidCube(0.25);
	glPopMatrix();
	glColor3f(1,1,1);
	glPushMatrix();
		glTranslatef(-2,3,1.45);
		glScalef(1,3,1);
		glutSolidCube(0.25);	
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0.5,3,1.45);
		glScalef(1,3,1);
		glutSolidCube(0.25);	
	glPopMatrix();
	glPushMatrix();
		glTranslatef(3,3,1.45);
		glScalef(1,3,1);
		glutSolidCube(0.25);	
	glPopMatrix();
	//lemari atas	
	glColor3f(0.5,0.3,0.2);
	glPushMatrix();
		glTranslatef(2.5,10,-0.2);
		glScalef(8,10,4);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(2.5,10,0.75);
		glScalef(12,16,1);
		glutSolidCube(0.25);
	glPopMatrix();
	glColor3f(1,1,1);
	glPushMatrix();
		glTranslatef(2.5,10,0.95);
		glScalef(2,3,1);
		glutSolidCube(0.25);	
	glPopMatrix();
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex3f(2.5,12,0.9);
		glVertex3f(2.5,8,0.9);
	glEnd();
}
void kompor(){
	glColor3f(0.7,0.7,0.7);
	glPushMatrix();
		glTranslatef(0,3,0);	
		glScalef(8,10,8);
		glutSolidCube(0.5);
	glPopMatrix();
	//kompor
	glPushMatrix();
		glTranslatef(-1,5.5,-1);	
		glScalef(2,0.25,2);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-1,5.5,0.5);	
		glScalef(2,0.25,2);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(1,5.5,-1);	
		glScalef(2,0.25,2);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(1,5.5,0.5);	
		glScalef(2,0.25,2);
		glutSolidCube(0.5);
	glPopMatrix();
	//panel
	glPushMatrix();
		glTranslatef(0,5,2);	
		glScalef(6,1,0.25);
		glutSolidCube(0.5);
	glPopMatrix();
	glColor3f(0,0.4,0.6);
	glPushMatrix();
		glTranslatef(0,2.5,2);	
		glScalef(3,3,0.25);
		glutSolidCube(0.5);
	glPopMatrix();
}
void bakmandi(){
	glColor3f(0.8,0.8,0.8);
	glPushMatrix();
		glTranslatef(0,1,0);
		glScalef(20,2,10);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,3,-2);
		glScalef(20,6,2);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,3,2);
		glScalef(20,6,2);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-4.5,3,0);
		glScalef(2,6,10);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(4.5,3,0);
		glScalef(2,6,10);
		glutSolidCube(0.5);
	glPopMatrix();
	//kranair
	glColor3f(0.5,0.5,0.5);
	glPushMatrix();
		glTranslatef(-4,4.65,0);
		glScalef(2,0.5,0.5);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-4.25,4.75,0);		
		glutSolidSphere(0.25,32,32);
	glPopMatrix();
	glColor3f(0.8,0.2,0.2);
	glPushMatrix();
		glTranslatef(-4.25,4.65,-0.5);		
		glutSolidSphere(0.25,32,32);
	glPopMatrix();
	glColor3f(0.2,0.2,0.8);
	glPushMatrix();
		glTranslatef(-4.25,4.65,0.35);		
		glutSolidSphere(0.25,32,32);
	glPopMatrix();
	//air
	glColor4f(0.2,0.2,0.8,0.5);
	glPushMatrix();
		glTranslatef(0,3,0);
		glScalef(16,6,8);
		glutSolidCube(0.5);
	glPopMatrix();

}
void closet(){
	glColor3f(0.5,0.5,0.5);
	glPushMatrix();
	glTranslatef(0,4,-0.5);
		glScalef(1.5,2,1);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,3,0.5);
		glScalef(1.5,0.5,2.5);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0,1.75,0);
		glScalef(1,2,1);
		glutSolidCube(1);
	glPopMatrix();
}
void tempattidur(){
	GLUquadricObj *obj = gluNewQuadric();
		//kasur
		glPushMatrix();
			glTranslatef(0,21,0);
			glScalef(18,2,28);
			glutSolidCube(0.5);
		glPopMatrix();
		glColor3f(0.6,0.6,0.2);
		glPushMatrix();
			glTranslatef(0,23,0);
			glScalef(20,6,30);
			glutSolidCube(0.5);
		glPopMatrix();
		//bantal		
		glPushMatrix();
		glTranslatef(-3.25,24.5,-6);
		glRotatef(90,0,1,0);
		glScalef(1,1,1);
			glPushMatrix();
			glColor3f(0.8,0.8,0.4);
			gluCylinder(obj,1,1,2,50,50);
			glTranslatef(0.0,0.0,0);
			glutSolidSphere(1,50,50);
			glTranslatef(0.0,0.0,2);
			glutSolidSphere(1,50,50);
			glPopMatrix();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(1.5,24.5,-6);
		glRotatef(90,0,1,0);
		glScalef(1,1,1);
			glPushMatrix();
			glColor3f(0.8,0.8,0.4);
			gluCylinder(obj,1,1,2,50,50);
			glTranslatef(0.0,0.0,0);
			glutSolidSphere(1,50,50);
			glTranslatef(0.0,0.0,2);
			glutSolidSphere(1,50,50);
			glPopMatrix();		
		glPopMatrix();
		//guling
		glPushMatrix();
		glTranslatef(0,25,-4);
		//glRotatef(90,0,1,0);
		glScalef(1,1,1);
			glPushMatrix();
				glColor3f(0.03,0.05,0.08);
				gluCylinder(obj,1,1,8,50,50);
				glTranslatef(0.0,0.0,0);
				glutSolidSphere(1,50,50);
				glTranslatef(0.0,0.0,8.0);
				glutSolidSphere(1,50,50);
			glPopMatrix();
		glPopMatrix();
		
}
void mejakerja(){
	glColor3f(0.5,0.3,0.2);
	glPushMatrix();
		glTranslatef(-4,23,0);
		glScalef(1,10,8);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(4,23,0);
		glScalef(1,10,8);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,25.5,0);
		glScalef(17,1,8);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(3,24,0);
		glScalef(6,6,8);
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-3,24,0);
		glScalef(6,6,8);
		glutSolidCube(0.5);
	glPopMatrix();
	//kursi
	glColor3f(0,0,0);
	glPushMatrix();
		glTranslatef(0,25.5,4);
		glRotatef(10,1,0,0);
		glScalef(5,10,1);		
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,23,2.5);		
		glScalef(5,1,5);		
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,22.5,2.5);		
		glScalef(4,1,4);		
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,20.6,2.5);		
		glScalef(3,0.5,3);		
		glutSolidCube(0.5);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,21.5,2.5);		
		glScalef(0.5,1,0.5);		
		glutSolidOctahedron();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(0,22,2.5);		
		glScalef(2,2,2);		
		glutSolidCube(0.5);
	glPopMatrix();
}
void perabotlt2(){
	//mejakerja
	glPushMatrix();
		glTranslatef(-24,0,14);
		mejakerja();
	glPopMatrix();
	//dasar2
	glPushMatrix();	
		glColor3f(0.7,0.6,0.5);
		glScalef(30,1,35);
		glTranslatef(0,20,0.06);
		glutSolidCube(1);
	glPopMatrix();	
	glPushMatrix();	
		glScalef(15,1,40);
		glTranslatef(-1.5,20,0);
		glutSolidCube(1);				
	glPopMatrix();
	//dasar dpn
	glPushMatrix();	
		glScalef(30,1,10);
		glTranslatef(0,20,2.4);
		glutSolidCube(1);				
	glPopMatrix();
	//tempattidur
	glPushMatrix();
		glTranslatef(-7.25,0,-7);
		tempattidur();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(7.25,0,-7);
		tempattidur();
	glPopMatrix();
	//lemari
	glPushMatrix();
		glTranslatef(-10.5,21,8.5);
		glScalef(2,1,1);
		glRotatef(180,0,1,0);
		lemari(0.5,0.2,0.1);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(10.5,21,8.5);
		glScalef(2,1,1);
		glRotatef(180,0,1,0);
		lemari(0.5,0.2,0.1);
	glPopMatrix();
}
void perabotlt1(){
	//garasi				
	glColor3f(0.8,0.2,0.2);
	glPushMatrix();
		glTranslatef(23,12,-9.5);
		glScalef(10,10,0.5);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
		glTranslatef(23,2.5,-7);
		glScalef(10,5,5);
		glutSolidCube(1);
	glPopMatrix();
	//kamarmandi
	glPushMatrix();
		glTranslatef(20,0,-12.5);
		bakmandi();
	glPopMatrix();
	glPushMatrix();
		glTranslatef(27.5,0,-12.5);
		glRotatef(180,0,1,0);
		closet();
	glPopMatrix();
	//ruang kiri
		//kompor
		glPushMatrix();
			glTranslatef(-27,0,-17);
			kompor();
		glPopMatrix();
		//mejadapur
		glPushMatrix();
			glTranslatef(-20,0,-18.5);
			mejadapur();
		glPopMatrix();
		//entertainment
		glPushMatrix();
			glTranslatef(-28,0,12);
			glRotatef(90,0,1,0);
			entertaiment();
		glPopMatrix();		
	//sofa
		glPushMatrix();
			glTranslatef(-18,0,8);
			glRotatef(-90,0,1,0);
			kursisofapanjang(0.2,0.4,0.7);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-18,0,15);
			glRotatef(-90,0,1,0);
			kursisofapanjang(0.2,0.4,0.7);
		glPopMatrix();
	//ruang makan
		//lemari
		glPushMatrix();
			glTranslatef(-12,0,-17);
			lemari(0.8,0.8,0.9);
		glPopMatrix();
		//meja makan
		glPushMatrix();		
			glTranslatef(-10,0,-6);
			glRotatef(90,0,1,0);
			mejamakan(0.5,0.4,0.3);	
			//kursi
			glPushMatrix();
				glTranslatef(-3,0,1);
				kursi(0.5,0.4,0.3);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0,0,1);
				kursi(0.5,0.4,0.3);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(3,0,1);
				kursi(0.5,0.4,0.3);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(-3,0,-1);
				glRotatef(180,0,1,0);
				kursi(0.5,0.4,0.3);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(0,0,-1);
				glRotatef(180,0,1,0);
				kursi(0.5,0.4,0.3);
			glPopMatrix();
			glPushMatrix();
				glTranslatef(3,0,-1);
				glRotatef(180,0,1,0);
				kursi(0.5,0.4,0.3);
			glPopMatrix();
		glPopMatrix();
		
	//ruang tamu
		//meja
		glPushMatrix();
			glTranslatef(10,0,10);
			mejakecil(0.7,0.5,0.4);
		glPopMatrix();
		//sofa
		glPushMatrix();
			glTranslatef(10,0,3);
			kursisofapanjang(0.2,0.7,0.4);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(10,0,17);
			glRotatef(180,0,1,0);
			kursisofapanjang(0.2,0.7,0.4);
		glPopMatrix();
		//meja
		glPushMatrix();
			glTranslatef(-10,0,10);
			mejakecil(0.7,0.5,0.4);
		glPopMatrix();
		//sofa
		glPushMatrix();
			glTranslatef(-10,0,3);
			kursisofapanjang(0.2,0.7,0.4);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-10,0,17);
			glRotatef(180,0,1,0);
			kursisofapanjang(0.2,0.7,0.4);
		glPopMatrix();
}
void lantai1(float r, float g, float b){	
		//tangga
		tangga();
		glColor3f(r,g,b);
		//belakang
			//jendela
		glPushMatrix();
			glTranslatef(0,0,-40);
			jendela(r,g,b);
		glPopMatrix();
		glPushMatrix();
			glTranslatef(30,0,-40);
			jendela(r,g,b);
		glPopMatrix();
			//tembok
		glPushMatrix();	
			glColor3f(r,g,b);
			glScalef(15,20,1);
			glTranslatef(-0.5,0.5,-20);
			glutSolidCube(1);
		glPopMatrix();	
			//tembok
		glPushMatrix();				
			glScalef(15,20,1);
			glTranslatef(1.5,0.5,-20);
			glutSolidCube(1);
		glPopMatrix();	
		//tengah
		glPushMatrix();				
			glScalef(10,20,1);
			glTranslatef(-1,0.5,0);
			glutSolidCube(1);
		glPopMatrix();
		glPushMatrix();				
			glScalef(10,20,1);
			glTranslatef(1,0.5,0);
			glutSolidCube(1);
		glPopMatrix();
		glPushMatrix();				
			glScalef(10,5,1);
			glTranslatef(0,3.5,0);
			glutSolidCube(1);
		glPopMatrix();
		//belakang1
		glPushMatrix();				
			glScalef(15,20,1);
			glTranslatef(1.5,0.5,-10);
			glutSolidCube(1);
		glPopMatrix();
		//kiri
			//jendela
		glPushMatrix();
			glRotatef(90,0,1,0);
			glTranslatef(20,0,-50);
			jendela(r,g,b);
		glPopMatrix();
			//tembok1
		glPushMatrix();				
			glScalef(1,20,10.5);
			glTranslatef(-30,0.5,1.45);
			glutSolidCube(1);
		glPopMatrix();
			//tembok2
		glPushMatrix();	
			glScalef(1,20,20.5);
			glTranslatef(-30,0.5,-0.5);
			glutSolidCube(1);
		glPopMatrix();
		//kiri tengah
		glPushMatrix();				
			glScalef(1,5,10);
			glTranslatef(-15,3.5,-1);
			glutSolidCube(1);
		glPopMatrix();
		glPushMatrix();	
			glColor3f(r,g,b);
			glScalef(1,20,5);
			glTranslatef(-15,0.5,-3.5);
			glutSolidCube(1);
		glPopMatrix();
		glPushMatrix();				
			glScalef(1,20,25);
			glTranslatef(-15,0.5,0.3);
			glutSolidCube(1);
		glPopMatrix();		
		//kanan
		glPushMatrix();				
			glScalef(1,20,41);
			glTranslatef(30,0.5,0);
			glutSolidCube(1);
		glPopMatrix();
		//kanan tengah
			//tembok dpn
		glPushMatrix();				
			glScalef(1,20,20);
			glTranslatef(15,0.5,0.5);
			glutSolidCube(1);
		glPopMatrix();
			//tembok tengah
		glPushMatrix();				
			glScalef(1,10,11);
			glTranslatef(15,0.5,-0.9);
			glutSolidCube(1);
		glPopMatrix();
			//tembok atas		
		glPushMatrix();				
			glScalef(1,10,20);
			glTranslatef(15,1.5,-0.5);
			glutSolidCube(1);
		glPopMatrix();			
		//depan
			//depan kiri
		jendela(r,g,b);						
			//tembok atas
		glPushMatrix();				
			glScalef(30,5,1);
			glTranslatef(0,3.5,20);
			glutSolidCube(1);
		glPopMatrix();
			//tembok kiri
		glPushMatrix();				
			glScalef(5,15,1);
			glTranslatef(-1.2,0.5,20);
			glutSolidCube(1);
		glPopMatrix();				
			//tembok kanan
		glPushMatrix();				
			glScalef(5,15,1);
			glTranslatef(1.2,0.5,20);
			glutSolidCube(1);
		glPopMatrix();			
			//jendelakiri
		glPushMatrix();				
			glScalef(0.5,0.75,1);
			glTranslatef(-1,0,0);
			jendela(r,g,b);
		glPopMatrix();
			//jendela kanan
		glPushMatrix();				
			glScalef(0.5,0.75,1);
			glTranslatef(45,0,0);
			jendela(r,g,b);
		glPopMatrix();
			//pintu depan
		//pintu kiri
		glPushMatrix();
			glTranslatef(-1,5,20);
			pintu(0.5,0.3,0.2,r,g,b);
		glPopMatrix();
		//pintu kanan
		glPushMatrix();
			glTranslatef(1,5,20);
			glRotatef(180,0,1,0);
			pintu(0.5,0.3,0.2,r,g,b);
		glPopMatrix();
		//pintu1
		glPushMatrix();							
			glTranslatef(15,5,-2);
			glRotatef(90,0,1,0);
			pintu(0.5,0.3,0.2,0.5,0.5,0.5);
		glPopMatrix();
		//pintu2
		glPushMatrix();							
			glTranslatef(15,5,-18);
			glRotatef(-90,0,1,0);
			pintu(0.5,0.3,0.2,0.5,0.5,0.5);
		glPopMatrix();
		//garasi
			glColor3f(r,g,b);
			//atas
		glPushMatrix();			
			glScalef(15,10,1);
			glTranslatef(1.5,1.5,20);
			glutSolidCube(1);
		glPopMatrix();
			//kiri
		glPushMatrix();				
			glScalef(2,10,1);
			glTranslatef(8,0.5,20);
			glutSolidCube(1);
		glPopMatrix();
			//kanan
		glPushMatrix();				
			glScalef(2,10,1);
			glTranslatef(14.5,0.5,20);
			glutSolidCube(1);
		glPopMatrix();
			//pintu garasi
		glPushMatrix();	
			glColor3f(0.7,0.7,0.7);
			glScalef(11,10,1);
			glTranslatef(2.05,0.5,20);
			glutSolidCube(1);
		glPopMatrix();			
			
			
		
}
void jendela(float r,float g,float b){
	float alf=0.5;
	//kaca
		glPushMatrix();	
		glColor4f(0,0.5,1,alf);			
			glTranslatef(-22.5,10,20);	
			glScalef(5,10,0.5);
			glutSolidCube(1);
		glPopMatrix();
	//bawah
		glPushMatrix();	
			glColor3f(r,g,b);
			glScalef(15,5,1);
			glTranslatef(-1.5,0.5,20);
			glutSolidCube(1);
		glPopMatrix();
		//kanan
		glPushMatrix();	
			
			glScalef(5,10,1);
			glTranslatef(-3.5,1,20);
			glutSolidCube(1);
		glPopMatrix();
		//kiri
		glPushMatrix();	
			
			glScalef(5,10,1);
			glTranslatef(-5.5,1,20);
			glutSolidCube(1);
		glPopMatrix();
		//atas
		glPushMatrix();	
			
			glScalef(15,5,1);
			glTranslatef(-1.5,3.5,20);
			glutSolidCube(1);
		glPopMatrix();
		
}
void lantai2(float r,float g,float b){
	
	glColor3f(r,g,b);
	glBegin(GL_POLYGON);
		glVertex3f(15,20,20.5);
		glVertex3f(15,40,20.5);
		glVertex3f(30,20,20.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(15,20,-20.5);
		glVertex3f(15,40,-20.5);
		glVertex3f(30,20,-20.5);
	glEnd();	
	//tembok belakang
	glPushMatrix();	
		glScalef(30,20,1);
		glTranslatef(-0.01,1.5,-20);
		glutSolidCube(1);
	glPopMatrix();
	//jendela
	glPushMatrix();			
		glTranslatef(0,20,-40);
		jendela(r,g,b);
	glPopMatrix();
	//ruang tidur
		//tembok belakang
		glPushMatrix();	
			glScalef(30,20,1);
			glTranslatef(-0.01,1.5,-15);
			glutSolidCube(1);
		glPopMatrix();
		//tembok depan
		//kiri
		glPushMatrix();	
			glScalef(10,20,1);
			glTranslatef(-1,1.5,10.5);
			glutSolidCube(1);
		glPopMatrix();
		//kanan
		glPushMatrix();	
			glScalef(10,20,1);
			glTranslatef(1,1.5,10.5);
			glutSolidCube(1);
		glPopMatrix();
		//pintu kiri
		glPushMatrix();
			glTranslatef(-3,25,10.5);
			pintu(0.5,0.3,0.2,r,g,b);
		glPopMatrix();
		//pintu kanan
		glPushMatrix();
			glTranslatef(3,25,10.5);
			glRotatef(180,0,1,0);
			pintu(0.5,0.3,0.2,r,g,b);
		glPopMatrix();	
		//tembok kiri
		glPushMatrix();	
			glColor3f(r,g,b);
			glScalef(1,20,26);
			glTranslatef(-15,1.5,-0.095);
			glutSolidCube(1);
		glPopMatrix();
		//sekat
		glPushMatrix();	
			glScalef(1,20,26);
			glTranslatef(0,1.5,-0.075);
			glutSolidCube(1);
		glPopMatrix();
	//tembok depan
	glPushMatrix();
		glTranslatef(0,20,0);
		//tembok depan kiri
		glPushMatrix();				
			glScalef(15,20,1);
			glTranslatef(-1.5,0.5,20);
			glutSolidCube(1);
		glPopMatrix();
			//tembok atas
		glPushMatrix();				
			glScalef(30,5,1);
			glTranslatef(0,3.5,20);
			glutSolidCube(1);
		glPopMatrix();
			//tembok kiri
		glPushMatrix();				
			glScalef(5,15,1);
			glTranslatef(-1.2,0.5,20);
			glutSolidCube(1);
		glPopMatrix();				
			//tembok kanan
		glPushMatrix();				
			glScalef(5,15,1);
			glTranslatef(1.2,0.5,20);
			glutSolidCube(1);
		glPopMatrix();			
			//jendelakiri
		glPushMatrix();				
			glScalef(0.5,0.75,1);
			glTranslatef(-1,0,0);
			jendela(r,g,b);
		glPopMatrix();
			//jendela kanan
		glPushMatrix();				
			glScalef(0.5,0.75,1);
			glTranslatef(45,0,0);
			jendela(r,g,b);
		glPopMatrix();
			//pintu depan
		//pintu kiri
		glPushMatrix();
			glTranslatef(-1,5,20);
			pintu(0.5,0.3,0.2,r,g,b);
		glPopMatrix();
		//pintu kanan
		glPushMatrix();
			glTranslatef(1,5,20);
			glRotatef(180,0,1,0);
			pintu(0.5,0.3,0.2,r,g,b);
		glPopMatrix();
	glPopMatrix();
	//tembok kanan
	glColor3f(r,g,b);
	glPushMatrix();		
		glScalef(1,19.5,41);
		glTranslatef(15,1.5,0);
		glutSolidCube(1);
	glPopMatrix();
	//tembok kiri
	glPushMatrix();	
		glScalef(1,20,11);
		glTranslatef(-30,1.5,-1.35);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();	
		glScalef(1,20,11);
		glTranslatef(-30,1.5,0.75);
		glutSolidCube(1);
	glPopMatrix();
	//jendela besar
	glPushMatrix();
		glTranslatef(-50,20,-25);	
		glRotatef(90,0,1,0);		
		jendela(r,g,b);
	glPopMatrix();
	//jendela kecil
	glPushMatrix();
		glTranslatef(-50,20,5.25);	
		glRotatef(90,0,1,0);
		glScalef(0.5,1,1);
		jendela(r,g,b);
	glPopMatrix();
	//pagar depan
	glPushMatrix();			
		glTranslatef(-14,22.5,28.5);
		pagar(28,1,1,1);
	glPopMatrix();
	//pagar kiri
	glPushMatrix();			
		glTranslatef(-14.5,22.5,28.5);
		glRotatef(90,0,1,0);
		pagar(8,1,1,1);
	glPopMatrix();
	//pagar kanan
	glPushMatrix();			
		glTranslatef(14.5,22.5,28.5);
		glRotatef(90,0,1,0);
		pagar(8,1,1,1);
	glPopMatrix();
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
	case 'w':
    case 'W':
		zpos += 3.0;
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
		xpos += 3.0;
        glTranslatef(3.0, 0.0, 0.0);
        break;
	case 's':
    case 'S':
		zpos += -3.0;
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
		xpos += -3.0;
        glTranslatef(-3.0, 0.0, 0.0);
        break;
	case 'q':
	case 'Q':
		ypos += 3.0;
        glTranslatef(0.0, 3.0, 0.0);
        break;
	case 'z':
	case 'Z':
		ypos += -3.0;
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '1':
        if(dinding1==0){
			dinding1=1;
		}else{
			dinding1=0;
		}
        break;
	case '2':
        if(dinding2==0){
			dinding2=1;
		}else{
			dinding2=0;
		}
        break;       
    case '3':
        if(ataprumah==0){
			ataprumah=1;
		}else{
			ataprumah=0;
		}
        break;
	case '4':
        if(lantaibawah==0){
			lantaibawah=1;
		}else{
			lantaibawah=0;
		}
        break;
	case '5':
        if(lantaiatas==0){
			lantaiatas=1;
		}else{
			lantaiatas=0;
		}
        break;
    }
    tampil();
}
void idle()
{
	
	if (!mouseDown)
	{
		xrot += 0.3f;
		yrot += 0.4f;
	} 
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			mouseDown = true;
			xdiff = x - yrot;
			ydiff = -y + xrot;
		}
	else
	mouseDown = false;
}
 
void mouseMotion(int x, int y)
{

	if (mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;
 
		glutPostRedisplay();

	}
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
Rumah3D_672014194.cpp
Displaying Rumah3D_672014194.cpp.