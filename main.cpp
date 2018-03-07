#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //glPointSize(2.0f);
    //glBegin(GL_LINES_LOOP);
    //glColor3f(0.0f, 0.0f,1.0f);
    //glVertex3f(-1.0f,0.0f,0.0f);
    //glVertex3f(0.0f,-1.0f,0.0f);
    //glVertex3f(1.0f,0.0f,0.0f);
    //glVertex3f(0.0f,1.0f,0.0f);
    
    //glClear(GL_COLOR_BUFFER_BIT);
    //glPointSize(2.0f);
    //glBegin(GL_TRIANGLES);
    //glColor3f(1.0f, 0.0f,0.0f);
    //glVertex3f(0.0f,0.8f,0.0f);
    //glColor3f(0.0f, 1.0f,0.0f);
    //glVertex3f(-0.6f,-2.0f,0.0f);
    //glColor3f(0.0f, 0.0f,1.0f);
    //glVertex3f(0.6f,0.2f,0.0f);
 
  
     
    //glEnd();
    //glFlush ();

//gl_QUADS
    //glClear(GL_COLOR_BUFFER_BIT | GL DEPTH BUFFER BIT);
    //glPointSize(2.0f);
    //glColor3f(0.0f, 0.0f,1.0f);
    //glBegin(GL_QUADS);
    //glVertex3f(-0.25f,0.25f,0.0f);
    //glVertex3f(-0.5f,0.25f,0.0f);
    //glVertex3f(0.5f,-0.25f,0.0f);
    //glVertex3f(0.25f,0.25f,0.0f);
     
 
  
     
    //glEnd();
    //glFlush ();
    
    //GL_QUADS_STRIP
    //glClear(GL_COLOR_BUFFER_BIT);
    //glPointSize(2.0f);
    //glBegin(GL_QUAD_STRIP);
    //FIRST_QUAD
    //glColor3f(1.0f, 0.0f,0.0f);
    //glVertex3f(-0.0f,-0.5f,0.0f);
    //glVertex3f(0.5f,-0.5f,0.0f);
    //glVertex3f(-0.5f,0.0f,0.0f);
    
    //SECOND_QUAD
    //glColor3f(1.0f, 1.0f,0.0f);
    //glVertex3f(-0.7f,-0.5f,0.0f);
    //glVertex3f(0.7f,-0.5f,0.0f);
    
     //SECOND_QUAD
    //glColor3f(0.0f, 1.0f,0.0f);
    //glVertex3f(-0.8f,0.8f,0.0f);
    //glVertex3f(0.9f,0.8f,0.0f);
    
  
     
    //glEnd();
    //glFlush ();
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(1.0f);
    glColor3f(1.0f, 1.0f,1.0f);
    GLfloat angulo;
    int i;
    
    glBegin(GL_POINTS);
    for (i=0; i<360; i+=1)
    {
		angulo =1+M_PI/180.0F;//GRADOS A RADIANES
		glVertex3f(0.0f, 0.0f, 0.0f);
		glVertex3f(cos(angulo, sin(angulo), 0.0F);
	}
	glEnd();
    glFlush ();
}
void init (void)
{
 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
