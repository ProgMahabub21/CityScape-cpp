#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

int _angle1 = 0;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Road()
{
    int x = 0, y = 0;
    glColor3ub(15, 15, 10); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(0, 200);
    glVertex2f(500, 200);
    glVertex2f(500, 80);
    glVertex2f(0, 80);

    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x, 140);
    glVertex2f(y + 45, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 90, 140);
    glVertex2f(y + 135, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 180, 140);
    glVertex2f(y + 225, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 270, 140);
    glVertex2f(y + 315, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 360, 140);
    glVertex2f(y + 405, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 450, 140);
    glVertex2f(y + 495, 140);
    glEnd();

}
void yellow(int x, int y)
{
    glColor3ub(255, 255, 4);
    glBegin(GL_POLYGON);
    glVertex2f(5 + x, 8 + y);
    glVertex2f(0 + x, 8 + y);
    glVertex2f(0 + x, y);
    glVertex2f(5 + x, y);
    glEnd();
}
void Roadside()
{
    glColor3ub(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2f(0, 180);
    glVertex2f(0, 172);
    glVertex2f(500, 172);
    glVertex2f(500, 180);
    glEnd();
    for (int i = 0; i < 500; i++)
    {
        if (i % 10 == 0)
        {
            yellow(i, 172);
        }

    }
}
void Roadside2()
{
    Roadside();
    glPushMatrix();
    glTranslatef(0.0f, -124.0f, 0.0f);
    Roadside();
    glPopMatrix();
}
void circle(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}
void Background()
{
    glColor3ub(210, 0, 105);
    glBegin(GL_POLYGON);
    glVertex2f(0, 180);
    glVertex2f(25, 180);
    glVertex2f(25, 380);
    glVertex2f(0, 380);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(25, 180);
    glVertex2f(45, 180);
    glVertex2f(45, 360);
    glVertex2f(25, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(80, 180);
    glVertex2f(45, 180);
    glVertex2f(45, 390);
    glVertex2f(80, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(80, 180);
    glVertex2f(105, 180);
    glVertex2f(105, 345);
    glVertex2f(80, 345);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(105, 180);
    glVertex2f(125, 180);
    glVertex2f(125, 375);
    glVertex2f(105, 375);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(150, 180);
    glVertex2f(125, 180);
    glVertex2f(125, 420);
    glVertex2f(150, 420);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(150, 180);
    glVertex2f(170, 180);
    glVertex2f(170, 350);
    glVertex2f(150, 350);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(170, 180);
    glVertex2f(195, 180);
    glVertex2f(195, 410);
    glVertex2f(170, 410);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(215, 180);
    glVertex2f(195, 180);
    glVertex2f(195, 380);
    glVertex2f(215, 380);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(215, 180);
    glVertex2f(240, 180);
    glVertex2f(240, 415);
    glVertex2f(215, 415);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(240, 180);
    glVertex2f(265, 180);
    glVertex2f(265, 360);
    glVertex2f(240, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(265, 180);
    glVertex2f(295, 180);
    glVertex2f(295, 425);
    glVertex2f(265, 425);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(295, 180);
    glVertex2f(315, 180);
    glVertex2f(315, 390);
    glVertex2f(295, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(315, 180);
    glVertex2f(340, 180);
    glVertex2f(340, 360);
    glVertex2f(315, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(365, 180);
    glVertex2f(340, 180);
    glVertex2f(340, 390);
    glVertex2f(365, 390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(395, 180);
    glVertex2f(365, 180);
    glVertex2f(365, 425);
    glVertex2f(395, 425);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(395, 180);
    glVertex2f(415, 180);
    glVertex2f(415, 360);
    glVertex2f(395, 360);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(435, 180);
    glVertex2f(415, 180);
    glVertex2f(415, 400);
    glVertex2f(435, 400);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(435, 180);
    glVertex2f(460, 180);
    glVertex2f(460, 340);
    glVertex2f(435, 340);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(460, 180);
    glVertex2f(485, 180);
    glVertex2f(485, 425);
    glVertex2f(460, 425);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(500, 180);
    glVertex2f(485, 180);
    glVertex2f(485, 380);
    glVertex2f(500, 380);
    glEnd();
}

void Building()
{
    //glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glColor3ub(91, 0, 91);
    glBegin(GL_POLYGON);  //repetitive
    glVertex2f(250, 350);
    glVertex2f(200, 350);
    glVertex2f(200, 180);
    glVertex2f(250, 180);
    glEnd();
    glBegin(GL_POLYGON);  //repetitive
    glVertex2f(200, 300);
    glVertex2f(175, 300);
    glVertex2f(175, 180);
    glVertex2f(200, 180);
    glEnd();
    glBegin(GL_POLYGON);  //repetitive
    glVertex2f(150, 280);
    glVertex2f(175, 280);
    glVertex2f(175, 180);
    glVertex2f(150, 180);
    glEnd();
    glBegin(GL_POLYGON);  //repetitive
    glVertex2f(150, 320);
    glVertex2f(100, 320);
    glVertex2f(100, 180);
    glVertex2f(150, 180);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(100, 290);
    glVertex2f(50, 290);
    glVertex2f(50, 180);
    glVertex2f(100, 180);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0, 320);
    glVertex2f(50, 320);
    glVertex2f(50, 180);
    glVertex2f(0, 180);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(275, 300);
    glVertex2f(325, 300);
    glVertex2f(325, 180);
    glVertex2f(275, 180);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(275, 260);
    glVertex2f(250, 260);
    glVertex2f(250, 180);
    glVertex2f(275, 180);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(325, 260);
    glVertex2f(350, 260);
    glVertex2f(350, 180);
    glVertex2f(325, 180);
    glEnd();

    glPushMatrix();
    glTranslatef(150, 0, 0);
    glBegin(GL_POLYGON);  //repetitive
    glVertex2f(250, 350);
    glVertex2f(200, 350);
    glVertex2f(200, 180);
    glVertex2f(250, 180);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(225, 0, 0);
    glBegin(GL_POLYGON); //repetitive
    glVertex2f(200, 300);
    glVertex2f(175, 300);
    glVertex2f(175, 180);
    glVertex2f(200, 180);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(275, 0, 0);
    glBegin(GL_POLYGON); //repetitive
    glVertex2f(150, 280);
    glVertex2f(175, 280);
    glVertex2f(175, 180);
    glVertex2f(150, 180);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(350, 0, 0);
    glBegin(GL_POLYGON); //repetitive
    glVertex2f(150, 320);
    glVertex2f(100, 320);
    glVertex2f(100, 180);
    glVertex2f(150, 180);
    glEnd();
    glPopMatrix();

    //Borders
    glLineWidth(1);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    glVertex2f(250, 350);
    glVertex2f(200, 350);
    glVertex2f(200, 350);
    glVertex2f(200, 180);
    glVertex2f(200, 180);
    glVertex2f(250, 180);
    glVertex2f(250, 180);
    glVertex2f(250, 350);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(200, 300);
    glVertex2f(175, 300);
    glVertex2f(175, 300);
    glVertex2f(175, 180);
    glVertex2f(175, 180);
    glVertex2f(200, 180);
    glVertex2f(200, 180);
    glVertex2f(200, 300);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(150, 280);
    glVertex2f(175, 280);
    glVertex2f(175, 280);
    glVertex2f(175, 180);
    glVertex2f(175, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 280);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(150, 320);
    glVertex2f(100, 320);
    glVertex2f(100, 320);
    glVertex2f(100, 180);
    glVertex2f(100, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 320);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(100, 290);
    glVertex2f(50, 290);
    glVertex2f(50, 290);
    glVertex2f(50, 180);
    glVertex2f(50, 180);
    glVertex2f(100, 180);
    glVertex2f(100, 180);
    glVertex2f(100, 290);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0, 320);
    glVertex2f(50, 320);
    glVertex2f(50, 320);
    glVertex2f(50, 180);
    glVertex2f(50, 180);
    glVertex2f(0, 180);
    glVertex2f(0, 180);
    glVertex2f(0, 320);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(275, 300);
    glVertex2f(325, 300);
    glVertex2f(325, 300);
    glVertex2f(325, 180);
    glVertex2f(325, 180);
    glVertex2f(275, 180);
    glVertex2f(275, 180);
    glVertex2f(275, 300);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(275, 260);
    glVertex2f(250, 260);
    glVertex2f(250, 260);
    glVertex2f(250, 180);
    glVertex2f(250, 180);
    glVertex2f(275, 180);
    glVertex2f(275, 180);
    glVertex2f(275, 260);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(325, 260);
    glVertex2f(350, 260);
    glVertex2f(350, 260);
    glVertex2f(350, 180);
    glVertex2f(350, 180);
    glVertex2f(325, 180);
    glVertex2f(325, 180);
    glVertex2f(325, 260);
    glEnd();

    glPushMatrix();
    glTranslatef(150, 0, 0);
    glBegin(GL_LINES);  //repetitive
    glVertex2f(250, 350);
    glVertex2f(200, 350);
    glVertex2f(200, 350);
    glVertex2f(200, 180);
    glVertex2f(200, 180);
    glVertex2f(250, 180);
    glVertex2f(250, 180);
    glVertex2f(250, 350);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(225, 0, 0);
    glBegin(GL_LINES); //repetitive
    glVertex2f(200, 300);
    glVertex2f(175, 300);
    glVertex2f(175, 300);
    glVertex2f(175, 180);
    glVertex2f(175, 180);
    glVertex2f(200, 180);
    glVertex2f(200, 180);
    glVertex2f(200, 300);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(275, 0, 0);
    glBegin(GL_LINES); //repetitive
    glVertex2f(150, 280);
    glVertex2f(175, 280);
    glVertex2f(175, 280);
    glVertex2f(175, 180);
    glVertex2f(175, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 280);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(350, 0, 0);
    glBegin(GL_LINES); //repetitive
    glVertex2f(150, 320);
    glVertex2f(100, 320);
    glVertex2f(100, 320);
    glVertex2f(100, 180);
    glVertex2f(100, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 320);
    glEnd();
    glPopMatrix();

}

void Detail_1(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(45 + x, 5 + y);
    glVertex2f(0 + x, 5 + y);
    glVertex2f(0 + x, y);
    glVertex2f(45 + x, y);
    glEnd();
}
void Detail_2(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(55 + x, 10 + y);
    glVertex2f(95 + x, 10 + y);
    glVertex2f(95 + x, y);
    glVertex2f(55 + x, y);
    glEnd();
}
void Detail_3(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(97 + x, 3 + y);
    glVertex2f(100 + x, 3 + y);
    glVertex2f(100 + x, y);
    glVertex2f(97 + x, y);
    glEnd();
}

void Detail_4(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(7 + x, y + 180);
    glVertex2f(7 + x, y + 315);
    glVertex2f(x, y + 315);
    glVertex2f(x, y + 180);
    glEnd();
}
void Detail_5(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(170 + x, 5 + y);
    glVertex2f(155 + x, 5 + y);
    glVertex2f(155 + x, y);
    glVertex2f(170 + x, y);
    glEnd();
}
void Detail_6(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(3 + x, y + 180);
    glVertex2f(3 + x, y + 295);
    glVertex2f(x, y + 295);
    glVertex2f(x, y + 180);
    glEnd();
}
void Detail_7(float x, float y)
{
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(222 + x, 5 + y);
    glVertex2f(205 + x, 5 + y);
    glVertex2f(205 + x, y);
    glVertex2f(222 + x, y);
    glEnd();
}
void Details()
{
    glMatrixMode(GL_MODELVIEW);

    //Building_1
    glColor3ub(91, 0, 91);
    glBegin(GL_POLYGON);
    glVertex2f(0, 340);
    glVertex2f(50, 340);
    glVertex2f(50, 330);
    glVertex2f(0, 330);
    glEnd();
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(0, 320);
    glVertex2f(40, 320);
    glVertex2f(40, 330);
    glVertex2f(0, 330);
    glEnd();
    for (int i = 180; i < 311; i++)
    {
        if (i % 10 == 0)
        {
            Detail_1(0, i);
        }

    }

    //building_2
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(50, 315);
    glVertex2f(55, 315);
    glVertex2f(55, 290);
    glVertex2f(50, 290);
    glEnd();
    for (int i = 180; i < 281; i++)
    {
        if (i % 15 == 0)
        {
            Detail_2(0, i + 5);
        }

    }

    //Building_3
    glColor3ub(91, 0, 91);
    glBegin(GL_POLYGON);
    glVertex2f(105, 330);
    glVertex2f(120, 330);
    glVertex2f(120, 320);
    glVertex2f(105, 320);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(145, 330);
    glVertex2f(130, 330);
    glVertex2f(130, 320);
    glVertex2f(145, 320);
    glEnd();
    for (int i = 290; i < 320; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(0, i);
        }

    }
    for (int i = 280; i < 320; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(53, i);
        }

    }
    for (int i = 100; i < 145; i++)
    {
        if (i % 10 == 0)
        {
            Detail_4(i + 1, 0);
        }

    }
    //Building_4
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(160, 288);
    glVertex2f(175, 288);
    glVertex2f(175, 280);
    glVertex2f(160, 280);
    glEnd();
    for (int i = 180; i < 275; i++)
    {
        if (i % 10 == 0)
        {
            Detail_5(0, i);
        }

    }
    //Building_5
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(200, 305);
    glVertex2f(173, 305);
    glVertex2f(173, 300);
    glVertex2f(200, 300);
    glEnd();
    for (int i = 175; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            Detail_6(i + 1, 0);
        }

    }
    //Building_6
    for (int i = 300; i < 350; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(100, i);
        }

    }
    for (int i = 300; i < 350; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(153, i);
        }

    }
    for (int i = 180; i < 350; i++)
    {
        if (i % 10 == 0)
        {
            Detail_7(0, i);
        }

    }
    for (int i = 180; i < 350; i++)
    {
        if (i % 10 == 0)
        {
            Detail_7(24, i);
        }

    }

    //Building_7
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(250, 260);
    glVertex2f(258, 260);
    glVertex2f(258, 295);
    glVertex2f(250, 295);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(253, 185);
    glVertex2f(272, 185);
    glVertex2f(272, 255);
    glVertex2f(253, 255);
    glEnd();

    //Building_8
    glColor3ub(91, 0, 91);
    glBegin(GL_POLYGON);
    glVertex2f(275, 315);
    glVertex2f(325, 315);
    glVertex2f(325, 310);
    glVertex2f(275, 310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(275, 295);
    glVertex2f(267, 295);
    glVertex2f(267, 285);
    glVertex2f(275, 285);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(275, 270);
    glVertex2f(267, 270);
    glVertex2f(267, 280);
    glVertex2f(275, 280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(325, 295);
    glVertex2f(333, 295);
    glVertex2f(333, 285);
    glVertex2f(325, 285);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(325, 270);
    glVertex2f(333, 270);
    glVertex2f(333, 280);
    glVertex2f(325, 280);
    glEnd();

    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(280, 300);
    glVertex2f(320, 300);
    glVertex2f(320, 310);
    glVertex2f(280, 310);
    glEnd();
    for (int i = 275; i < 325; i++)
    {
        if (i % 5 == 0)
        {
            Detail_6(i + 1, 0);
        }

    }

    //Building_9
    glPushMatrix();
    glTranslatef(92, 0, 0);
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(250, 260);
    glVertex2f(258, 260);
    glVertex2f(258, 295);
    glVertex2f(250, 295);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(75, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(253, 185);
    glVertex2f(272, 185);
    glVertex2f(272, 255);
    glVertex2f(253, 255);
    glEnd();
    glPopMatrix();

    //Building_10
    glPushMatrix();
    glTranslatef(203, 0, 0);
    for (int i = 300; i < 350; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(100, i);
        }

    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(97, 0, 0);
    for (int i = 300; i < 350; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(153, i);
        }

    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(150, 0, 0);
    for (int i = 180; i < 350; i++)
    {
        if (i % 10 == 0)
        {
            Detail_7(0, i);
        }

    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(150, 0, 0);
    for (int i = 180; i < 350; i++)
    {
        if (i % 10 == 0)
        {
            Detail_7(24, i);
        }

    }
    glPopMatrix();
    //Building_11
    glPushMatrix();
    glTranslatef(227, 0, 0);
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(200, 305);
    glVertex2f(173, 305);
    glVertex2f(173, 300);
    glVertex2f(200, 300);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(225, 0, 0);
    for (int i = 175; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            Detail_6(i + 1, 0);
        }

    }
    glPopMatrix();
    //Building_12
    glPushMatrix();
    glTranslatef(275, 0, 0);
    glColor3ub(55, 0, 55);
    glBegin(GL_POLYGON);
    glVertex2f(160, 288);
    glVertex2f(175, 288);
    glVertex2f(175, 280);
    glVertex2f(160, 280);
    glEnd();
    for (int i = 180; i < 275; i++)
    {
        if (i % 10 == 0)
        {
            Detail_5(0, i);
        }

    }
    glPopMatrix();
    //Building_13
    glPushMatrix();
    glTranslatef(350, 0, 0);
    glColor3ub(91, 0, 91);
    glBegin(GL_POLYGON);
    glVertex2f(105, 330);
    glVertex2f(120, 330);
    glVertex2f(120, 320);
    glVertex2f(105, 320);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(145, 330);
    glVertex2f(130, 330);
    glVertex2f(130, 320);
    glVertex2f(145, 320);
    glEnd();
    for (int i = 290; i < 320; i++)
    {
        if (i % 5 == 0)
        {
            Detail_3(0, i);
        }

    }
    for (int i = 100; i < 145; i++)
    {
        if (i % 10 == 0)
        {
            Detail_4(i + 1, 0);
        }

    }
    glPopMatrix();

}
void CarTire()
{
    //Tires

    glBegin(GL_POLYGON); //tire-1
    glLineWidth(7.5);
    for (int i = 0; i < 200; i++)
    {

        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        //glVertex2f(x,y);
        glVertex2f((140 + (x * 5)), (93 + (y * 5)));
    }
    glEnd();
    //Point

    // 140=140+200;

    glBegin(GL_POLYGON);
    glLineWidth(7.5);
    for (int i = 0; i < 200; i++)
    {

        glColor3ub(168, 169, 173); //steel-cover
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.5;
        float x = (140 + (r * 5 * cos(A)));
        float y = (93 + (r * 5 * sin(A)));
        glVertex2f(x, y);
    }
    glEnd();
    //140=140+200;

    //points
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2f(140.0, 93.0);
    glVertex2f(140.0 + 5, 93.0);
    glVertex2f(140.0 - 5, 93.0);
    glVertex2f(140.0, 93.0 + 10);
    glVertex2f(140.0, 93.0 - 10);
    glEnd();
}
void CarBody()
{

    //glColor3f(0.1373, 0.5725, 0.5529); //body
    glColor3ub(252, 186, 3);
    glBegin(GL_POLYGON);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(240, 127);
    glVertex2f(240, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 127);
    glVertex2f(130, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); //back-light
    glColor3ub(255, 0, 0);
    glVertex2f(110, 92);
    glVertex2f(115, 92);
    glVertex2f(115, 117);
    glVertex2f(110, 117);
    glEnd();

    glBegin(GL_POLYGON); //window
    glColor3ub(0, 0, 0);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(120, 127);
    glVertex2f(130, 127);
    glEnd();

    glBegin(GL_POLYGON); //window-Divider
    glColor3ub(192, 192, 192);
    glVertex2f(170, 152);
    glVertex2f(165, 152);
    glVertex2f(165, 127);
    glVertex2f(170, 127);
    glEnd();

    glBegin(GL_POLYGON); //roof-plate
    glColor3ub(168, 169, 173);

    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(185, 157);
    glVertex2f(140, 157);
    glEnd();

    glBegin(GL_POLYGON); //window-holder-front
    glColor3ub(168, 169, 173);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(185, 152);
    glEnd();

    glBegin(GL_POLYGON); //window-holder-back
    glColor3ub(168, 169, 173);
    glVertex2f(140, 157);
    glVertex2f(115, 127);
    glVertex2f(125, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); //foot-holder
    glColor3ub(168, 169, 173);
    glVertex2f(215, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 97);
    glVertex2f(215, 97);

    glEnd();

    glBegin(GL_POLYGON);      //mirror
    glColor3f(0.3, 0.9, 0.6); //body
    //glColor3ub(255,250,0);
    glVertex2f(211.5, 134.5);
    glVertex2f(204.5, 135.5);
    glVertex2f(203.5, 129);
    glVertex2f(210.5, 127);
    glEnd();
}

void fullCar()
{

    CarBody();

    // glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();

    glTranslatef(142.5, 95.5, 0);
    glRotatef(-_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-142.5, -95.5, 0);
    CarTire();
    glPopMatrix();
    // glutSwapBuffers();

    glPushMatrix();
    glTranslatef(60, 0, 0);

    glTranslatef(142.5, 95.5, 0);
    glRotatef(-_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(142.5), -95.5, 0);
    CarTire();
    // CarTire();
    glPopMatrix();
}
void CarForward()
{
    glMatrixMode(GL_MODELVIEW);

    // init();
    glPushMatrix();

    glTranslatef(-142.5, 0, 0);
    glTranslatef((_angle1/2) % 500, 0, 0);
    fullCar();

    glPopMatrix();

    glutSwapBuffers();
}
void circle()
{
    // glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    // glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(125, 118, 117);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 30;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

    glEnd();
}
void Crossing(float x, float y)
{
    glColor3ub(255, 255, 255); // Clear the color buffer (background)
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    glVertex2f(43 + x, 10.2 + y);
    glVertex2f(63 + x, 10.2 + y);
    glVertex2f(63 + x, 14.5 + y);
    glVertex2f(43 + x, 14.5 + y);
    glEnd();
}
void cloud()
{
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(20, 95.5, 0);
    circle();

    glTranslatef(15, 2.5, 0);
    circle();

    glTranslatef(20, 5, 0);
    circle();

    glTranslatef(30, 2.5, 0);
    circle();

    glTranslatef(0, -2.5, 0);
    circle();

    glTranslatef(0, -5, 0);
    circle();

    glTranslatef(0, -7.5, 0);
    circle();

    glPopMatrix();

    // glutSwapBuffers();
}

void movingCloude()
{

    glPushMatrix();
    glTranslatef(60, 400, 0);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5, 0.5, 1);
    glTranslatef((_angle1/2) % 1000, 0, 0);
    glPushMatrix();
    glTranslatef(-100, 0, 0);
    cloud();
    glTranslatef(200, 35, 0);
    cloud();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    // glutSwapBuffers();
}
void update(int value)
{

    _angle1 += 1.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}
void plane()
{
    glPushMatrix();
    glTranslatef(142.5, 450, 0);
    glScalef(0.3, 0.4, 1);
    glTranslatef((_angle1 / 5) % 500, 0, 0);
    // glTranslated(a, c, 0.0);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON); //rectangular body
    glVertex2f(0.0, 30.0);
    glVertex2f(0.0, 55.0);
    glVertex2f(135.0, 55.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    // glPopMatrix();

    // glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON); //upper triangle construction plane
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    // glPopMatrix();

    // glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP); //outline of upper triangle plane
    glVertex2f(135.0, 55.0);
    glVertex2f(150.0, 50.0);
    glVertex2f(155.0, 45.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(135.0, 40.0);
    glEnd();
    // glPopMatrix();

    // glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //lower triangle
    glVertex2f(135.0, 40.0);
    glVertex2f(160.0, 40.0);
    glVertex2f(160.0, 37.0);
    glVertex2f(145.0, 30.0);
    glVertex2f(135.0, 30.0);
    glEnd();
    // glPopMatrix();

    // glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //back wing
    glVertex2f(0.0, 55.0);
    glVertex2f(0.0, 80.0);
    glVertex2f(10.0, 80.0);
    glVertex2f(40.0, 55.0);
    glEnd();
    // glPopMatrix();

    // glPushMatrix();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //left side wing
    glVertex2f(65.0, 55.0);
    glVertex2f(50.0, 70.0);
    glVertex2f(75.0, 70.0);
    glVertex2f(90.0, 55.0);
    glEnd();
    // glPopMatrix();

    // glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON); //rightside wing
    glVertex2f(70.0, 40.0);
    glVertex2f(100.0, 40.0);
    glVertex2f(80.0, 15.0);
    glVertex2f(50.0, 15.0);

    glEnd();

    glPopMatrix();
}
void bench()
{
    glLineWidth(12);
    float y1 = 45.5;
    float y2 = 47.5;
    //colors
    glPushMatrix();
   // glScalef(-1.0,-1.0,0);
    glPushMatrix();
    glTranslatef(300, 130, 0);
    glScalef(2.5, 1.8, 0);

    glBegin(GL_QUADS);          //sitting 2.0
    glColor3ub(204, 102, 0);
    glVertex2f(44, -60);
    glVertex2f(64, -60);
    glVertex2f(64, -58);
    glVertex2f(44, -58);

    glEnd();

    glBegin(GL_QUADS);          //sitting 1.0
    glColor3ub(204, 102, 0);
    glVertex2f(45, -58);
    glVertex2f(63, -58);
    glVertex2f(63, -57);
    glVertex2f(45, -57);


    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(46, -70);
    glVertex2f(48, -70);
    glVertex2f(48, -60);
    glVertex2f(46, -60);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(60, -70);
    glVertex2f(62, -70);
    glVertex2f(62, -60);
    glVertex2f(60, -60);

    glEnd();

    glBegin(GL_QUADS);             //2
    glColor3ub(204, 102, 0);
    for (int i = 0; i < 3; i++)
    {
        glVertex2f(45.5, -y1);
        glVertex2f(45.5, -y2);
        glVertex2f(62.5, -y2);
        glVertex2f(62.5, -y1);

        y1 += 3;
        y2 += 3;
    }
   
    glEnd();

    glBegin(GL_QUADS);      //1.1
    glColor3ub(102, 51, 0);
    glVertex2f(46.5, -60);
    glVertex2f(48, -60);
    glVertex2f(48, -45);
    glVertex2f(46.5, -45);

    glEnd();

    glBegin(GL_QUADS);      //1.2
    glColor3ub(102, 51, 0);
    glVertex2f(60, -60);
    glVertex2f(61.5, -60);
    glVertex2f(61.5, -45);
    glVertex2f(60, -45);
    glEnd();
    glTranslatef(-300, -130, 0);
    glPopMatrix();
    glPopMatrix();
}
void bench2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-370, 0, 0);
    bench();
    glTranslatef(370, 0, 0);
    glPopMatrix();
}
void footpath()
{
    glBegin(GL_QUADS);
    glColor3ub(31, 46, 46);
    glVertex2f(0,48);
    glVertex2f(500,48);
    glVertex2f(500, 0);
    glVertex2f(0, 0);
    glEnd();
}
void traffic()
{
    glBegin(GL_QUADS);
    glColor3ub(67.0f, 70.0f, 75.0f);
    glVertex2f(250,20);
    glVertex2f(255,20);
    glVertex2f(255,140);
    glVertex2f(250, 140);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67.0f, 70.0f, 75.0f);
    glVertex2f(250, 140);
    glVertex2f(255, 140);
    glVertex2f(225, 178);
    glVertex2f(220, 178);  
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 140, 131);
    glVertex2f(230, 165);
    glVertex2f(230, 152);
    glVertex2f(246, 133);
    glVertex2f(246, 146);
    glEnd();

    glColor3ub(255, 0, 0);
    circle(233,155,3);
    glColor3ub(255, 255, 0);
    circle(238,149,3);
    glColor3ub(0, 255, 0);
    circle(243, 143, 3);
   
}
void StreetLight() 
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-100.0f, 40.0f, 0.0f);
    glScalef(0.5, 1, 0);
    glBegin(GL_QUADS);
    glColor3ub(67.0f, 70.0f, 75.0f);//steel-blue-pillar
    glVertex2f(250, 20);
    glVertex2f(255, 20);
    glVertex2f(255, 140);
    glVertex2f(250, 140);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67.0f, 70.0f, 75.0f);//steel-blue-pillar-base-holder
    glVertex2f(248, 45);
    glVertex2f(257, 45);
    glVertex2f(260, 20);
    glVertex2f(245, 20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(67.0f, 70.0f, 75.0f);//steel-blue-holder-p1
    glVertex2f(250, 140);
    glVertex2f(255, 140);
    glVertex2f(270, 170);
    glVertex2f(265, 170);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(67.0f, 70.0f, 75.0f);//steel-blue-holder-p2
    glVertex2f(264, 170);
    glVertex2f(310, 170);
    glVertex2f(305, 175);
    glVertex2f(269, 175);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(67.0f, 70.0f, 75.0f);//steel-blue-holder-p3
    glVertex2f(285, 170);
    glVertex2f(285, 165);
    glVertex2f(310, 165);
    glVertex2f(310, 170);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255.0f, 255.0f, 48);//bright-yellow-light
    glVertex2f(285, 165);
    glVertex2f(310, 165);
    glVertex2f(300, 155);
    glVertex2f(290, 158);
    glEnd();


  //  glFlush(); // Render now
    glPopMatrix();  // Render now
}

