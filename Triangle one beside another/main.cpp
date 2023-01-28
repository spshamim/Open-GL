#include<windows.h>
#include<GL/freeglut.h>
#include<bits/stdc++.h>
#include<glm/vec3.hpp> // OpenGL Math Library

glm::vec3 HexToRGB(const std::string& hex) // Converting Function HEXA to RGB
{
    int r, g, b;
    sscanf(hex.c_str(), "#%2x%2x%2x", &r, &g, &b);
    return glm::vec3(r / 255.0, g / 255.0, b / 255.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the color buffer

    // First triangle
    glPushMatrix();
    glTranslatef(-0.3, 0.3, 0);
    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0); // set the color to red
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0, 0.5);
    glEnd();
    glPopMatrix();

    // Second triangle
    glPushMatrix();
    glTranslatef(0.3, -0.3, 0);
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 1.0, 0.0); // set the color to green
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0, 0.5);
    glEnd();
    glPopMatrix();

    glutSwapBuffers(); // swap the front and back buffers
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); // initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // use double buffering and RGB color mode
    glutInitWindowSize(600, 500); // set the window size
    glutInitWindowPosition(glutGet(GLUT_SCREEN_WIDTH)/2 - 600/2,glutGet(GLUT_SCREEN_HEIGHT)/2 - 500/2);
    glutCreateWindow("Two Triangles"); // create the window

    glm::vec3 color = HexToRGB("#645CBB"); // Calling convert method
    glClearColor(color.r, color.g, color.b, 1.0); // Passing converted color value

    glutDisplayFunc(display); // register the display callback
    glutMainLoop(); // enter the main loop

    return 0;
}
