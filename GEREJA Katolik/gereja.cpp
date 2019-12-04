#include <stdlib.h>
#include<windows.h>
#include <GL/glut.h>
#include "imageloader.h"

void lumia(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;
GLuint texture,texture1,texture2,texture3;

GLuint loadTexture(Image* image) {
	GLuint texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image->width, image->height, 0, GL_RGB, GL_UNSIGNED_BYTE, image->pixels);
	return texture;
}

GLuint loadTexture1(Image* image1) {
	GLuint texture1;
	glGenTextures(1, &texture1);
	glBindTexture(GL_TEXTURE_2D, texture1);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image1->width, image1->height, 0, GL_RGB, GL_UNSIGNED_BYTE, image1->pixels);
	return texture1;
}

GLuint loadTexture2(Image* image2) {
	GLuint texture2;
	glGenTextures(1, &texture2);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image2->width, image2->height, 0, GL_RGB, GL_UNSIGNED_BYTE, image2->pixels);
	return texture2;
}

GLuint loadTexture3(Image* image3) {
	GLuint texture3;
	glGenTextures(1, &texture3);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, image3->width, image3->height, 0, GL_RGB, GL_UNSIGNED_BYTE, image3->pixels);
	return texture3;
}

void lumia(void)
{
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_NORMALIZE);
	glShadeModel(GL_SMOOTH);
    glPointSize(7.0);
    glLineWidth(1.0f);

	Image* image = loadBMP("batu.bmp");
	texture = loadTexture(image);
	Image* image1 = loadBMP("rumput.bmp");
	texture1 = loadTexture1(image1);
	Image* image2 = loadBMP("atap.bmp");
	texture2 = loadTexture2(image2);
	Image* image3 = loadBMP("kacabiru.bmp");
	texture3 = loadTexture3(image3);
	delete image,image1,image2,image3;

}


void depan1(void)
{

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{

		  //GARIS TAMPAK DEPAN 1
			//bagian garis depan 1
			glColor3f(0.65,0.50,0.39);
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glVertex3f(-5.0*i,-8.0,30.10);
			glVertex3f(-5.0*i,0.0,30.10);
			glVertex3f(-6.0*i,0.0,30.10);
			glVertex3f(-6.0*i,-8.0,30.10);
			glEnd();

			//bagian garis depan 2
			glBegin(GL_POLYGON);
			glVertex3f(-5.0*i,0.0,30.10);
			glVertex3f(-4.50*i,5.0,30.10);
			glVertex3f(-5.50*i,5.0,30.10);
			glVertex3f(-6.0*i,0.0,30.10);
			glEnd();

			//bagian garis depan 3
			glBegin(GL_POLYGON);
			glVertex3f(-4.50*i,5.0,30.10);
			glVertex3f(-3.50*i,10.0,30.10);
			glVertex3f(-4.50*i,10.0,30.10);
			glVertex3f(-5.50*i,5.0,30.10);
			glEnd();

			//bagian garis depan 4
			glBegin(GL_POLYGON);
			glVertex3f(-3.50*i,10.0,30.10);
			glVertex3f(-2.50*i,15.0,30.10);
			glVertex3f(-3.50*i,15.0,30.10);
			glVertex3f(-4.50*i,10.0,30.10);
			glEnd();

			//bagian garis depan 5
			glBegin(GL_POLYGON);
			glVertex3f(-2.50*i,15.0,30.10);
			glVertex3f(0.0*i,20.0,30.10);
			glVertex3f(0.0*i,22.0,30.10);
			glVertex3f(-3.50*i,15.0,30.10);
			glEnd();



		  //GARIS TAMPAK DEPAN 2
			//bag 1
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-4.50*i,-8.0,29.50);
			glVertex3f(-5.0*i,-8.0,29.50);
			glVertex3f(-5.0*i,0.0,29.50);
			glVertex3f(-4.50*i,0.0,29.50);
			glEnd();

			//bag 2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-4.50*i,0.0,29.50);
			glVertex3f(-5.0*i,0.0,29.50);
			glVertex3f(-4.50*i,5.0,29.50);
			glVertex3f(-4.0*i,5.0,29.50);
			glEnd();

			//bag 3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-4.0*i,5.0,29.50);
			glVertex3f(-4.50*i,5.0,29.50);
			glVertex3f(-3.50*i,10.0,29.50);
			glVertex3f(-3.0*i,10.0,29.50);
			glEnd();


			//bag 4
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3.0*i,10.0,29.50);
			glVertex3f(-3.50*i,10.0,29.50);
			glVertex3f(-2.50*i,15.0,29.50);
			glVertex3f(-2.0*i,15.0,29.50);
			glEnd();

			//bag 5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2.0*i,15.0,29.50);
			glVertex3f(-2.50*i,15.0,29.50);
			glVertex3f(0.0*i,20.0,29.50);
			glVertex3f(0.0*i,20.0-1.0,29.50);
			glEnd();
			//end


		  //GARIS TAMPAK DEPAN 3
			//bag 1_2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-4.0*i,-8.0,29.0);
			glVertex3f(-4.50*i,-8.0,29.0);
			glVertex3f(-4.50*i,0.0,29.0);
			glVertex3f(-4.0*i,0.0,29.0);
			glEnd();

			//bag 2_2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-4.0*i,0.0,29.0);
			glVertex3f(-4.50*i,0.0,29.0);
			glVertex3f(-4.00*i,5.0,29.0);
			glVertex3f(-3.50*i,5.0,29.0);
			glEnd();

			//bag 3_2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3.50*i,5.0,29.0);
			glVertex3f(-4.00*i,5.0,29.0);
			glVertex3f(-3.00*i,10.0,29.0);
			glVertex3f(-2.50*i,10.0,29.0);
			glEnd();

			//bag 4_2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2.50*i,10.0,29.0);
			glVertex3f(-3.00*i,10.0,29.0);
			glVertex3f(-2.00*i,15.0,29.0);
			glVertex3f(-1.50*i,15.0,29.0);
			glEnd();

			//bag 5_2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-1.50*i,15.0,29.0);
			glVertex3f(-2.00*i,15.0,29.0);
			glVertex3f(0.0*i,20.0-1.0,29.0);
			glVertex3f(0.0*i,20.0-2,29.0);
			glEnd();
			//end

			//bag 1_3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3.5*i,-8.0,28.50);
			glVertex3f(-4*i,-8.0,28.50);
			glVertex3f(-4.0*i,0.0,28.50);
			glVertex3f(-3.5*i,0.0,28.50);
			glEnd();

			//bag 2_3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3.5*i,0.0,28.50);
			glVertex3f(-4.0*i,0.0,28.50);
			glVertex3f(-3.50*i,5.0,28.50);
			glVertex3f(-3.0*i,5.0,28.50);
			glEnd();

			//bag 3_3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3*i,5.0,28.50);
			glVertex3f(-3.50*i,5.0,28.50);
			glVertex3f(-2.50*i,10.0,28.50);
			glVertex3f(-2*i,10.0,28.50);
			glEnd();

			//bag 4_3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2.0*i,10.0,28.50);
			glVertex3f(-2.50*i,10.0,28.50);
			glVertex3f(-1.50*i,15.0,28.50);
			glVertex3f(-1.0*i,15.0,28.50);
			glEnd();

			//bag 5_3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-1.0*i,15.0,28.50);
			glVertex3f(-1.50*i,15.0,28.50);
			glVertex3f(0.0*i,20.0-2.0,28.50);
			glVertex3f(0.0*i,20.0-3,28.50);
			glEnd();
			//end

			//bag 1_4
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3.0*i,-8.0,28.0);
			glVertex3f(-3.50*i,-8.0,28.0);
			glVertex3f(-3.50*i,0.0,28.0);
			glVertex3f(-3.0*i,0.0,28.0);
			glEnd();

			//bag 2_4
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3.0*i,0.0,28.0);
			glVertex3f(-3.50*i,0.0,28.0);
			glVertex3f(-3.0*i,5.0,28.0);
			glVertex3f(-2.50*i,5.0,28.0);
			glEnd();

			//bag 3_4
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2.50*i,5.0,28.0);
			glVertex3f(-3.0*i,5.0,28.0);
			glVertex3f(-2.0*i,10.0,28.0);
			glVertex3f(-1.50*i,10.0,28.0);
			glEnd();

			//bag 4_4
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-1.50*i,10.0,28.0);
			glVertex3f(-2.0*i,10.0,28.0);
			glVertex3f(-1*i,15.0,28.0);
			glVertex3f(-0.50*i,15.0,28.0);
			glEnd();

			//bag 5_4
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-0.50*i,15.0,28.0);
			glVertex3f(-1.0*i,15.0,28.0);
			glVertex3f(0.0*i,20.0-3.0,28.0);
			glVertex3f(0.0*i,20.0-4,28.0);
			glEnd();
			//end

			//bag 1_5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2.5*i,-8.0,27.50);
			glVertex3f(-3.0*i,-8.0,27.50);
			glVertex3f(-3.0*i,0.0,27.50);
			glVertex3f(-2.5*i,0.0,27.50);
			glEnd();

			//bag 2_5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2.5*i,0.0,27.50);
			glVertex3f(-3.0*i,0.0,27.50);
			glVertex3f(-2.50*i,5.0,27.50);
			glVertex3f(-2*i,5.0,27.50);
			glEnd();

			//bag 3_5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-2*i,5.0,27.50);
			glVertex3f(-2.50*i,5.0,27.50);
			glVertex3f(-1.50*i,10.0,27.50);
			glVertex3f(-1*i,10.0,27.50);
			glEnd();

			//bag 4_5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-1*i,10.0,27.50);
			glVertex3f(-1.50*i,10.0,27.50);
			glVertex3f(-0.50*i,15.0,27.50);
			glVertex3f(0*i,15.0,27.50);
			glEnd();

			//bag 5_5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(0*i,15.0,27.50);
			glVertex3f(-0.50*i,15.0,27.50);
			glVertex3f(0.0*i,20.0-4.0,27.50);
			glVertex3f(0.0*i,20.0-5,27.50);
			glEnd();
			//end

			//glBegin(GL_POINTS);
			glBegin(GL_TRIANGLE_FAN);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(0.0*i,-8.0,27.50);
			glVertex3f(0.0*i,15.0,27.50);
			glVertex3f(-1*i,10.0,27.50);
			glVertex3f(-2*i,5.0,27.50);
			glVertex3f(-2.5*i,0.0,27.50);
			glVertex3f(-2.5*i,-8.0,27.50);
			glEnd();

		 //UNTUK GARIS MELENGKUNG DALAM
			//MELENGKUNG_1
			//lengkungan didalam 1
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(-5.0*i,-8.0,30.10);
			glVertex3f(-5.0*i,-8.0,29.50);
			glVertex3f(-5.0*i,0.0,29.50);
			glVertex3f(-5.0*i,0.0,30.10);
			glEnd();

			//lengkungan didalam 2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glVertex3f(-5.0*i,0.0,30.10);
			glVertex3f(-5.0*i,0.0,29.50);
			glVertex3f(-4.50*i,5.0,29.50);
			glVertex3f(-4.50*i,5.0,30.10);
			glEnd();

			//lengkungan didalam 3
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glVertex3f(-4.50*i,5.0,30.10);
			glVertex3f(-4.50*i,5.0,29.50);
			glVertex3f(-3.50*i,10.0,29.50);
			glVertex3f(-3.50*i,10.0,30.10);
			glEnd();

			//lengkungan didalam 4
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glVertex3f(-3.50*i,10.0,30.10);
			glVertex3f(-3.50*i,10.0,29.50);
			glVertex3f(-2.50*i,15.0,29.5);
			glVertex3f(-2.50*i,15.0,30.10);
			glEnd();

			//lengkungan didalam 5
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glVertex3f(-2.50*i,15.0,30.10);
			glVertex3f(-2.50*i,15.0,29.5);
			glVertex3f(0.0*i,20.0,29.50);
			glVertex3f(0.0*i,20.0,30.10);
			glEnd();
		  //
		  //GARIS MELENGKUNG DALAM 2
			//1
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-4.50*i,-8.0,29.50);
			glVertex3f(-4.50*i,0.0,29.50);
			glVertex3f(-4.50*i,0.0,29.00);
			glVertex3f(-4.50*i,-8.0,29.00);
			glEnd();
			//2
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-4.50*i,0.0,29.50);
			glVertex3f(-4.00*i,5.0,29.50);
			glVertex3f(-4.00*i,5.0,29.00);
			glVertex3f(-4.50*i,0.0,29.00);
			glEnd();
			//3
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-4.00*i,5.0,29.50);
			glVertex3f(-3.00*i,10.0,29.50);
			glVertex3f(-3.00*i,10.0,29.00);
			glVertex3f(-4.00*i,5.0,29.00);
			glEnd();
			//4
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.00*i,10.0,29.50);
			glVertex3f(-2.00*i,15.0,29.50);
			glVertex3f(-2.00*i,15.0,29.00);
			glVertex3f(-3.00*i,10.0,29.00);
			glEnd();
			//5
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-2.00*i,15.0,29.50);
			glVertex3f(-0.00*i,19.0,29.50);
			glVertex3f(-0.00*i,19.0,29.00);
			glVertex3f(-2.00*i,15.0,29.00);
			glEnd();

		  //GARIS MELENGKUNG DALAM 3
			//1
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-4.00*i,-8.0,29.00);
			glVertex3f(-4.00*i,0.0,29.00);
			glVertex3f(-4.00*i,0.0,28.50);
			glVertex3f(-4.00*i,-8.0,28.50);
			glEnd();
			//2
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-4.00*i,0.0,29.00);
			glVertex3f(-3.50*i,5.0,29.00);
			glVertex3f(-3.50*i,5.0,28.50);
			glVertex3f(-4.00*i,0.0,28.50);
			glEnd();
			//3
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.50*i,5.0,29.00);
			glVertex3f(-2.50*i,10.0,29.00);
			glVertex3f(-2.50*i,10.0,28.50);
			glVertex3f(-3.50*i,5.0,28.50);
			glEnd();
			//4
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-2.50*i,10.0,28.50);
			glVertex3f(-1.50*i,15.0,28.50);
			glVertex3f(-1.50*i,15.0,29.00);
			glVertex3f(-2.50*i,10.0,29.00);
			glEnd();
			//5
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-1.50*i,15.0,28.50);
			glVertex3f(-0.00*i,18.0,28.50);
			glVertex3f(-0.00*i,18.0,29.00);
			glVertex3f(-1.50*i,15.0,29.00);
			glEnd();

		  //GARIS MELENGKUNG DALAM 4
			//1
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.50*i,-8.0,28.00);
			glVertex3f(-3.50*i,0.0,28.00);
			glVertex3f(-3.50*i,0.0,28.50);
			glVertex3f(-3.50*i,-8.0,28.50);
			glEnd();
			//2
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.50*i,0.0,28.00);
			glVertex3f(-3.00*i,5.0,28.00);
			glVertex3f(-3.00*i,5.0,28.50);
			glVertex3f(-3.50*i,0.0,28.50);
			glEnd();
			//3
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.00*i,5.0,28.00);
			glVertex3f(-2.00*i,10.0,28.00);
			glVertex3f(-2.00*i,10.0,28.50);
			glVertex3f(-3.00*i,5.0,28.50);
			glEnd();
			//4
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-2.00*i,10.0,28.50);
			glVertex3f(-1.00*i,15.0,28.50);
			glVertex3f(-1.00*i,15.0,28.00);
			glVertex3f(-2.00*i,10.0,28.00);
			glEnd();
			//5
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-1.00*i,15.0,28.50);
			glVertex3f(-0.00*i,17.0,28.50);
			glVertex3f(-0.00*i,17.0,28.00);
			glVertex3f(-1.00*i,15.0,28.00);
			glEnd();

		   //GARIS MELENGKUNG DALAM 5
			//1
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.00*i,-8.0,28.00);
			glVertex3f(-3.00*i,0.0,28.00);
			glVertex3f(-3.00*i,0.0,27.50);
			glVertex3f(-3.00*i,-8.0,27.50);
			glEnd();
			//2
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-3.00*i,0.0,28.00);
			glVertex3f(-2.50*i,5.0,28.00);
			glVertex3f(-2.50*i,5.0,27.50);
			glVertex3f(-3.00*i,0.0,27.50);
			glEnd();
			//3
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-2.50*i,5.0,28.00);
			glVertex3f(-1.50*i,10.0,28.00);
			glVertex3f(-1.50*i,10.0,27.50);
			glVertex3f(-2.50*i,5.0,27.50);
			glEnd();
			//4
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-1.50*i,10.0,27.50);
			glVertex3f(-0.50*i,15.0,27.50);
			glVertex3f(-0.50*i,15.0,28.00);
			glVertex3f(-1.50*i,10.0,28.00);
			glEnd();
			//5
			glBegin(GL_POLYGON);
			glColor3f(0.5,0.5,0.5);
			glVertex3f(-0.50*i,15.0,27.50);
			glVertex3f(-0.00*i,16.0,27.50);
			glVertex3f(-0.00*i,16.0,28.00);
			glVertex3f(-0.50*i,15.0,28.00);
			glEnd();
		}
	}

	//garis ke-1
	glBegin(GL_LINE_STRIP);
	//glBegin(GL_POINTS);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-5.0+0.50,-8.0,29.50);//1
	glVertex3f(-5.0+0.50,0.0,29.50);//2
	glVertex3f(-4.50+0.50,5.0,29.50);//3
	glVertex3f(-3.50+0.50,10.0,29.50);//4
	glVertex3f(-2.50+0.50,15.0,29.50);//5

	glVertex3f(0.0,20.0-1.0,29.50);//6

	glVertex3f(2.50-0.50,15.0,29.50);
	glVertex3f(3.50-0.50,10.0,29.50);
	glVertex3f(4.50-0.50,5.0,29.50);
	glVertex3f(5.0-0.50,0.0,29.50);
	glVertex3f(5.0-0.50,-8.0,29.50);
	glEnd();

	//garis ke-2
	glBegin(GL_LINE_STRIP);
	//glBegin(GL_POINTS);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-5.0+1,-8.0,29.0);
	glVertex3f(-5.0+1,0.0,29.0);
	glVertex3f(-4.50+1,5.0,29.0);
	glVertex3f(-3.50+1,10.0,29.0);
	glVertex3f(-2.50+1,15.0,29.0);

	glVertex3f(0.0,20.0-2.0,29.0);

	glVertex3f(2.50-1,15.0,29.0);
	glVertex3f(3.50-1,10.0,29.0);
	glVertex3f(4.50-1,5.0,29.0);
	glVertex3f(5.0-1,0.0,29.0);
	glVertex3f(5.0-1,-8.0,29.0);
	glEnd();

	//garis ke-3
	glBegin(GL_LINE_STRIP);
	//glBegin(GL_POINTS);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-5.0+1.5,-8.0,28.50);
	glVertex3f(-5.0+1.5,0.0,28.50);
	glVertex3f(-4.50+1.5,5.0,28.50);
	glVertex3f(-3.50+1.5,10.0,28.50);
	glVertex3f(-2.50+1.5,15.0,28.50);

	glVertex3f(0.0,20.0-3.0,28.50);

	glVertex3f(2.50-1.5,15.0,28.50);
	glVertex3f(3.50-1.5,10.0,28.50);
	glVertex3f(4.50-1.5,5.0,28.50);
	glVertex3f(5.0-1.5,0.0,28.50);
	glVertex3f(5.0-1.5,-8.0,28.50);
	glEnd();

	//garis ke-4
	glBegin(GL_LINE_STRIP);
	//glBegin(GL_POINTS);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-5.0+2.0,-8.0,28.0);
	glVertex3f(-5.0+2,0.0,28.0);
	glVertex3f(-4.50+2,5.0,28.0);
	glVertex3f(-3.50+2,10.0,28.0);
	glVertex3f(-2.50+2,15.0,28.0);

	glVertex3f(0.0,20.0-4,28.0);

	glVertex3f(2.50-2,15.0,28.0);
	glVertex3f(3.50-2,10.0,28.0);
	glVertex3f(4.50-2,5.0,28.0);
	glVertex3f(5.0-2,0.0,28.0);
	glVertex3f(5.0-2,-8.0,28.0);
	glEnd();

	//garis ke-5
	glBegin(GL_LINE_STRIP);
	//glBegin(GL_POINTS);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-5.0+2.5,-8.0,27.50);
	glVertex3f(-5.0+2.5,0.0,27.50);
	glVertex3f(-4.50+2.5,5.0,27.50);
	glVertex3f(-3.50+2.5,10.0,27.50);
	glVertex3f(-2.50+2.5,15.0,27.50);

	glVertex3f(0.0,20.0-5.0,27.50);

	glVertex3f(2.50-2.5,15.0,27.50);
	glVertex3f(3.50-2.5,10.0,27.50);
	glVertex3f(4.50-2.5,5.0,27.50);
	glVertex3f(5.0-2.5,0.0,27.50);
	glVertex3f(5.0-2.5,-8.0,27.50);
	glEnd();
}