void scaledlight()
{
    int i ;
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6, 0.6, 0.0);
    StreetLight();
   
    for (i = 1; i < 50;) {
        glTranslatef(150, 0, 0);
        StreetLight();
        i+=10;
    }
    glPopMatrix();
}
void scaledlight1()
{
    int i;
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.3, 0.3, 0.0);
    glTranslatef(0, 540, 0);
    StreetLight();
    glTranslatef(0, -540, 0);

    for (i = 1; i < 110;) {
        glTranslatef(150, 540, 0);
        StreetLight();
        glTranslatef(0, -540, 0);
        i += 10;
    }
    glPopMatrix();

}
void trashcan()
{
    glBegin(GL_QUADS);
    glColor3ub(128, 140, 131);
    glVertex2f(100,5);
    glVertex2f(110, 5);
    glVertex2f(115, 35);
    glVertex2f(95, 35);
    glEnd();
}
void trashbin()
{
    glMatrixMode(GL_MODELVIEW);
    trashcan();
    glPushMatrix();
    glTranslatef(290, 0, 0);
    trashcan();
    glPopMatrix();
}
void UmbrellaFrameLeft()
{
    glBegin(GL_TRIANGLES);//p
    glColor3f(1, 1, 0); // Yellow
    glVertex2f(250, 120);    // x, y
    glVertex2f(229, 70);    // x, y
    glVertex2f(250, 70);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
    glColor3f(1, 0, 1); // Purple
    glVertex2f(249, 120);    // x, y
    glVertex2f(209.0, 80);    // x, y
    glVertex2f(230, 70);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
    glColor3f(0, 1, 1); // Red
    glVertex2f(249, 120);    // x, y
    glVertex2f(189, 90);    // x, y
    glVertex2f(210, 80);    // x, y
    glEnd();

}


