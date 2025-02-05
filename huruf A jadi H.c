#include <Windows.h>
#include <gl/glut.h>
#include <gl/Gl.h>
#define RATIO 1.200
#define WW 100
#define WH (WW/RATIO)
#define HALFX ((int)(WW/2))
#define HALFY ((int)(WH/2))
#define deltat .0009

int WindowWidth;
int WindowHeight;

void InitGL();
void Display();
void Reshape(int,int);

main(int argc, char **argv)
{

 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);

 WindowWidth = (int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.4);
 WindowHeight = (int)(WindowWidth/RATIO);

 glutInitWindowSize(WindowWidth,WindowHeight);

glutInitWindowPosition((int)(glutGet((GLenum)GLUT_SCREEN_WIDTH)*.1),(glutGet((GLenum)GLUT_SCREEN_HEIGHT)/2)-(WindowHeight/2));

 glutCreateWindow("Huruf A menjadi H (Created by Aldyth)");

 glutDisplayFunc(Display);

 glutReshapeFunc(Reshape);

 InitGL();

 glutMainLoop();
}

void Display()
{

 glLineWidth(4.0);

float StartShape[12][2]={{-8,23},{8,23},{23,-23},{11,-23},{7,-5},{-6,-5}, {-5,0}, {5,0}, {0,15}, {-5,0},{-11,-23},{-23,-23}};

float EndShape[12][2]= {{-15,25},{-5,25},{-5,5},{5,5},{5,25},{15,25},{15,-25},{5,-25},{5,-5},{-5,-5},{-5,-25},{-15,-25}};

float IntermediateShape[12][2];

float VertexColors[12][3]={{0.7,0,0},{0.6,0.7,0},{0.3,0,0.7},{0,0.5,0},{0,0.8,0.4},{0,0,0.8},{0.3,0.5,0},{1,0,0.5},{0.5,1,0},{0.5,0,1}, {1,0,0.5},{0,1,0.5}};

 static float Tween=0.0-deltat;

 if(Tween<1)
 {
 Tween+= deltat;
 }

 for (int Vtx=0;Vtx<12;Vtx++)
 {
 IntermediateShape[Vtx][0]=(1.0-Tween)*StartShape[Vtx][0]+Tween*EndShape[Vtx][0];
 IntermediateShape[Vtx][1]=(1.0-Tween)*StartShape[Vtx][1]+Tween*EndShape[Vtx][1];
 }

 glVertexPointer(2,GL_FLOAT,0,IntermediateShape);
 glColorPointer(3,GL_FLOAT,0,VertexColors);

for (int i = 0; i < 1000000; i++);

 glClear(GL_COLOR_BUFFER_BIT);

 glDrawArrays(GL_LINE_LOOP,0,12);

 glutSwapBuffers();

 glutPostRedisplay();
}

void Reshape(int w,int h)
{
 glutReshapeWindow(w,(int)(w/RATIO));
 WindowWidth=w;
 WindowHeight=(int)(w/RATIO);
 InitGL();
}

void InitGL()
{

 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-HALFX,HALFX,-HALFY,HALFY);
 glMatrixMode(GL_MODELVIEW);

 glClearColor(0, 0, 0, 1);

 glEnableClientState (GL_VERTEX_ARRAY);

 glEnableClientState (GL_COLOR_ARRAY);
 glShadeModel(GL_SMOOTH);
 glViewport(0,0,WindowWidth,WindowHeight);
}