void lingtengh(void)
	{
		glPushMatrix();
		glScaled(0.1,0.20,0.01);
		glTranslatef(0.0,-7.30,2750.0);
		glutSolidSphere(20,360,100);
		glPopMatrix();
		glDisable(GL_TEXTURE_2D);

		//glBegin(GL_POINTS);
		glBegin(GL_LINES);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(0.0,9.0,27.60);
		glVertex3f(0.0,5.0,27.60);

		glVertex3f(-1.0,7.0,27.60);
		glVertex3f(1.0,7.0,27.60);
		glEnd();
	}

void depan2(void)
{
	//bagian kiri
	//glBegin(GL_LINE_STRIP);
	glBegin(GL_TRIANGLES);
	glColor3f(0.917647,0.917647,0.678431);
	//glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-5.0,-8.0,30.0);
	glVertex3f(-10.0,-8.0,30.0);
	glVertex3f(-10.0,20.0,30.0);

	glVertex3f(-5.0,-8.0,30.0);
	glVertex3f(-5.0,0.0,30.0);
	glVertex3f(-10.0,20.0,30.0);

	glVertex3f(-5.0,0.0,30.0);
	glVertex3f(-4.50,5.0,30.0);
	glVertex3f(-10.0,20.0,30.0);

	glVertex3f(-4.50,5.0,30.0);
	glVertex3f(-3.50,10.0,30.0);
	glVertex3f(-10.0,20.0,30.0);

	glVertex3f(-3.50,10.0,30.0);
	glVertex3f(-2.50,15.0,30.0);
	glVertex3f(-10.0,20.0,30.0);

	glVertex3f(-2.50,15.0,30.0);
	glVertex3f(0.0,20.0,30.0);
	glVertex3f(-10.0,20.0,30.0);

	glVertex3f(0.0,20.0,30.0);
	glVertex3f(0.0,31.0,30.0);
	glVertex3f(-8.0,20.0,30.0);

	//bagian kanan
	glVertex3f(5.0,-8.0,30.0);
	glVertex3f(10.0,-8.0,30.0);
	glVertex3f(10.0,20.0,30.0);

	glVertex3f(5.0,-8.0,30.0);
	glVertex3f(5.0,0.0,30.0);
	glVertex3f(10.0,20.0,30.0);

	glVertex3f(5.0,0.0,30.0);
	glVertex3f(4.50,5.0,30.0);
	glVertex3f(10.0,20.0,30.0);

	glVertex3f(4.50,5.0,30.0);
	glVertex3f(3.50,10.0,30.0);
	glVertex3f(10.0,20.0,30.0);

	glVertex3f(3.50,10.0,30.0);
	glVertex3f(2.50,15.0,30.0);
	glVertex3f(10.0,20.0,30.0);

	glVertex3f(2.50,15.0,30.0);
	glVertex3f(0.0,20.0,30.0);
	glVertex3f(10.0,20.0,30.0);

	glVertex3f(0.0,20.0,30.0);
	glVertex3f(0.0,31.0,30.0);
	glVertex3f(8.0,20.0,30.0);
	glEnd();

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//jeda bngunan utama dan depan
			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(10.0*i,20.0,30.0);
			glVertex3f(10.0*i,-8.0,30.0);
			glVertex3f(10.0*i,-8.0,29.50);
			glVertex3f(10.0*i,20.0,29.50);
			glEnd();

			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(10.0*i,20.0,30.0);
			glVertex3f(10.0*i,20.0,29.50);
			glVertex3f(8.0*i,20.0,29.50);
			glVertex3f(8.0*i,20.0,30.0);
			glEnd();
		}
	}


}

void depan3(void)
{
	//glBegin(GL_POINTS);
	//glBegin(GL_LINE_STRIP);

	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(10.0,17.50,29.80);
	glVertex3f(18.0,6.30,29.80);
	glVertex3f(18.0,-30.0,29.80);
	glVertex3f(10.0,-30.0,29.80);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-10.0,17.50,29.80);
	glVertex3f(-18.0,6.30,29.80);
	glVertex3f(-18.0,-30.0,29.80);
	glVertex3f(-10.0,-30.0,29.80);
	glEnd();
}

