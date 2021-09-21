#include <GL/glut.h>

void display(void){
}

int main(int argc,char **argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
 glutInitWindowSize(500,500);
 glutCreateWindow("My Game");
 glutDisplayFunc(display);
 glutMainLoop();
 return(0);
}
