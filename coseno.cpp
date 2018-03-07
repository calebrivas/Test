#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    glBegin(GL_POINTS);
    GLfloat x, y, i;
    
    glColor3f(1.0f, 1.0f,1.0f);
    for (i=3.0; i<=3.0; i+=0.1)
    {
		x=i;
		y=sin((M_PI)*x);
		glVertex2f(x,y);
		
	 }
	  glColor3f(1.0f, 0.0f,0.0f);
    for (i=5.0; i<=5.0; i+=0.1)
    {
		x=i;
		y=sin((M_PI)*x);
		glVertex2f(x,y);
		
	 }
	 
	glEnd();
    glFlush ();
}
void init (void)
{
 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, 5.0, -5.0, 5.0, -5.0, 5.0);
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