void belakang(void)
{
	//glBegin(GL_POINTS);
	glBegin(GL_TRIANGLES);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(0.0,31.0,-30.0);
	glVertex3f(18.0,6.30,-30.0);
	glVertex3f(-18.0,6.30,-30.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(19.0,6.30,-30.0);
	glVertex3f(-19.0,6.30,-30.0);
	glVertex3f(-19.0,-30,-30.0);
	glVertex3f(19.0,-30,-30.0);
	glEnd();
}

void sampingkanankiri(void)
{

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//dinding knnkiri
			glBegin(GL_POLYGON);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(19.0*i,-30.0,29.80);
			glVertex3f(19.0*i,6.30,29.80);
			glVertex3f(19.0*i,6.30,-30);
			glVertex3f(19.0*i,-30.0,-30);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.52,0.37,0.26);
			glVertex3f(19.10*i,-29.80,-28.0);
			glVertex3f(19.10*i,-16.0,-28.0);
			glVertex3f(19.10*i,-15.0,-26.75);
			glVertex3f(19.10*i,-16.0,-25.50);
			glVertex3f(19.10*i,-29.80,-25.50);
			glEnd();

			//garis pintu
			//glBegin(GL_POLYGON);
			glBegin(GL_LINE_STRIP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.15*i,-29.80,-28.0);
			glVertex3f(19.15*i,-16.0,-28.0);
			glVertex3f(19.15*i,-15.0,-26.75);
			glVertex3f(19.15*i,-16.0,-25.50);
			glVertex3f(19.15*i,-29.80,-25.50);
			glEnd();
		}
	}
}

void bgndlmdpn(void)
{
	//glBegin(GL_POLYGON);
	////glBegin(GL_POINTS);
	//glColor3f(0.858824,0.858824,0.439216);
	//glVertex3f(-10.0,-30.0,29.80);
	//glVertex3f(-10.0,-8.0,29.80);
	//glVertex3f(-10.0,-8.0,25.0);
	//glVertex3f(-10.0,-30.0,25.0);
	//glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-10.0,-8.0,25.0);
	glVertex3f(-10.0,-30.0,25.0);
	glVertex3f(10.0,-30.0,25.0);
	glVertex3f(10.0,-8.0,25.0);
	glEnd();

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//jeda menuju pintu depan
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-10.0*i,-8.0,29.80);
			glVertex3f(-10.0*i,-30.0,29.80);
			glVertex3f(-8.0*i,-30.0,29.80);
			glVertex3f(-8.0*i,-15.0,29.80);
			glVertex3f(-6.50*i,-14.0,29.80);
			glVertex3f(-6.50*i,-8.0,29.80);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3*i,-8.0,29.80);
			glVertex3f(-3*i,-30.0,29.80);
			glVertex3f(-5*i,-30.0,29.80);
			glVertex3f(-5*i,-15.0,29.80);
			glVertex3f(-6.50*i,-14.0,29.80);
			glVertex3f(-6.50*i,-8.0,29.80);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(-3*i,-8.0,29.80);
			glVertex3f(-3*i,-15.0,29.80);
			glVertex3f(0*i,-13.0,29.80);
			glVertex3f(0*i,-8.0,29.80);
			glEnd();
		}
	}


	//glBegin(GL_POLYGON);
	////glBegin(GL_POINTS);
	//glColor3f(0.858824,0.858824,0.439216);
	//glVertex3f(10.0,-30.0,29.80);
	//glVertex3f(10.0,-8.0,29.80);
	//glVertex3f(10.0,-8.0,25.0);
	//glVertex3f(10.0,-30.0,25.0);
	//glEnd();

	//atap teras
	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(1.0,0.55,0.0);
	glVertex3f(10.10,-8.0,34.90);
	glVertex3f(10.10,-8.0,25.10);
	glVertex3f(-10.10,-8.0,25.10);
	glVertex3f(-10.10,-8.0,34.90);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.858824,0.858824,0.439216);
	glVertex3f(10.0,-10.0,34.80);
	glVertex3f(10.0,-10.0,25.0);
	glVertex3f(-10.0,-10.0,25.0);
	glVertex3f(-10.0,-10.0,34.80);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.858824,0.858824,0.439216);
	//glColor3f(1.0,1.0,1.0);
	glVertex3f(10.0,-8.0,34.80);
	glVertex3f(-10.0,-8.0,34.80);
	glVertex3f(-10.0,-10.0,34.80);
	glVertex3f(10.0,-10.0,34.80);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(1.0,0.55,0.0);
	glVertex3f(10.10,-8.0,34.90);
	glVertex3f(-10.10,-8.0,34.90);
	glVertex3f(-10.10,-8.80,34.90);
	glVertex3f(10.10,-8.80,34.90);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.858824,0.858824,0.439216);
	//glColor3f(1.0,1.0,1.0);
	glVertex3f(10.0,-8.0,34.80);
	glVertex3f(10.0,-8.0,25.0);
	glVertex3f(10.0,-10.0,25.0);
	glVertex3f(10.0,-10.0,34.80);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(1.0,0.55,0.0);
	glVertex3f(10.10,-8.0,34.90);
	glVertex3f(10.10,-8.0,25.0);
	glVertex3f(10.10,-8.80,25.0);
	glVertex3f(10.10,-8.80,34.90);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.858824,0.858824,0.439216);
	//glColor3f(1.0,1.0,1.0);
	glVertex3f(-10.0,-8.0,34.80);
	glVertex3f(-10.0,-8.0,25.0);
	glVertex3f(-10.0,-10.0,25.0);
	glVertex3f(-10.0,-10.0,34.80);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(1.0,0.55,0.0);
	glVertex3f(-10.10,-8.0,34.90);
	glVertex3f(-10.10,-8.0,25.0);
	glVertex3f(-10.10,-8.80,25.0);
	glVertex3f(-10.10,-8.80,34.90);
	glEnd();
}

