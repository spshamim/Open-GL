#include<windows.h>
#include<GL/freeglut.h>
#include<bits/stdc++.h>
#include<glm/vec3.hpp>

glm::vec3 hexToRgb(const std::string& hex)
{
    float r = (float)std::stoi(hex.substr(0, 2), nullptr, 16) / 255.0f;
    float g = (float)std::stoi(hex.substr(2, 2), nullptr, 16) / 255.0f;
    float b = (float)std::stoi(hex.substr(4, 2), nullptr, 16) / 255.0f;
    return glm::vec3(r, g, b);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glm::vec3 color = hexToRgb("541690"); // Input a HEX color Value
    glColor3f(color.r,color.g,color.b); // Object color
    glPointSize(4);

    glBegin(GL_QUADS);
    glVertex2i(170,160);
    glVertex2i(210,100);    // Boat_Base
    glVertex2i(410,100);
    glVertex2i(450,160);

    glBegin(GL_QUADS);
    glVertex2i(220,220);
    glVertex2i(220,160);    // 1st_Chimney
    glVertex2i(250,160);
    glVertex2i(250,220);

    glBegin(GL_QUADS);
    glVertex2i(290,230);
    glVertex2i(290,160);    // 2nd_Chimney
    glVertex2i(320,160);
    glVertex2i(320,230);

    glBegin(GL_QUADS);
    glVertex2i(360,220);
    glVertex2i(360,160);    // 3rd_Chimney
    glVertex2i(390,160);
    glVertex2i(390,220);

    glBegin(GL_QUADS);
    glVertex2i(240,250);
    glVertex2i(240,240);    // Smoke
    glVertex2i(260,240);
    glVertex2i(260,250);

    glBegin(GL_QUADS);
    glVertex2i(260,280);
    glVertex2i(260,270);    // Smoke
    glVertex2i(280,270);
    glVertex2i(280,280);

    glBegin(GL_QUADS);
    glVertex2i(280,310);
    glVertex2i(280,320);    // Smoke
    glVertex2i(300,320);
    glVertex2i(300,310);

    glBegin(GL_QUADS);
    glVertex2i(300,250);
    glVertex2i(300,260);    // Smoke
    glVertex2i(320,260);
    glVertex2i(320,250);

    glBegin(GL_QUADS);
    glVertex2i(330,260);
    glVertex2i(330,270);    // Smoke
    glVertex2i(350,270);
    glVertex2i(350,260);

    glBegin(GL_QUADS);
    glVertex2i(360,290);
    glVertex2i(380,290);    // Smoke
    glVertex2i(380,300);
    glVertex2i(360,300);

    glEnd();
    glFlush();
}

void myInit()
{
    glm::vec3 cl = hexToRgb("FF731D"); // Input a HEX color Value
    glClearColor(cl.r,cl.g,cl.b,1); // Main window color

    glPointSize(4);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,640,0,480);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(glutGet(GLUT_SCREEN_WIDTH)/2 - 640/2,glutGet(GLUT_SCREEN_HEIGHT)/2 - 480/2);
    glutCreateWindow("GL_QUADS");
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();

    return 0;
}