void UmbrellaFrameRight()
{
    glBegin(GL_TRIANGLES);//p
    glColor3f(0, 1, 0); // Green
    glVertex2f(251, 120);    // x, y
    glVertex2f(251, 70);    // x, y
    glVertex2f(270, 70);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
    glColor3f(0, 0, 1); // Blue
    glVertex2f(251, 120);    // x, y
    glVertex2f(271, 70);    // x, y
    glVertex2f(290, 80);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
    glColor3f(1, 0, 0); // Red
    glVertex2f(251, 120);    // x, y
    glVertex2f(291, 80);    // x, y
    glVertex2f(310, 90);    // x, y
    glEnd();

}
void UmbrellaBody()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.6, 1, 0);
    glBegin(GL_POLYGON);//Handle
    glColor3f(0, 0, 0); // Red
    glVertex2f(249, 30);    // x, y
    glVertex2f(249, 130);    // x, y
    glVertex2f(251, 130);    // x, y
    glVertex2f(251, 30);    // x, y
    glEnd();
    UmbrellaFrameRight();
    UmbrellaFrameLeft();
    glPopMatrix();

}
void Umbrella()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(285,-25,0);
    UmbrellaBody();
    glTranslatef(-285, 25, 0);
    glTranslatef(-85, -25, 0);
    UmbrellaBody();
    glTranslatef(85, 25, 0);
    glPopMatrix();
}

void display()
{
    glClearColor(0.63f, 0.85f, 0.85f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    Background();
    movingCloude();
    plane();
    Building();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0, -28, 0);
    Road();
    glPopMatrix();
    Crossing(200, 150);
    Crossing(200, 130);
    Crossing(200, 110);
    Crossing(200, 90);
    Crossing(200, 70);
    Crossing(200, 50);
    Details();
   // Roadside();
    Roadside2();
    CarForward();
    footpath();
    scaledlight();
    traffic();
    bench();
    bench2();
    scaledlight1();
    // StreetLight();
    //trashcan();
    trashbin();
    Umbrella();
    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitWindowSize(640, 640);
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