void jendeladepan(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//jendela kotak kanan
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(10.50*i,-9.0,29.90);
			glVertex3f(10.50*i,-12.0,29.90);
			glVertex3f(13.50*i,-12.0,29.90);
			glVertex3f(13.50*i,-9.0,29.90);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(10.50*i,-9.0,29.90);
			glVertex3f(10.50*i,-12.0,29.90);
			glVertex3f(13.50*i,-12.0,29.90);
			glVertex3f(13.50*i,-9.0,29.90);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(14*i,-9.0,29.90);
			glVertex3f(14*i,-12.0,29.90);
			glVertex3f(17*i,-12.0,29.90);
			glVertex3f(17*i,-9.0,29.90);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(14*i,-9.0,29.90);
			glVertex3f(14*i,-12.0,29.90);
			glVertex3f(17*i,-12.0,29.90);
			glVertex3f(17*i,-9.0,29.90);
			glEnd();


			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(10.50*i,-13,29.90);
			glVertex3f(13.50*i,-13,29.90);
			glVertex3f(13.50*i,-23.0,29.90);
			glVertex3f(10.50*i,-23.0,29.90);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(10.50*i,-13,29.90);
			glVertex3f(13.50*i,-13,29.90);
			glVertex3f(13.50*i,-23.0,29.90);
			glVertex3f(10.50*i,-23.0,29.90);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(14*i,-13,29.90);
			glVertex3f(17*i,-13,29.90);
			glVertex3f(17*i,-23.0,29.90);
			glVertex3f(14*i,-23.0,29.90);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(14*i,-13,29.90);
			glVertex3f(17*i,-13,29.90);
			glVertex3f(17*i,-23.0,29.90);
			glVertex3f(14*i,-23.0,29.90);
			glEnd();


			glBegin(GL_LINES);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(12.0*i,-9.0,30.0);
			glVertex3f(12.0*i,-12.0,30.0);

			glVertex3f(12.0*i,-13.0,30.0);
			glVertex3f(12.0*i,-23.0,30.0);

			glVertex3f(15.50*i,-13.0,30.0);
			glVertex3f(15.50*i,-23.0,30.0);

			glVertex3f(15.50*i,-9.0,30.0);
			glVertex3f(15.50*i,-12.0,30.0);
			glEnd();

			//jendela kanan circle 1
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(14*i,-2,29.90);
			glVertex3f(17*i,-2,29.90);
			glVertex3f(17*i,-7.0,29.90);
			glVertex3f(14*i,-7.0,29.90);
			glEnd();

			//glBegin(GL_POINTS);
			glBegin(GL_TRIANGLE_FAN);
			glVertex3f(15.5*i,-2,29.90);
			glVertex3f(14.0*i,-2,29.90);
			glVertex3f(14.20*i,-1,29.90);
			glVertex3f(14.80*i,0,29.90);
			glVertex3f(16.20*i,0,29.90);
			glVertex3f(16.80*i,-1,29.90);
			glVertex3f(17.0*i,-2,29.90);
			glEnd();

			glBegin(GL_LINE_STRIP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(15.5*i,-2,30.0);
			glVertex3f(16.20*i,0,30.0);
			glVertex3f(16.80*i,-1,30.0);
			glVertex3f(17.0*i,-2,30.0);
			glVertex3f(17.0*i,-7,30.0);
			glVertex3f(14.0*i,-7,30.0);
			glVertex3f(14.0*i,-2,30.0);
			glVertex3f(14.20*i,-1,30.0);
			glVertex3f(14.0*i,-2,30.0);
			glVertex3f(14.80*i,0,30.0);
			glVertex3f(15.5*i,-2,30.0);
			glVertex3f(15.5*i,-7,30.0);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(15.5*i,-2,30.0);
			glVertex3f(14.80*i,0,30.0);
			glVertex3f(16.20*i,0,30.0);
			glEnd();

			glBegin(GL_LINE_STRIP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(14.80*i,0,30.0);
			glVertex3f(15.5*i,1,30.0);
			glVertex3f(16.20*i,0,30.0);
			glEnd();


			//jendela kanan circle 2
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(10.50*i,-2,29.90);
			glVertex3f(13.50*i,-2,29.90);
			glVertex3f(13.50*i,-7.0,29.90);
			glVertex3f(10.50*i,-7.0,29.90);
			glEnd();

			glBegin(GL_TRIANGLE_FAN);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(12.0*i,-2,29.90);
			glVertex3f(10.50*i,-2,29.90);
			glVertex3f(10.80*i,-1,29.90);
			glVertex3f(11.30*i,0,29.90);
			glVertex3f(12.70*i,0,29.90);
			glVertex3f(13.20*i,-1,29.90);
			glVertex3f(13.50*i,-2,29.90);
			glEnd();

			glBegin(GL_LINE_STRIP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(12.0*i,-2,30.0);
			glVertex3f(12.70*i,0,29.90);
			glVertex3f(13.20*i,-1,29.90);
			glVertex3f(13.50*i,-2,29.90);
			glVertex3f(13.50*i,-7,29.90);
			glVertex3f(10.50*i,-7,29.90);
			glVertex3f(10.50*i,-2,29.90);
			glVertex3f(10.80*i,-1,29.90);
			glVertex3f(10.50*i,-2,29.90);
			glVertex3f(11.30*i,0,29.90);
			glVertex3f(12.0*i,-2,30.0);
			glVertex3f(12.0*i,-7,30.0);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(12.0*i,-2,30.0);
			glVertex3f(11.30*i,0,30.0);
			glVertex3f(12.70*i,0,30.0);
			glEnd();

			glBegin(GL_LINE_STRIP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(11.30*i,0,30.0);
			glVertex3f(12.0*i,1,30.0);
			glVertex3f(12.70*i,0,30.0);
			glEnd();

		}
	}


}

void jendelaknnkiri(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//jendela1
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(19.1*i,-2,27.80);
			glVertex3f(19.1*i,-2,27.80-3);
			glVertex3f(19.1*i,-7.0,27.80-3);
			glVertex3f(19.1*i,-7.0,27.80);
			glEnd();

			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(19.1*i,-2,27.80);
			glVertex3f(19.1*i,0,27.0);
			glVertex3f(19.1*i,0,25.60);
			glVertex3f(19.1*i,-2,27.80-3);
			glEnd();

			//garis 2 jendela di atas
			//glBegin(GL_POINTS);
			glBegin(GL_LINE_STRIP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.15*i,-7.0,27.80-3);
			glVertex3f(19.15*i,-7.0,27.80);
			glVertex3f(19.15*i,-2.0,27.80);
			glVertex3f(19.15*i,0,27.0);
			glVertex3f(19.15*i,-2,26.30);
			glVertex3f(19.15*i,0,25.60);
			glVertex3f(19.15*i,0,25.60);
			glVertex3f(19.15*i,-2,27.80-3);
			glVertex3f(19.15*i,-7.0,27.80-3);
			glEnd();

			glBegin(GL_LINES);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.15*i,-2,26.30);
			glVertex3f(19.15*i,-7,26.30);

			glVertex3f(19.15*i,0,27.0);
			glVertex3f(19.15*i,0.8,26.30);

			glVertex3f(19.15*i,0.8,26.30);
			glVertex3f(19.15*i,0,25.60);
			glEnd();

			glBegin(GL_TRIANGLES);
			/*glBegin(GL_POINTS);*/
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(19.15*i,0,27.0);
			glVertex3f(19.15*i,-2,26.30);
			glVertex3f(19.15*i,0,25.60);
			glEnd();


			//jendela2
				glBegin(GL_POLYGON);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.1*i,-2,23.80);
				glVertex3f(19.1*i,-2,23.80-3);
				glVertex3f(19.1*i,-7.0,23.80-3);
				glVertex3f(19.1*i,-7.0,23.80);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.1*i,-2,27.80-4);
				glVertex3f(19.1*i,0,27.0-4);
				glVertex3f(19.1*i,0,25.60-4);
				glVertex3f(19.1*i,-2,27.80-7);
				glEnd();

				//garis 2 jendela di atas 2
				glBegin(GL_LINE_STRIP);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.15*i,-7.0,27.80-3-4);
				glVertex3f(19.15*i,-7.0,27.80-4);
				glVertex3f(19.15*i,-2.0,27.80-4);
				glVertex3f(19.15*i,0,27.0-4);
				glVertex3f(19.15*i,-2,26.30-4);
				glVertex3f(19.15*i,0,25.60-4);
				glVertex3f(19.15*i,0,25.60-4);
				glVertex3f(19.15*i,-2,27.80-3-4);
				glVertex3f(19.15*i,-7.0,27.80-3-4);
				glEnd();

				glBegin(GL_LINES);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.15*i,-2,26.30-4);
				glVertex3f(19.15*i,-7,26.30-4);

				glVertex3f(19.15*i,0,27.0-4);
				glVertex3f(19.15*i,0.8,26.30-4);

				glVertex3f(19.15*i,0.8,26.30-4);
				glVertex3f(19.15*i,0,25.60-4);
				glEnd();

				//batas
				glBegin(GL_TRIANGLES);
				/*glBegin(GL_POINTS);*/
				glColor3f(0.917647,0.917647,0.678431);
				glVertex3f(19.15*i,0,27.0-4);
				glVertex3f(19.15*i,-2,26.30-4);
				glVertex3f(19.15*i,0,25.60-4);
				glEnd();

				glEnable(GL_TEXTURE_2D);
				glBindTexture(GL_TEXTURE_2D, texture);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

				//texture jendela kanan 1
				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-9,27.80);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-12,27.80);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-10.50,27.0);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-9,27.0);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-10.50,27.0);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-9,27.0);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-9.0,26.40);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-10.0,26.40);
				glEnd();


				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-9.0,26.40);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-10.0,26.40);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-10.0,26.0);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-9.0,26.0);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-10.0,26.0);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-9.0,26.0);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-9.0,25.40);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-10.50,25.40);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-9.0,25.40);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-10.50,25.40);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-12,24.80);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-9,24.80);
				glEnd();

				//texture jendela kanan 2
				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-9,27.80-4);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-12,27.80-4);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-10.50,27.0-4);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-9,27.0-4);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-10.50,27.0-4);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-9,27.0-4);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-9.0,26.40-4);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-10.0,26.40-4);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-9.0,26.40-4);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-10.0,26.40-4);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-10.0,26.0-4);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-9.0,26.0-4);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-10.0,26.0-4);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-9.0,26.0-4);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-9.0,25.40-4);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-10.50,25.40-4);
				glEnd();

				glBegin(GL_POLYGON);
				glColor3f(1.0,1.0,1.0);
				glTexCoord2f(0.0,1.0);
				glVertex3f(19.1*i,-9.0,25.40-4);
				glTexCoord2f(1.0,0.0);
				glVertex3f(19.1*i,-10.50,25.40-4);
				glTexCoord2f(1.0,1.0);
				glVertex3f(19.1*i,-12,24.80-4);
				glTexCoord2f(0.0,0.0);
				glVertex3f(19.1*i,-9,24.80-4);
				glEnd();
				glDisable(GL_TEXTURE_2D);

				//jendela kecil 1
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0);
				glVertex3f(19.10*i,-4.0,14.0);
				glVertex3f(19.10*i,-4.0,12.50);
				glVertex3f(19.10*i,-7.0,12.50);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0);
				glVertex3f(19.2*i,-4.0,14.0);
				glVertex3f(19.2*i,-4.0,12.50);
				glVertex3f(19.2*i,-7.0,12.50);
				glEnd();

				//jendela kecil 2
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-2);
				glVertex3f(19.10*i,-4.0,14.0-2);
				glVertex3f(19.10*i,-4.0,12.50-2);
				glVertex3f(19.10*i,-7.0,12.50-2);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-2);
				glVertex3f(19.2*i,-4.0,14.0-2);
				glVertex3f(19.2*i,-4.0,12.50-2);
				glVertex3f(19.2*i,-7.0,12.50-2);
				glEnd();

				//jendela kecil 3
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-5.70);
				glVertex3f(19.10*i,-4.0,14.0-5.70);
				glVertex3f(19.10*i,-4.0,12.50-5.70);
				glVertex3f(19.10*i,-7.0,12.50-5.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-5.7);
				glVertex3f(19.2*i,-4.0,14.0-5.7);
				glVertex3f(19.2*i,-4.0,12.50-5.7);
				glVertex3f(19.2*i,-7.0,12.50-5.7);
				glEnd();

				//jendela kecil 4
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-7.70);
				glVertex3f(19.10*i,-4.0,14.0-7.70);
				glVertex3f(19.10*i,-4.0,12.50-7.70);
				glVertex3f(19.10*i,-7.0,12.50-7.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-7.70);
				glVertex3f(19.2*i,-4.0,14.0-7.70);
				glVertex3f(19.2*i,-4.0,12.50-7.70);
				glVertex3f(19.2*i,-7.0,12.50-7.70);
				glEnd();

				//jendela kecil 5
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-9.70);
				glVertex3f(19.10*i,-4.0,14.0-9.70);
				glVertex3f(19.10*i,-4.0,12.50-9.70);
				glVertex3f(19.10*i,-7.0,12.50-9.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-9.70);
				glVertex3f(19.2*i,-4.0,14.0-9.70);
				glVertex3f(19.2*i,-4.0,12.50-9.70);
				glVertex3f(19.2*i,-7.0,12.50-9.70);
				glEnd();

				//jendela kecil 6
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-11.70);
				glVertex3f(19.10*i,-4.0,14.0-11.70);
				glVertex3f(19.10*i,-4.0,12.50-11.70);
				glVertex3f(19.10*i,-7.0,12.50-11.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-11.70);
				glVertex3f(19.2*i,-4.0,14.0-11.70);
				glVertex3f(19.2*i,-4.0,12.50-11.70);
				glVertex3f(19.2*i,-7.0,12.50-11.70);
				glEnd();

				//jendela kecil 7
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-15.70);
				glVertex3f(19.10*i,-4.0,14.0-15.70);
				glVertex3f(19.10*i,-4.0,12.50-15.70);
				glVertex3f(19.10*i,-7.0,12.50-15.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-15.70);
				glVertex3f(19.2*i,-4.0,14.0-15.70);
				glVertex3f(19.2*i,-4.0,12.50-15.70);
				glVertex3f(19.2*i,-7.0,12.50-15.70);
				glEnd();

				//jendela kecil 8
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-17.70);
				glVertex3f(19.10*i,-4.0,14.0-17.70);
				glVertex3f(19.10*i,-4.0,12.50-17.70);
				glVertex3f(19.10*i,-7.0,12.50-17.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-17.70);
				glVertex3f(19.2*i,-4.0,14.0-17.70);
				glVertex3f(19.2*i,-4.0,12.50-17.70);
				glVertex3f(19.2*i,-7.0,12.50-17.70);
				glEnd();

				//jendela kecil 9
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-19.70);
				glVertex3f(19.10*i,-4.0,14.0-19.70);
				glVertex3f(19.10*i,-4.0,12.50-19.70);
				glVertex3f(19.10*i,-7.0,12.50-19.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-19.70);
				glVertex3f(19.2*i,-4.0,14.0-19.70);
				glVertex3f(19.2*i,-4.0,12.50-19.70);
				glVertex3f(19.2*i,-7.0,12.50-19.70);
				glEnd();

				//jendela kecil 10
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-21.70);
				glVertex3f(19.10*i,-4.0,14.0-21.70);
				glVertex3f(19.10*i,-4.0,12.50-21.70);
				glVertex3f(19.10*i,-7.0,12.50-21.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-21.70);
				glVertex3f(19.2*i,-4.0,14.0-21.70);
				glVertex3f(19.2*i,-4.0,12.50-21.70);
				glVertex3f(19.2*i,-7.0,12.50-21.70);
				glEnd();

				//jendela kecil 11
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-25.70);
				glVertex3f(19.10*i,-4.0,14.0-25.70);
				glVertex3f(19.10*i,-4.0,12.50-25.70);
				glVertex3f(19.10*i,-7.0,12.50-25.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-25.70);
				glVertex3f(19.2*i,-4.0,14.0-25.70);
				glVertex3f(19.2*i,-4.0,12.50-25.70);
				glVertex3f(19.2*i,-7.0,12.50-25.70);
				glEnd();

				//jendela kecil 12
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-27.70);
				glVertex3f(19.10*i,-4.0,14.0-27.70);
				glVertex3f(19.10*i,-4.0,12.50-27.70);
				glVertex3f(19.10*i,-7.0,12.50-27.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-27.70);
				glVertex3f(19.2*i,-4.0,14.0-27.70);
				glVertex3f(19.2*i,-4.0,12.50-27.70);
				glVertex3f(19.2*i,-7.0,12.50-27.70);
				glEnd();

				//jendela kecil 13
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-29.70);
				glVertex3f(19.10*i,-4.0,14.0-29.70);
				glVertex3f(19.10*i,-4.0,12.50-29.70);
				glVertex3f(19.10*i,-7.0,12.50-29.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-29.70);
				glVertex3f(19.2*i,-4.0,14.0-29.70);
				glVertex3f(19.2*i,-4.0,12.50-29.70);
				glVertex3f(19.2*i,-7.0,12.50-29.70);
				glEnd();

				//jendela kecil 14
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-31.70);
				glVertex3f(19.10*i,-4.0,14.0-31.70);
				glVertex3f(19.10*i,-4.0,12.50-31.70);
				glVertex3f(19.10*i,-7.0,12.50-31.70);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-31.70);
				glVertex3f(19.2*i,-4.0,14.0-31.70);
				glVertex3f(19.2*i,-4.0,12.50-31.70);
				glVertex3f(19.2*i,-7.0,12.50-31.70);
				glEnd();

				//jendela kecil 15
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-35);
				glVertex3f(19.10*i,-4.0,14.0-35);
				glVertex3f(19.10*i,-4.0,12.50-35);
				glVertex3f(19.10*i,-7.0,12.50-35);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-35);
				glVertex3f(19.2*i,-4.0,14.0-35);
				glVertex3f(19.2*i,-4.0,12.50-35);
				glVertex3f(19.2*i,-7.0,12.50-35);
				glEnd();

				//jendela kecil 16
				glBegin(GL_POLYGON);
				//glBegin(GL_POINTS);
				glColor3f(0.0,0.0,0.0);
				glVertex3f(19.10*i,-7.0,14.0-37);
				glVertex3f(19.10*i,-4.0,14.0-37);
				glVertex3f(19.10*i,-4.0,12.50-37);
				glVertex3f(19.10*i,-7.0,12.50-37);
				glEnd();

				glBegin(GL_LINE_LOOP);
				//glBegin(GL_POINTS);
				glColor3f(0.65,0.50,0.39);
				glVertex3f(19.2*i,-7.0,14.0-37);
				glVertex3f(19.2*i,-4.0,14.0-37);
				glVertex3f(19.2*i,-4.0,12.50-37);
				glVertex3f(19.2*i,-7.0,12.50-37);
				glEnd();
		}
	}

}


