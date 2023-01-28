#include<bits/stdc++.h>
#include<windows.h>
#include<GL/freeglut.h>
#include<GL/glut.h>
#include<GL/gl.h>

void display()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    /*
    (1) Window color set to white as red,green,blue all are full
    (2) forth parameter alpha 1.0 means opaque and 0.0 means fully transparent
    */
    glClear(GL_COLOR_BUFFER_BIT); //Clearing window before starting display functions work

    glColor3f(1.0, 0.0, 0.0); //Triangle color is red as Red is on, other is 0

    glBegin(GL_TRIANGLES); // Begin

    glVertex2f(0.0, 0.5); // Vertex
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.5,0.0);

    glEnd();  // End

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Triangle using FreeGLUT");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
