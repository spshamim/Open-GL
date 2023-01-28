#include<GL/freeglut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the color buffer

    // First triangle
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0); // set the color to red
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0, 0.5);
    glEnd();

    // Second triangle
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0); // set the color to green
        glVertex2f(-0.3, 0.3);
        glVertex2f(0.3, 0.3);
        glVertex2f(0, -0.3);
    glEnd();

    glutSwapBuffers(); // swap the front and back buffers
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // use double buffering and RGB color mode
    glutInitWindowSize(500, 500); // set the window size
    glutCreateWindow("Two Triangles"); // create the window
    glClearColor(1.0, 1.0, 1.0, 1.0); // set the clear color to white
    glutDisplayFunc(display); // register the display callback
    glutMainLoop(); // enter the main loop
    return 0;
}