void garis1(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			glBegin(GL_POLYGON);
			glColor3f(1.0,0.55,0.0);
			glVertex3f(-10.0*i,20.0,30.10);
			glVertex3f(-8.0*i,20.0,30.10);
			glVertex3f(-8.0*i,19.0,30.10);
			glVertex3f(-10.0*i,19.0,30.10);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1.0,0.55,0.0);
			glVertex3f(-8.0*i,20.0,30.10);
			glVertex3f(-8.0*i,19.0,30.10);
			glVertex3f(0.0*i,31.0,30.10);
			glVertex3f(0.0*i,30.0,30.10);
			glEnd();

			//garis knnkiri
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(-19.10*i,3.0,29.0);
			glVertex3f(-19.10*i,3.0,-30.0);
			glVertex3f(-19.10*i,1.0,-30.0);
			glVertex3f(-19.10*i,1.0,29.0);
			glEnd();


			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			//ornamen bgnknnkiri
			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.60);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-24,8.90);
			glTexCoord2f(1.0,1.0);
			glVertex3f(25.20*i,-30,8.90);
			glTexCoord2f(0,0);
			glVertex3f(25.20*i,-30,14.60);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.50-34);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-24,9.0-34);
			glTexCoord2f(1.0,1.0);
			glVertex3f(25.20*i,-30,9.0-34);
			glTexCoord2f(0,0);
			glVertex3f(25.20*i,-30,14.50-34);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.50-15);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-24,5.0-15);
			glTexCoord2f(1.0,1.0);
			glVertex3f(25.20*i,-30,5.0-15);
			glTexCoord2f(0,0);
			glVertex3f(25.20*i,-30,14.50-15);
			glEnd();

			//ornamen dpan blkng
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.60);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-30,14.60);
			glTexCoord2f(1.0,1.0);
			glVertex3f(19.20*i,-30,14.60);
			glTexCoord2f(0,0);
			glVertex3f(19.20*i,-24,14.60);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.60-5.70);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-30,14.60-5.70);
			glTexCoord2f(1.0,1.0);
			glVertex3f(19.20*i,-30,14.60-5.70);
			glTexCoord2f(0,0);
			glVertex3f(19.20*i,-24,14.60-5.70);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.60-34.0);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-30,14.60-34.0);
			glTexCoord2f(1.0,1.0);
			glVertex3f(19.20*i,-30,14.60-34.0);
			glTexCoord2f(0,0);
			glVertex3f(19.20*i,-24,14.60-34.0);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(25.20*i,-24,14.60-39.70);
			glTexCoord2f(1.0,0.0);
			glVertex3f(25.20*i,-30,14.60-39.70);
			glTexCoord2f(1.0,1.0);
			glVertex3f(19.20*i,-30,14.60-39.70);
			glTexCoord2f(0,0);
			glVertex3f(19.20*i,-24,14.60-39.70);
			glEnd();
			glDisable(GL_TEXTURE_2D);
		}
	}
}

void tiangknnkiri(void)
{
	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,145.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,97.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,47.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,-3.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,-53.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,-100.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();


	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,145.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,97.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,47.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,-3.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,-53.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,-100.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,-146.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,-146.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.15,5.0,0.1);
	glTranslatef(124.0,-2.30,300.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.15,5.0,0.1);
	glTranslatef(124.0,-2.30,-300.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.15,5.0,0.1);
	glTranslatef(-123.0,-2.30,300.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.15,5.0,0.1);
	glTranslatef(-123.0,-2.30,-300.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	//batas tiang inti
	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-133.0);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-133.0);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-195.0);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-195.0);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-133.0+63);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-133.0+63);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-133.0+64.50*2);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-133.0+64.50*2);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-133.0+65.30*3);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-133.0+65.30*3);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-133.0+65.60*4);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-133.0+65.60*4);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-133.0+65.60*5);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-133.0+65.60*5);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();


	//tiang pling blkng knn1
	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(195.0,-2.30,-198.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	//tiang pling blkng knn2
	glPushMatrix();
	glScaled(0.15,5.0,0.1);
	glTranslatef(124.0,-2.30,-398.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(400.0,-2.30,-264.0);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	//tiang pling blkng kiri1
	glPushMatrix();
	glScaled(0.1,5.0,0.2);
	glTranslatef(-195.0,-2.30,-198.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	//tiang pling blkng kiri2
	glPushMatrix();
	glScaled(0.15,5.0,0.1);
	glTranslatef(-124.0,-2.30,-398.0);
	glColor3f(0.65,0.50,0.39);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();

	glPushMatrix();
	glScaled(0.05,5.0,0.15);
	glTranslatef(-400.0,-2.30,-264.0);
	glColor3f(0.52,0.37,0.26);
	glutSolidCube(7.35);
	glPopMatrix();
	glEnd();
}

void bangunkanankiri(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//glBegin(GL_POINTS);
	//glBegin(GL_LINE_STRIP);
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture2);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glColor3f(1.0,1.0,1.0);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0f, 1.0f);
		glVertex3f(19.10*i,-8.0,14.50);
		glTexCoord2f(1.0f, 1.0f);
		glVertex3f(19.10*i,-8.0,-25.0);
		glTexCoord2f(1.0f, 0.0f);
		glVertex3f(25.10*i,-13.50,-25.0);
		glTexCoord2f(0.0f, 0.0f);
		glVertex3f(25.10*i,-13.50,14.50);
		glEnd();
		glDisable(GL_TEXTURE_2D);

		glBegin(GL_LINE_LOOP);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(19.10*i,-8.0,14.50);
		glVertex3f(19.10*i,-8.0,-25.0);
		glVertex3f(25.10*i,-13.50,-25.0);
		glVertex3f(25.10*i,-13.50,14.50);
		glEnd();

		glBegin(GL_TRIANGLES);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(19.10*i,-8.0,14.50);
		glVertex3f(25.10*i,-13.50,14.50);
		glVertex3f(19.10*i,-13.50,14.50);
		glEnd();

		glBegin(GL_TRIANGLES);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(19.10*i,-8.0,-25.0);
		glVertex3f(25.10*i,-13.50,-25.0);
		glVertex3f(19.10*i,-13.50,-25.0);
		glEnd();

		//glBegin(GL_POINTS);

		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,14.50);
		glVertex3f(19.10*i,-13.50,14.50);
		glVertex3f(19.10*i,-30,14.50);
		glVertex3f(25.10*i,-30,14.50);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,-25.0);
		glVertex3f(19.10*i,-13.50,-25.0);
		glVertex3f(19.10*i,-30,-25.0);
		glVertex3f(25.10*i,-30,-25.0);
		glEnd();

		//bagian dekat pintu 1
		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,9.0);
		glVertex3f(19.10*i,-13.50,9.0);
		glVertex3f(19.10*i,-30,9.0);
		glVertex3f(25.10*i,-30,9.0);
		glEnd();

		//2
		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,-19.50);
		glVertex3f(19.10*i,-13.50,-19.50);
		glVertex3f(19.10*i,-30,-19.50);
		glVertex3f(25.10*i,-30,-19.50);
		glEnd();

		//3
		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,-0.50);
		glVertex3f(22.0*i,-13.50,-0.50);
		glVertex3f(22.0*i,-30,-0.50);
		glVertex3f(25.10*i,-30,-0.50);
		glEnd();

		//4
		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,-10.0);
		glVertex3f(22.0*i,-13.50,-10.0);
		glVertex3f(22.0*i,-30,-10.0);
		glVertex3f(25.10*i,-30,-10.0);
		glEnd();
		//end

		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,14.50);
		glVertex3f(25.10*i,-13.50,9.0);
		glVertex3f(25.10*i,-30,9.0);
		glVertex3f(25.10*i,-30,14.50);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,14.50-15);
		glVertex3f(25.10*i,-13.50,5.0-15);
		glVertex3f(25.10*i,-30,5.0-15);
		glVertex3f(25.10*i,-30,14.50-15);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.917647,0.917647,0.678431);
		glVertex3f(25.10*i,-13.50,14.50-34);
		glVertex3f(25.10*i,-13.50,9.0-34);
		glVertex3f(25.10*i,-30,9.0-34);
		glVertex3f(25.10*i,-30,14.50-34);
		glEnd();


		//jendela1
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(25.20*i,-23,11.50);
		glVertex3f(25.20*i,-23,9.50);
		glVertex3f(25.20*i,-16.50,9.50);
		glVertex3f(25.20*i,-15.50,10.50);
		glVertex3f(25.20*i,-16.50,11.50);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(25.20*i,-23,11.50);
		glVertex3f(25.20*i,-23,9.50);
		glVertex3f(25.20*i,-16.50,9.50);
		glVertex3f(25.20*i,-15.50,10.50);
		glVertex3f(25.20*i,-16.50,11.50);
		glEnd();

		//jendela2
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(25.20*i,-23,11.50-12.50);
		glVertex3f(25.20*i,-23,9.50-12.50);
		glVertex3f(25.20*i,-16.50,9.50-12.50);
		glVertex3f(25.20*i,-15.50,10.50-12.50);
		glVertex3f(25.20*i,-16.50,11.50-12.50);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(25.20*i,-23,11.50-12.50);
		glVertex3f(25.20*i,-23,9.50-12.50);
		glVertex3f(25.20*i,-16.50,9.50-12.50);
		glVertex3f(25.20*i,-15.50,10.50-12.50);
		glVertex3f(25.20*i,-16.50,11.50-12.50);
		glEnd();

		//jendela3
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(25.20*i,-23,11.50-19.0);
		glVertex3f(25.20*i,-23,9.50-19.0);
		glVertex3f(25.20*i,-16.50,9.50-19.0);
		glVertex3f(25.20*i,-15.50,10.50-19.0);
		glVertex3f(25.20*i,-16.50,11.50-19.0);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(25.20*i,-23,11.50-19.0);
		glVertex3f(25.20*i,-23,9.50-19.0);
		glVertex3f(25.20*i,-16.50,9.50-19.0);
		glVertex3f(25.20*i,-15.50,10.50-19.0);
		glVertex3f(25.20*i,-16.50,11.50-19.0);
		glEnd();

		//jendela4
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(25.20*i,-23,11.50-31.50);
		glVertex3f(25.20*i,-23,9.50-31.50);
		glVertex3f(25.20*i,-16.50,9.50-31.50);
		glVertex3f(25.20*i,-15.50,10.50-31.50);
		glVertex3f(25.20*i,-16.50,11.50-31.50);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(25.20*i,-23,11.50-31.50);
		glVertex3f(25.20*i,-23,9.50-31.50);
		glVertex3f(25.20*i,-16.50,9.50-31.50);
		glVertex3f(25.20*i,-15.50,10.50-31.50);
		glVertex3f(25.20*i,-16.50,11.50-31.50);
		glEnd();

		//jendela bagian depan
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(21.10*i,-23,14.60);
		glVertex3f(23.10*i,-23,14.60);
		glVertex3f(23.10*i,-16.50,14.60);
		glVertex3f(22.10*i,-15.50,14.60);
		glVertex3f(21.10*i,-16.50,14.60);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(21.10*i,-23,14.60);
		glVertex3f(23.10*i,-23,14.60);
		glVertex3f(23.10*i,-16.50,14.60);
		glVertex3f(22.10*i,-15.50,14.60);
		glVertex3f(21.10*i,-16.50,14.60);
		glEnd();

		//jendela bagian belakang
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex3f(21.10*i,-23,-25.10);
		glVertex3f(23.10*i,-23,-25.10);
		glVertex3f(23.10*i,-16.50,-25.10);
		glVertex3f(22.10*i,-15.50,-25.10);
		glVertex3f(21.10*i,-16.50,-25.10);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.65,0.50,0.39);
		glVertex3f(21.10*i,-23,-25.10);
		glVertex3f(23.10*i,-23,-25.10);
		glVertex3f(23.10*i,-16.50,-25.10);
		glVertex3f(22.10*i,-15.50,-25.10);
		glVertex3f(21.10*i,-16.50,-25.10);
		glEnd();

		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		//ornamen bag 1
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.10*i,-13.50,9.0);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.10*i,-16.50,9.0);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.10*i,-15.50,4.25);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.10*i,-16.50,-0.50);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.10*i,-13.50,-0.50);
		glEnd();

		//ornamen bag 2
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.10*i,-13.50,9.0-19);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.10*i,-16.50,9.0-19);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.10*i,-15.50,4.25-19);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.10*i,-16.50,-0.50-19);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.10*i,-13.50,-0.50-19);
		glEnd();

		//ornamen bag 3
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.10*i,-13.50,9.0);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.10*i,-16.50,9.0);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.20*i,-15.30,10.50);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.20*i,-16.50,12.0);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.20*i,-16.50,14.50);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.20*i,-13.50,14.50);
		glEnd();

		//ornamen bag 4
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.20*i,-13.50,14.50);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.20*i,-16.50,14.50);
		glTexCoord2f(1.0,1.0);
		glVertex3f(23.30*i,-16.50,14.60);
		glTexCoord2f(0.0,0.0);
		glVertex3f(22.10*i,-15.30,14.60);
		glTexCoord2f(1.0,0.0);
		glVertex3f(21.0*i,-16.50,14.60);
		glTexCoord2f(1.0,1.0);
		glVertex3f(19.0*i,-16.50,14.60);
		glTexCoord2f(0.0,0.0);
		glVertex3f(19.0*i,-13.50,14.50);
		glEnd();

		//ornamen bag blkng
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.20*i,-13.50,-25.10);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.20*i,-16.50,-25.10);
		glTexCoord2f(1.0,1.0);
		glVertex3f(23.30*i,-16.50,-25.10);
		glTexCoord2f(0.0,0.0);
		glVertex3f(22.10*i,-15.30,-25.10);
		glTexCoord2f(1.0,0.0);
		glVertex3f(21.0*i,-16.50,-25.10);
		glTexCoord2f(1.0,1.0);
		glVertex3f(19.0*i,-16.50,-25.10);
		glTexCoord2f(0.0,0.0);
		glVertex3f(19.0*i,-13.50,-25.10);
		glEnd();

		//ornamen bag tngah
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.20*i,-13.50,14.60-15);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.20*i,-16.50,14.60-15);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.30*i,-15.30,10.50-12.50);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.30*i,-16.50,-3.50);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.30*i,-13.50,-3.50);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.30*i,-16.50,-3.50);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.30*i,-13.50,-3.50);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.30*i,-13.50,-7.0);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.30*i,-16.50,-7.0);
		glEnd();

		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.30*i,-13.50,-7.0);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.30*i,-16.50,-7.0);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.30*i,-15.30,10.50-19.0);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.20*i,-16.50,5.0-15);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.20*i,-13.50,5.0-15);
		glEnd();

		//ornamen terakhir
		//glBegin(GL_POINTS);
		glBegin(GL_POLYGON);
		glColor3f(1.0,1.0,1.0);
		glTexCoord2f(0.0,1.0);
		glVertex3f(25.10*i,-13.50,-0.50-19);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.10*i,-16.50,-0.50-19);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.20*i,-15.30,10.50-31.50);
		glTexCoord2f(0.0,0.0);
		glVertex3f(25.20*i,-16.50,-0.50-22.0);
		glTexCoord2f(1.0,0.0);
		glVertex3f(25.20*i,-16.50,-0.50-24.60);
		glTexCoord2f(1.0,1.0);
		glVertex3f(25.20*i,-13.50,-0.50-24.60);
		glEnd();

		}
	}
	glDisable(GL_TEXTURE_2D);
}


void rumput(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture1);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glClearColor(0.10, 0.10, 0.10, 0.10);
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_POLYGON);
			glTexCoord2f(0.0,1.0);
			glVertex3f(19.0*i,-30.0,14.50);
			glTexCoord2f(1.0,0.0);
			glVertex3f(19.0*i,-30.0,30.0);
			glTexCoord2f(1.0,1.0);
			glVertex3f(25.0*i,-30.0,30.0);
			glTexCoord2f(0.0,0.0);
			glVertex3f(25.0*i,-30.0,14.50);
			glEnd();
		}
	}

	glDisable(GL_TEXTURE_2D);
}

void ground(void)
{
	glBegin(GL_POLYGON);
	glColor3f(0.40,0.40,0.40);
	glVertex3f(45.0,-30.10,55.0);
	glVertex3f(-45.0,-30.10,55.0);
	glVertex3f(-45.0,-30.10,-55.0);
	glVertex3f(45.0,-30.10,-55.0);
	glEnd();
}

void bgnblkng(void)
{

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture2);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			//bagian kanankiri
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(1.0,0.0);
			glVertex3f(0.0*i,31.0,-30.0);
			glTexCoord2f(1.0,1.0);
			glVertex3f(10.0*i,17.30,-30.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(10.0*i,17.30,-40.0);
			glTexCoord2f(0.0,0.0);
			glVertex3f(0.0*i,31.0,-40.0);
			glEnd();

			//bagian d kanankiri
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.0*i,0.5,-30.0);
			glTexCoord2f(1.0,1.0);
			glVertex3f(10.0*i,0.5,-40.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(18.0*i,-8.80,-40.0);
			glTexCoord2f(0.0,0.0);
			glVertex3f(18.0*i,-8.80,-30.0);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			//bagian v kanankiri
			glBegin(GL_POLYGON);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(10.0*i,17.30,-30.0);
			glVertex3f(10.0*i,17.30,-40.0);
			glVertex3f(10.0*i,0.5,-40.0);
			glVertex3f(10.0*i,0.5,-30.0);
			glEnd();

			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, texture3);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			//jendelabagatasblkng
			//1
			glColor3f(1.0,1.0,1.0);
			glBegin(GL_POLYGON);
			glTexCoord2f(0.0,1.0);
			glVertex3f(10.10*i,2,-38.50);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.10*i,10,-38.50);
			glTexCoord2f(1.0,1.0);
			glVertex3f(10.10*i,11,-37.50);
			glTexCoord2f(0.0,0.0);
			glVertex3f(10.10*i,10,-36.50);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.10*i,2,-36.50);
			glEnd();

			//2
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(10.10*i,2,-38.50+2.50);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.10*i,10,-38.50+2.50);
			glTexCoord2f(1.0,1.0);
			glVertex3f(10.10*i,11,-37.50+2.50);
			glTexCoord2f(0.0,0.0);
			glVertex3f(10.10*i,10,-36.50+2.50);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.10*i,2,-36.50+2.50);
			glEnd();

			//3
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glTexCoord2f(0.0,1.0);
			glVertex3f(10.10*i,2,-38.50+5.0);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.10*i,10,-38.50+5.0);
			glTexCoord2f(1.0,1.0);
			glVertex3f(10.10*i,11,-37.50+5.0);
			glTexCoord2f(0.0,0.0);
			glVertex3f(10.10*i,10,-36.50+5.0);
			glTexCoord2f(1.0,0.0);
			glVertex3f(10.10*i,2,-36.50+5.0);
			glEnd();
			glDisable(GL_TEXTURE_2D);

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(10.15*i,2,-38.50);
			glVertex3f(10.15*i,10,-38.50);
			glVertex3f(10.15*i,11,-37.50);
			glVertex3f(10.15*i,10,-36.50);
			glVertex3f(10.15*i,2,-36.50);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(10.15*i,2,-38.50+2.50);
			glVertex3f(10.15*i,10,-38.50+2.50);
			glVertex3f(10.15*i,11,-37.50+2.50);
			glVertex3f(10.15*i,10,-36.50+2.50);
			glVertex3f(10.15*i,2,-36.50+2.50);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(10.15*i,2,-38.50+5.0);
			glVertex3f(10.15*i,10,-38.50+5.0);
			glVertex3f(10.15*i,11,-37.50+5.0);
			glVertex3f(10.15*i,10,-36.50+5.0);
			glVertex3f(10.15*i,2,-36.50+5.0);
			glEnd();


			//bagian dekat jendela
			glBegin(GL_POLYGON);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(19.0*i,-8.80,-30.0);
			glVertex3f(19.0*i,-8.80,-40.0);
			glVertex3f(19.0*i,-30.0,-40.0);
			glVertex3f(19.0*i,-30.0,-30.0);
			glEnd();

			//jendela 1
			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(19.10*i,-23.0,-31.0);
			glVertex3f(19.10*i,-13.0,-31.0);
			glVertex3f(19.10*i,-13,-31.0-3);
			glVertex3f(19.10*i,-23,-31.0-3);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.10*i,-23.0,-31.0);
			glVertex3f(19.10*i,-13.0,-31.0);
			glVertex3f(19.10*i,-13,-31.0-3);
			glVertex3f(19.10*i,-23,-31.0-3);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(19.10*i,-12.0,-31.0);
			glVertex3f(19.10*i,-12,-31.0-3);
			glVertex3f(19.10*i,-12+2,-31.0-3);
			glVertex3f(19.10*i,-12+2,-31.0);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.10*i,-12.0,-31.0);
			glVertex3f(19.10*i,-12,-31.0-3);
			glVertex3f(19.10*i,-12+2,-31.0-3);
			glVertex3f(19.10*i,-12+2,-31.0);
			glEnd();

			//jendela 2
			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(19.10*i,-23.0,-31.0-4);
			glVertex3f(19.10*i,-13.0,-31.0-4);
			glVertex3f(19.10*i,-13,-31.0-3-4);
			glVertex3f(19.10*i,-23,-31.0-3-4);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.10*i,-23.0,-31.0-4);
			glVertex3f(19.10*i,-13.0,-31.0-4);
			glVertex3f(19.10*i,-13,-31.0-3-4);
			glVertex3f(19.10*i,-23,-31.0-3-4);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(19.10*i,-12.0,-31.0-4);
			glVertex3f(19.10*i,-12,-31.0-3-4);
			glVertex3f(19.10*i,-12+2,-31.0-3-4);
			glVertex3f(19.10*i,-12+2,-31.0-4);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.10*i,-12.0,-31.0-4);
			glVertex3f(19.10*i,-12,-31.0-3-4);
			glVertex3f(19.10*i,-12+2,-31.0-3-4);
			glVertex3f(19.10*i,-12+2,-31.0-4);
			glEnd();

			glBegin(GL_LINES);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(19.15*i,-23.0,-32.50);
			glVertex3f(19.15*i,-13.0,-32.50);

			glVertex3f(19.15*i,-23.0,-36.50);
			glVertex3f(19.15*i,-13.0,-36.50);

			glVertex3f(19.15*i,-12.0,-32.50);
			glVertex3f(19.15*i,-10.0,-32.50);

			glVertex3f(19.15*i,-12.0,-36.50);
			glVertex3f(19.15*i,-10.0,-36.50);
			glEnd();

			//bagian h_1 kanankiri
			glBegin(GL_POLYGON);
			glColor3f(1.0,1.0,1.0);
			glVertex3f(18.0*i,-8.80,-40.0);
			glVertex3f(18.0*i,-8.80,-30.0);
			glVertex3f(19.0*i,-8.80,-30.0);
			glVertex3f(19.0*i,-8.80,-40.0);
			glEnd();

			//bagian paling belakang 1 knniri
			//glBegin(GL_POINTS);
			glBegin(GL_POLYGON);
			glColor3f(0.917647,0.917647,0.678431);
			glVertex3f(10.0*i,17.5,-40.0);
			glVertex3f(18.0*i,6.50,-40.0);
			glVertex3f(18.0*i,-30.0,-40.0);
			glVertex3f(10.0*i,-30.0,-40.0);
			glEnd();

			//pola
			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(17.0*i,-4,-40.10);
			glVertex3f(16.0*i,-3,-40.10);
			glVertex3f(16.0*i,3,-40.10);
			glVertex3f(16.50*i,4,-40.10);
			glVertex3f(17.0*i,3,-40.10);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(17.0*i,-4,-39.90);
			glVertex3f(16.0*i,-3,-39.90);
			glVertex3f(16.0*i,3,-39.90);
			glVertex3f(16.50*i,4,-39.90);
			glVertex3f(17.0*i,3,-39.90);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(15.50*i,-4+1.40,-40.10);
			glVertex3f(14.50*i,-3+1.40,-40.10);
			glVertex3f(14.50*i,3+1.40,-40.10);
			glVertex3f(15.0*i,4+1.40,-40.10);
			glVertex3f(15.50*i,3+1.40,-40.10);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(15.50*i,-4+1.40,-39.90);
			glVertex3f(14.50*i,-3+1.40,-39.90);
			glVertex3f(14.50*i,3+1.40,-39.90);
			glVertex3f(15.0*i,4+1.40,-39.90);
			glVertex3f(15.50*i,3+1.40,-39.90);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(14.0*i,-4+2.80,-40.10);
			glVertex3f(13.0*i,-3+2.80,-40.10);
			glVertex3f(13.0*i,3+2.80,-40.10);
			glVertex3f(13.50*i,4+2.80,-40.10);
			glVertex3f(14.0*i,3+2.80,-40.10);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(14.0*i,-4+2.80,-39.90);
			glVertex3f(13.0*i,-3+2.80,-39.90);
			glVertex3f(13.0*i,3+2.80,-39.90);
			glVertex3f(13.50*i,4+2.80,-39.90);
			glVertex3f(14.0*i,3+2.80,-39.90);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(12.50*i,-4+4.20,-40.10);
			glVertex3f(11.50*i,-3+4.20,-40.10);
			glVertex3f(11.50*i,3+4.20,-40.10);
			glVertex3f(12.0*i,4+4.20,-40.10);
			glVertex3f(12.50*i,3+4.20,-40.10);
			glEnd();

			glBegin(GL_POLYGON);
			glColor3f(0.858824,0.858824,0.439216);
			glVertex3f(12.50*i,-4+4.20,-39.90);
			glVertex3f(11.50*i,-3+4.20,-39.90);
			glVertex3f(11.50*i,3+4.20,-39.90);
			glVertex3f(12.0*i,4+4.20,-39.90);
			glVertex3f(12.50*i,3+4.20,-39.90);
			glEnd();

			//ventilasi blkng
			glBegin(GL_POLYGON);
			glColor3f(0.52,0.37,0.26);
			glVertex3f(14.0*i,-2,-30.10);
			glVertex3f(12.0*i,-2,-30.10);
			glVertex3f(12.0*i,5,-30.10);
			glVertex3f(13.0*i,6,-30.10);
			glVertex3f(14.0*i,5,-30.10);
			glEnd();

			glBegin(GL_LINE_LOOP);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(14.0*i,-2,-30.10);
			glVertex3f(12.0*i,-2,-30.10);
			glVertex3f(12.0*i,5,-30.10);
			glVertex3f(13.0*i,6,-30.10);
			glVertex3f(14.0*i,5,-30.10);
			glEnd();
		}
	}

	//bagian paling belakang 1
	//glBegin(GL_POINTS);
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(0.0,31.0+2,-40.0);
	glVertex3f(10.0,17.30+2,-40.0);
	glVertex3f(10.0,-30.0,-40.0);
	glVertex3f(-10.0,-30.0,-40.0);
	glVertex3f(-10.0,17.30+2,-40.0);
	glEnd();
}

void atap(void)
{
	//atap knn
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	//glBegin(GL_POINTS);
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glTexCoord2f(1.0,0.0);
	glVertex3f(0.0,31.0,30.0);
	glTexCoord2f(1.0,1.0);
	glVertex3f(18.0,6.30,30.0);
	glTexCoord2f(0.0,1.0);
	glVertex3f(18.0,6.30,-30.0);
	glTexCoord2f(0.0,0.0);
	glVertex3f(0.0,31.0,-30.0);
	glEnd();
	glDisable(GL_TEXTURE_2D);

	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(18.0,6.30,30.0);
	glVertex3f(19.0,6.30,30.0);
	glVertex3f(19.0,6.30,-30.0);
	glVertex3f(18.0,6.30,-30.0);
	glEnd();

	//atap kiri
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	//glBegin(GL_POINTS);
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,1.0);
	glTexCoord2f(1.0,0.0);
	glVertex3f(0.0,31.0,30.0);
	glTexCoord2f(1.0,1.0);
	glVertex3f(-18.0,6.30,30.0);
	glTexCoord2f(0.0,1.0);
	glVertex3f(-18.0,6.30,-30.0);
	glTexCoord2f(0.0,0.0);
	glVertex3f(0.0,31.0,-30.0);
	glEnd();
	glDisable(GL_TEXTURE_2D);

	//glBegin(GL_POINTS);
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(-18.0,6.30,30.0);
	glVertex3f(-19.0,6.30,30.0);
	glVertex3f(-19.0,6.30,-30.0);
	glVertex3f(-18.0,6.30,-30.0);
	glEnd();
}

void pintuknnkiri(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//pintu knnkiri 1
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.52,0.37,0.26);
			glVertex3f(19.10*i,-25.0,6.50);
			glVertex3f(19.10*i,-25.0,2.0);
			glVertex3f(19.10*i,-18.0,2.0);
			glVertex3f(19.15*i,-17.0,4.25);
			glVertex3f(19.10*i,-18.0,6.50);
			glEnd();

			glBegin(GL_LINE_LOOP);
			//glBegin(GL_POINTS);
			glColor3f(0.36,0.25,0.20);
			glVertex3f(19.10*i,-25.0,6.50);
			glVertex3f(19.10*i,-25.0,2.0);
			glVertex3f(19.10*i,-18.0,2.0);
			glVertex3f(19.15*i,-17.0,4.25);
			glVertex3f(19.10*i,-18.0,6.50);
			glEnd();

			//gris pintu knnkiri 1
			//glBegin(GL_POINTS);
			glBegin(GL_LINES);
			glColor3f(0.36,0.25,0.20);
			glVertex3f(19.15*i,-25.0,4.25);
			glVertex3f(19.15*i,-17.0,4.25);

			glVertex3f(19.15*i,-18.50,6.50);
			glVertex3f(19.15*i,-18.50,2.0);

			glVertex3f(19.15*i,-24.0,6.50);
			glVertex3f(19.15*i,-24.0,2.0);

			glVertex3f(19.15*i,-20.50,6.50);
			glVertex3f(19.15*i,-20.50,2.0);

			glVertex3f(19.15*i,-21.50,6.50);
			glVertex3f(19.15*i,-21.50,2.0);

			glEnd();


			//pintu knnkiri 2
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.52,0.37,0.26);
			glVertex3f(19.10*i,-25.0,6.50-19.50);
			glVertex3f(19.10*i,-25.0,2.0-19.50);
			glVertex3f(19.10*i,-18.0,2.0-19.50);
			glVertex3f(19.15*i,-17.0,4.25-19.50);
			glVertex3f(19.10*i,-18.0,6.50-19.50);
			glEnd();

			glBegin(GL_LINE_LOOP);
			//glBegin(GL_POINTS);
			glColor3f(0.36,0.25,0.20);
			glVertex3f(19.10*i,-25.0,6.50-19.50);
			glVertex3f(19.10*i,-25.0,2.0-19.50);
			glVertex3f(19.10*i,-18.0,2.0-19.50);
			glVertex3f(19.15*i,-17.0,4.25-19.50);
			glVertex3f(19.10*i,-18.0,6.50-19.50);
			glEnd();

			//gris pintu knnkiri 2
			//glBegin(GL_POINTS);
			glBegin(GL_LINES);
			glColor3f(0.36,0.25,0.20);
			glVertex3f(19.15*i,-25.0,4.25-19.50);
			glVertex3f(19.15*i,-17.0,4.25-19.50);

			glVertex3f(19.15*i,-18.50,6.50-19.50);
			glVertex3f(19.15*i,-18.50,2.0-19.50);

			glVertex3f(19.15*i,-24.0,6.50-19.50);
			glVertex3f(19.15*i,-24.0,2.0-19.50);

			glVertex3f(19.15*i,-20.50,6.50-19.50);
			glVertex3f(19.15*i,-20.50,2.0-19.50);

			glVertex3f(19.15*i,-21.50,6.50-19.50);
			glVertex3f(19.15*i,-21.50,2.0-19.50);
			glEnd();
		}
	}
}

void pintudpn(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
		//kanankiri
		glBegin(GL_POLYGON);
		//glBegin(GL_POINTS);
		glColor3f(0.52,0.37,0.26);
		glVertex3f(8*i,-25,25.10);
		glVertex3f(5.50*i,-25,25.10);
		glVertex3f(5.50*i,-25+6,25.10);
		glVertex3f(6.80*i,-25+7,25.10);
		glVertex3f(8*i,-25+6,25.10);
		glEnd();

		glBegin(GL_LINE_LOOP);
		//glBegin(GL_POINTS);
		glColor3f(0.36,0.25,0.20);
		glVertex3f(8*i,-25,25.10);
		glVertex3f(5.50*i,-25,25.10);
		glVertex3f(5.50*i,-25+6,25.10);
		glVertex3f(6.80*i,-25+7,25.10);
		glVertex3f(8*i,-25+6,25.10);
		glEnd();

		//garis
		glBegin(GL_LINES);
		glColor3f(0.36,0.25,0.20);
		glVertex3f(5.50*i,-25+6,25.20);
		glVertex3f(8*i,-25+6,25.20);

		glVertex3f(5.50*i,-25,25.20);
		glVertex3f(8*i,-25,25.20);

		glVertex3f(5.50*i,-24,25.20);
		glVertex3f(8*i,-24,25.20);

		glVertex3f(5.50*i,-22,25.20);
		glVertex3f(8*i,-22,25.20);

		glVertex3f(5.50*i,-20.50,25.20);
		glVertex3f(8*i,-20.50,25.20);
		glEnd();
		}
	}
	//tengah
	//glBegin(GL_POINTS);
	glBegin(GL_POLYGON);
	glColor3f(0.52,0.37,0.26);
	glVertex3f(3.0,-25,25.10);
	glVertex3f(-3.0,-25,25.10);
	glVertex3f(-3.0,-25+7,25.10);
	glVertex3f(-1.0,-25+9,25.10);
	glVertex3f(1.0,-25+9,25.10);
	glVertex3f(3.0,-25+7,25.10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.36,0.25,0.20);
	glVertex3f(3.0,-25,25.15);
	glVertex3f(-3.0,-25,25.15);
	glVertex3f(-3.0,-25+7,25.15);
	glVertex3f(-1.0,-25+9,25.15);
	glVertex3f(1.0,-25+9,25.15);
	glVertex3f(3.0,-25+7,25.15);
	glEnd();

	//glBegin(GL_POINTS);
	glBegin(GL_LINES);
	glColor3f(0.36,0.25,0.20);
	glVertex3f(0.0,-16.0,25.15);
	glVertex3f(0.0,-25.0,25.15);

	glVertex3f(-3.0,-19,25.15);
	glVertex3f(3.0,-19,25.15);

	glVertex3f(-3.0,-21,25.15);
	glVertex3f(3.0,-21,25.15);

	glVertex3f(-3.0,-23,25.15);
	glVertex3f(3.0,-23,25.15);

	glVertex3f(-3.0,-24.50,25.15);
	glVertex3f(3.0,-24.50,25.15);
	glEnd();
}

void tangga(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
		//tangga knnkiri
		//glBegin(GL_POINTS);
		//glBegin(GL_LINE_STRIP);
		glBegin(GL_POLYGON);
		glColor3f(0.137255,0.556863,0.137255);
		glVertex3f(19.10*i,-25,9.0);
		glVertex3f(19.10*i,-25,-20.0);
		glVertex3f(22.0*i,-25,-20.0);
		glVertex3f(22.0*i,-25,9.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.184314,0.309804,0.184314);
		glVertex3f(22.0*i,-25,-20.0);
		glVertex3f(22.0*i,-25,9.0);
		glVertex3f(22.0*i,-25.80,9.0);
		glVertex3f(22.0*i,-25.80,-20.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.137255,0.556863,0.137255);
		glVertex3f(22.0*i,-25.80,9.0);
		glVertex3f(22.0*i,-25.80,-20.0);
		glVertex3f(22.50*i,-25.80,-20.0);
		glVertex3f(22.50*i,-25.80,9.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.184314,0.309804,0.184314);
		glVertex3f(22.50*i,-25.80,-20.0);
		glVertex3f(22.50*i,-25.80,9.0);
		glVertex3f(22.50*i,-26.60,9.0);
		glVertex3f(22.50*i,-26.60,-20.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.137255,0.556863,0.137255);
		glVertex3f(22.50*i,-26.60,9.0);
		glVertex3f(22.50*i,-26.60,-20.0);
		glVertex3f(23.0*i,-26.60,-20.0);
		glVertex3f(23.0*i,-26.60,9.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.184314,0.309804,0.184314);
		glVertex3f(23.0*i,-26.60,-20.0);
		glVertex3f(23.0*i,-26.60,9.0);
		glVertex3f(23.0*i,-27.40,9.0);
		glVertex3f(23.0*i,-27.40,-20.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.137255,0.556863,0.137255);
		glVertex3f(23.0*i,-27.40,9.0);
		glVertex3f(23.0*i,-27.40,-20.0);
		glVertex3f(23.50*i,-27.40,-20.0);
		glVertex3f(23.50*i,-27.40,9.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.184314,0.309804,0.184314);
		glVertex3f(23.50*i,-27.40,-20.0);
		glVertex3f(23.50*i,-27.40,9.0);
		glVertex3f(23.50*i,-28.20,9.0);
		glVertex3f(23.50*i,-28.20,-20.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.137255,0.556863,0.137255);
		glVertex3f(23.50*i,-28.20,9.0);
		glVertex3f(23.50*i,-28.20,-20.0);
		glVertex3f(24.0*i,-28.20,-20.0);
		glVertex3f(24.0*i,-28.20,9.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.184314,0.309804,0.184314);
		glVertex3f(24.0*i,-28.20,-20.0);
		glVertex3f(24.0*i,-28.20,9.0);
		glVertex3f(24.0*i,-29.0,9.0);
		glVertex3f(24.0*i,-29.0,-20.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.137255,0.556863,0.137255);
		glVertex3f(24.0*i,-29.0,9.0);
		glVertex3f(24.0*i,-29.0,-20.0);
		glVertex3f(24.50*i,-29.0,-20.0);
		glVertex3f(24.50*i,-29.0,9.0);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(0.184314,0.309804,0.184314);
		glVertex3f(24.50*i,-29.0,-20.0);
		glVertex3f(24.50*i,-29.0,9.0);
		glVertex3f(24.50*i,-30.0,9.0);
		glVertex3f(24.50*i,-30.0,-20.0);
		glEnd();



		}
	}

	//tngga dpn
	//glBegin(GL_LINE_STRIP);
	//glBegin(GL_POINTS);
	glBegin(GL_POLYGON);
	glColor3f(0.137255,0.556863,0.137255);
	glVertex3f(10.0,-25,25.10);
	glVertex3f(-10.0,-25,25.10);
	glVertex3f(-10.0,-25,27.50);
	glVertex3f(10.0,-25,27.50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.184314,0.309804,0.184314);
	glVertex3f(-10.0,-25,27.50);
	glVertex3f(10.0,-25,27.50);
	glVertex3f(10.0,-25.80,27.50);
	glVertex3f(-10.0,-25.80,27.50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.137255,0.556863,0.137255);
	glVertex3f(10.0,-25.80,27.50);
	glVertex3f(-10.0,-25.80,27.50);
	glVertex3f(-10.0,-25.80,28.0);
	glVertex3f(10.0,-25.80,28.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.184314,0.309804,0.184314);
	glVertex3f(-10.0,-25.80,28.0);
	glVertex3f(10.0,-25.80,28.0);
	glVertex3f(10.0,-26.60,28.0);
	glVertex3f(-10.0,-26.60,28.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.137255,0.556863,0.137255);
	glVertex3f(10.0,-26.60,28.0);
	glVertex3f(-10.0,-26.60,28.0);
	glVertex3f(-10.0,-26.60,28.50);
	glVertex3f(10.0,-26.60,28.50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.184314,0.309804,0.184314);
	glVertex3f(-10.0,-26.60,28.50);
	glVertex3f(10.0,-26.60,28.50);
	glVertex3f(10.0,-27.40,28.50);
	glVertex3f(-10.0,-27.40,28.50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.137255,0.556863,0.137255);
	glVertex3f(10.0,-27.40,28.50);
	glVertex3f(-10.0,-27.40,28.50);
	glVertex3f(-10.0,-27.40,29.0);
	glVertex3f(10.0,-27.40,29.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.184314,0.309804,0.184314);
	glVertex3f(-10.0,-27.40,29.0);
	glVertex3f(10.0,-27.40,29.0);
	glVertex3f(10.0,-28.20,29.0);
	glVertex3f(-10.0,-28.20,29.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.137255,0.556863,0.137255);
	glVertex3f(10.0,-28.20,29.0);
	glVertex3f(-10.0,-28.20,29.0);
	glVertex3f(-10.0,-28.20,29.50);
	glVertex3f(10.0,-28.20,29.50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.184314,0.309804,0.184314);
	glVertex3f(-10.0,-28.20,29.50);
	glVertex3f(10.0,-28.20,29.50);
	glVertex3f(10.0,-29.0,29.50);
	glVertex3f(-10.0,-29.0,29.50);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.137255,0.556863,0.137255);
	glVertex3f(10.0,-29.0,29.50);
	glVertex3f(-10.0,-29.0,29.50);
	glVertex3f(-10.0,-29.0,30.0);
	glVertex3f(10.0,-29.0,30.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.184314,0.309804,0.184314);
	glVertex3f(-10.0,-29.0,30.0);
	glVertex3f(10.0,-29.0,30.0);
	glVertex3f(10.0,-30.0,30.0);
	glVertex3f(-10.0,-30.0,30.0);
	glEnd();
}

void lain(void)
{
	int a= 0;
	for (int i = 0; i < 2; i++)
	{
		a=20*i;
	glBegin(GL_POINTS);
	glColor3f(1.0,1.0,1.0);
	glVertex3f(3.0,-25,55.0-a);
	glVertex3f(3.0,-25,50.0-a);
	glVertex3f(3.0,-20,50.0-a);
	glVertex3f(3.0,-20,55.0-a);
	glEnd();

	}

}

void salib(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
	//bag 1
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(0.0*i,31,22.0);
	glVertex3f(2.50*i,28,22.0);
	glVertex3f(2.50*i,40,22.0);
	glVertex3f(0.0*i,40,22.0);
	glEnd();

	//bag2
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(2.50*i,28,22.0);
	glVertex3f(3.0*i,27,20.50);
	glVertex3f(3.0*i,40,20.50);
	glVertex3f(2.50*i,40,22.0);
	glEnd();

	//bag3
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(3.0*i,27,20.50);
	glVertex3f(3.0*i,27,17.50);
	glVertex3f(3.0*i,40,17.50);
	glVertex3f(3.0*i,40,20.50);
	glEnd();

	//bag4
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(3.0*i,27,17.50);
	glVertex3f(2.50*i,28,16.0);
	glVertex3f(2.50*i,40,16.0);
	glVertex3f(3.0*i,40,17.50);
	glEnd();

	//bag5
	glBegin(GL_POLYGON);
	glColor3f(0.917647,0.917647,0.678431);
	glVertex3f(2.50*i,28,16.0);
	glVertex3f(0.0*i,31,16.0);
	glVertex3f(0.0*i,40,16.0);
	glVertex3f(2.50*i,40,16.0);
	glEnd();
		}
	}

	//titik kerucut atas
	//glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
		glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.556863,0.419608,0.137255);
		glVertex3f(0.0*i,48,19.0);

		glVertex3f(0.0*i,40,22.0);
		glVertex3f(2.50*i,40,22.0);

		glVertex3f(3.0*i,40,20.50);
		glVertex3f(3.0*i,40,17.50);

		glVertex3f(2.50*i,40,16.0);
		glVertex3f(0.0*i,40,16.0);
	glEnd();
		}
	}

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			glBegin(GL_LINE_STRIP);
		glColor3f(0.8,0.498039,0.196078);
		glVertex3f(0.0*i,48,19.0);
		glVertex3f(0.0*i,52,19.0);
		glVertex3f(1.0*i,52,19.0);
		glVertex3f(1.0*i,52.2,19.0);
		glVertex3f(0.0*i,52.2,19.0);
		glVertex3f(0.0*i,54,19.0);
		glEnd();
		}
	}



}


void jendelaatas(void)
{
	//bagian depan
	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.80,32,22.10);
	glVertex3f(-0.80,32,22.10);
	glVertex3f(-0.80,34,22.10);
	glVertex3f(0.80,34,22.10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	glColor3f(0.65,0.50,0.39);
	glVertex3f(0.80,32,22.10);
	glVertex3f(-0.80,32,22.10);
	glVertex3f(-0.80,34,22.10);
	glVertex3f(0.80,34,22.10);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.80,32+2.50,22.10);
	glVertex3f(-0.80,32+2.50,22.10);
	glVertex3f(-0.80,34+2.50,22.10);
	glVertex3f(0.80,34+2.50,22.10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	glColor3f(0.65,0.50,0.39);
	glVertex3f(0.80,32+2.50,22.10);
	glVertex3f(-0.80,32+2.50,22.10);
	glVertex3f(-0.80,34+2.50,22.10);
	glVertex3f(0.80,34+2.50,22.10);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.80,32+5,22.10);
	glVertex3f(-0.80,32+5,22.10);
	glVertex3f(-0.80,33+5,22.10);
	glVertex3f(0.0,33+6,22.10);
	glVertex3f(0.80,33+5,22.10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	glColor3f(0.65,0.50,0.39);
	glVertex3f(0.80,32+5,22.10);
	glVertex3f(-0.80,32+5,22.10);
	glVertex3f(-0.80,33+5,22.10);
	glVertex3f(0.0,33+6,22.10);
	glVertex3f(0.80,33+5,22.10);
	glEnd();

	//bagian belakng
	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.80,32,15.90);
	glVertex3f(-0.80,32,15.90);
	glVertex3f(-0.80,34,15.90);
	glVertex3f(0.80,34,15.90);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	glColor3f(0.65,0.50,0.39);
	glVertex3f(0.80,32,15.90);
	glVertex3f(-0.80,32,15.90);
	glVertex3f(-0.80,34,15.90);
	glVertex3f(0.80,34,15.90);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.80,32+2.50,15.90);
	glVertex3f(-0.80,32+2.50,15.90);
	glVertex3f(-0.80,34+2.50,15.90);
	glVertex3f(0.80,34+2.50,15.90);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	glColor3f(0.65,0.50,0.39);
	glVertex3f(0.80,32+2.50,15.90);
	glVertex3f(-0.80,32+2.50,15.90);
	glVertex3f(-0.80,34+2.50,15.90);
	glVertex3f(0.80,34+2.50,15.90);
	glEnd();

	glBegin(GL_POLYGON);
	//glBegin(GL_POINTS);
	glColor3f(0.0,0.0,0.0);
	glVertex3f(0.80,32+5,15.90);
	glVertex3f(-0.80,32+5,15.90);
	glVertex3f(-0.80,33+5,15.90);
	glVertex3f(0.0,33+6,15.90);
	glVertex3f(0.80,33+5,15.90);
	glEnd();

	glBegin(GL_LINE_LOOP);
	//glBegin(GL_POINTS);
	glColor3f(0.65,0.50,0.39);
	glVertex3f(0.80,32+5,15.90);
	glVertex3f(-0.80,32+5,15.90);
	glVertex3f(-0.80,33+5,15.90);
	glVertex3f(0.0,33+6,15.90);
	glVertex3f(0.80,33+5,15.90);
	glEnd();

	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			//bagian knn
			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(3.10*i,32,19.60);
			glVertex3f(3.10*i,32,18.0);
			glVertex3f(3.10*i,34,18.0);
			glVertex3f(3.10*i,34,19.60);
			glEnd();

			glBegin(GL_LINE_LOOP);
			//glBegin(GL_POINTS);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(3.10*i,32,19.60);
			glVertex3f(3.10*i,32,18.0);
			glVertex3f(3.10*i,34,18.0);
			glVertex3f(3.10*i,34,19.60);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(3.10*i,32+2.50,19.60);
			glVertex3f(3.10*i,32+2.50,18.0);
			glVertex3f(3.10*i,34+2.50,18.0);
			glVertex3f(3.10*i,34+2.50,19.60);
			glEnd();

			glBegin(GL_LINE_LOOP);
			//glBegin(GL_POINTS);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(3.10*i,32+2.50,19.60);
			glVertex3f(3.10*i,32+2.50,18.0);
			glVertex3f(3.10*i,34+2.50,18.0);
			glVertex3f(3.10*i,34+2.50,19.60);
			glEnd();

			glBegin(GL_POLYGON);
			//glBegin(GL_POINTS);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(3.10*i,32+5,19.60);
			glVertex3f(3.10*i,32+5,18.0);
			glVertex3f(3.10*i,33+5,18.0);
			glVertex3f(3.10*i,33+6,18.80);
			glVertex3f(3.10*i,33+5,19.60);
			glEnd();

			glBegin(GL_LINE_LOOP);
			//glBegin(GL_POINTS);
			glColor3f(0.65,0.50,0.39);
			glVertex3f(3.10*i,32+5,19.60);
			glVertex3f(3.10*i,32+5,18.0);
			glVertex3f(3.10*i,33+5,18.0);
			glVertex3f(3.10*i,33+6,18.80);
			glVertex3f(3.10*i,33+5,19.60);
			glEnd();
		}
	}
}

void tiangdepan(void)
{
	for (int i = -1; i < 2; i++)
	{
		if (i==0)
		{

		}
		else
		{
			glPushMatrix();
			glScaled(0.1,3.0,0.2);
			glTranslatef(97.0*i,-6.50,150.0);
			glColor3f(0.65,0.50,0.39);
			glutSolidCube(7.35);
			glPopMatrix();

			glPushMatrix();
			glScaled(0.1,3.0,0.2);
			glTranslatef(45.0*i,-6.50,150.0);
			glColor3f(0.65,0.50,0.39);
			glutSolidCube(7.35);
			glPopMatrix();

			glBegin(GL_LINES);
			glColor3f(0.0,0.0,0.0);
			glVertex3f(9.80*i,-14.0,30.5);
			glVertex3f(9.80*i,-9.0,34);

			glVertex3f(4.50*i,-14.0,30.5);
			glVertex3f(4.50*i,-9.0,34);
			glEnd();
		}
	}
}

void ornamen(void)
{
	glBegin(GL_POINTS);

	glEnd();
}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
	//lain();

	depan1();
	lingtengh();
	depan2();
	depan3();
	belakang();
	jendelaknnkiri();
	pintudpn();
	bgnblkng();
	salib();
	jendelaatas();
	sampingkanankiri();
	bgndlmdpn();
	pintuknnkiri();
	atap();
	tangga();
	garis1();
	rumput();
	ground();
	tiangknnkiri();
	tiangdepan();
	jendeladepan();
	bangunkanankiri();
    glutSwapBuffers();
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

void keyboard(int key, int x, int y)
{
    switch (key)
    {
	case GLUT_KEY_UP:
		glTranslatef(0.0, 0.0, 3.0);
		;break;
	case GLUT_KEY_RIGHT:
        glTranslatef(3.0, 0.0, 0.0);
        break;
	case GLUT_KEY_DOWN:
        glTranslatef(0.0, 0.0, -3.0);
        break;
	case GLUT_KEY_LEFT:
        glTranslatef(-3.0, 0.0, 0.0);
        break;
	}
	tampil();
}

void keyboard2(unsigned char key,int x,int y)
{
	switch (key)
	{
	case '7':
        glTranslatef(0.0,3.0,0.0);
        break;
	case '9':
        glTranslatef(0.0,-3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0,1.0,0.0,0.0);
        break;
    case '8':
        glRotatef(-2.0,1.0,0.0,0.0);
        break;
    case '6':
        glRotatef(2.0,0.0,1.0,0.0);
        break;
    case '4':
        glRotatef(-2.0,0.0,1.0,0.0);
        break;
    case '1':
        glRotatef(2.0,0.0,0.0,4.0);
        break;
    case '3':
        glRotatef(-2.0,0.0,0.0,1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

int main (int argc, char **argv)
{
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1280,720);
    glutInitWindowPosition(40,0);
    glutCreateWindow("Gereja S.T PAULUS Salatiga");
    lumia();
	glutDisplayFunc(tampil);
	glutSpecialFunc(keyboard);
	glutKeyboardFunc(keyboard2);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}
