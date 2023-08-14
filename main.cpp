#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float p=0;
static float s=0;
 void init()
{
    glClearColor(1.0f,1.0f,1.0f,0.0f);
    glOrtho(0,100,0,100,0,100);
}

void delay()
{
    for(int i=0;i<100000000;i++);
}

void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}


void fild()
{
    glColor3ub(128,128,0);
     glBegin(GL_QUADS);
      glVertex2d(0,0);
      glVertex2d(100,0);
      glVertex2d(100,50);
      glVertex2d(0,50);
    glEnd();

    //field
   glBegin(GL_POLYGON);
        glColor3ub(76, 201, 34);
        glVertex2i(-8,70);
        glVertex2i(10,70);
        glVertex2i(5,80);
    glEnd();
     glBegin(GL_POLYGON);
        glColor3ub(76, 201, 34);
        glVertex2i(4,70);
        glVertex2i(20,70);
        glVertex2i(14,78);
    glEnd();
glBegin(GL_POLYGON);
        glColor3ub(76, 201, 34);
        glVertex2i(17,70);
        glVertex2i(40,70);
        glVertex2i(30,80);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(76, 201, 34);
        glVertex2i(35,70);
        glVertex2i(70,70);
        glVertex2i(60,78);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(76, 201, 34);
        glVertex2i(65,70);
        glVertex2i(90,70);
        glVertex2i(80,80);
    glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(76, 201, 34);
        glVertex2i(78,60);
        glVertex2i(105,60);
        glVertex2i(95,85);
    glEnd();
    circle(75,15,45,58);



}

void sun()
{
      glColor3ub(255, 215, 0);
    circle(4,4,15,90);
 glColor3ub(249, 255, 254);
         circle(4,3,10,85);
     circle(4,3,15,85);
      circle(4,3,20,85);
       circle(4,3,12,87);
        circle(4,3,22,88);
}

void tree()
{
    //1tree
    glColor3ub(139,69,19);
     glBegin(GL_TRIANGLES);
      glVertex2d(22,15);
      glVertex2d(26,15);
      glVertex2d(24,45);
    glEnd();

    glColor3ub(54, 201, 56);
    circle(4,7,20,45);
     circle(4,5,22,35);
      circle(4,3,24,42);
       circle(4,5,27,42);
        circle(4,6,25,46);

        //2tree
    glColor3ub(139,69,19);
     glBegin(GL_TRIANGLES);
      glVertex2d(7,12);
      glVertex2d(11,12);
      glVertex2d(9,40);
    glEnd();


    glColor3ub(54, 201, 56);
    circle(4,7,5,40);
     circle(4,5,7,30);
      circle(4,3,9,37);
         circle(4,5,12,37);
        circle(4,6,10,41);

        //3tree
    glColor3ub(139,69,19);
     glBegin(GL_TRIANGLES);
      glVertex2d(87,12);
      glVertex2d(91,12);
      glVertex2d(89,56);
    glEnd();

    glColor3ub(54, 201, 56);
    circle(5,8,84,50);
     circle(5,6,87,40);
      circle(5,4,89,47);
         circle(5,6,92,47);
        circle(4,7,90,51);

}
void water()
{
    glColor3ub(210,105,30);
  circle(75,15,45,51);
  circle(80,12,65,29);
  glColor3ub(0,0,255);
  circle(75,15,45,50);
 circle(80,12,65,30);


    glBegin(GL_POLYGON);
        glColor3ub(0,0,255);
        glVertex2i(0,50);
        glVertex2i(100,60);
        glColor3ub(0,0,255);
        glVertex2i(100,30);
        glVertex2i(0,40);
        glVertex2i(0,40);
    glEnd();

    glBegin(GL_POLYGON);
         glColor3ub(0,0,255);
        glVertex2i(30,22);
        glVertex2i(100,30);
        glColor3ub(0,0,255);
        glVertex2i(100,20);
        glVertex2i(30,22);
        glVertex2i(30,22);
    glEnd();

       glBegin(GL_POLYGON);
       glColor3ub(0,0,255);
        glVertex2i(0,30);
        glVertex2i(50,30);
        glVertex2i(50,60);
        glVertex2i(0,60);
    glEnd();

}

void sky1()
{
     glColor3ub(0, 208, 255);
     glBegin(GL_QUADS);
      glVertex2d(0,50);
      glVertex2d(100,50);
      glVertex2d(100,100);
      glVertex2d(0,100);
    glEnd();
        glColor3ub(15, 158, 37);
    circle(4,6,1,51);
     circle(4,5,4,51);
      circle(4,5,8,51);
       circle(4,3,12,51);
        circle(4,6,14,51);
         circle(4,3,18,51);
          circle(4,6,20,51);
           circle(4,6,1,51);
     circle(4,5,24,51);
       circle(4,3,78,51);
        circle(4,6,84,51);
         circle(4,3,88,51);
          circle(4,6,100,51);
           circle(4,3,80,51);
        circle(4,6,80,51);
         circle(4,3,70,51);
          circle(4,6,100,51);
           circle(4,6,65,51);
         circle(4,3,67,51);
          circle(4,6,100,51);
}
void Nowka()
{
    if(p<=100)
      p=p+0.03;
   else
     p=0;

   glutPostRedisplay();
    glColor3ub(218,165,32);
     circle(9,9,15+p,48);

    glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2i(5+p,39);
        glVertex2i(25+p,39);
        glVertex2i(30+p,48);
        glVertex2i(22+p,45);
        glVertex2i(8+p,45);
        glVertex2i(0+p,48);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2f(7.5+p,53);
        glVertex2f(22.5+p,53);
        glVertex2f(21.9+p,53.5);
        glVertex2f(8.1+p,53.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2f(6.3+p,50);
        glVertex2f(23.8+p,50);
        glVertex2f(23.7+p,50.5);
        glVertex2f(6.4+p,50.5);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2f(6.1+p,47);
        glVertex2f(23.9+p,47);
        glVertex2f(24+p,47.5);
        glVertex2f(6+p,47.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2f(10.5+p,45);
        glVertex2f(10.8+p,45);
        glVertex2f(10.8+p,55.9);
        glVertex2f(10.5+p,55.7);
    glEnd();


     glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2f(14.5+p,45);
        glVertex2f(14.8+p,45);
        glVertex2f(14.8+p,56.9);
        glVertex2f(14.5+p,56.9);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(1,1,1);
        glVertex2f(19.5+p,45);
        glVertex2f(19.8+p,45);
        glVertex2f(19.8+p,55.6);
        glVertex2f(19.5+p,55.8);
    glEnd();

}
void sky(){
if(s<=100)
      s=s+0.07;
   else
     s=0;

   glutPostRedisplay();
 glColor3f(1.0, 1.0, 1.000);
 circle(4,3,0+s,92);
     circle(4,3,5+s,92);
      circle(4,3,10+s,92);
       circle(4,3,2+s,96);
        circle(4,3,7+s,96);

     circle(4,3,35+s,90);
     circle(4,3,40+s,90);
      circle(4,3,45+s,90);
       circle(4,3,37+s,94);
        circle(4,3,42+s,95);



  glColor3ub(249, 255, 254);

    circle(3,2,55,92);
     circle(3,2,60,92);
      circle(3,2,65,92);
       circle(3,2,57,94);
        circle(3,2,62,94);

         circle(3,2,88,88);
     circle(3,2,93,88);
      circle(3,2,98,88);
       circle(3,2,90,90);
        circle(3,2,95,91);

}

void flower(){

     glBegin(GL_POLYGON);
        glColor3ub(218,165,32);
        glVertex2f(59,11);
        glVertex2f(59.5,7);
        glVertex2f(60,11);
        glVertex2f(62,12);
        glVertex2f(60,13);
        glVertex2f(59.5,17);
        glVertex2f(59,13);
        glVertex2f(57,12);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(218,165,32);
        glVertex2f(45,0);
        glVertex2f(45.5,0);
        glVertex2f(46,0);
        glVertex2f(48,1);
        glVertex2f(46,2);
        glVertex2f(45.5,6);
        glVertex2f(45,2);
        glVertex2f(43,1);
    glEnd();


glBegin(GL_POLYGON);
       glColor3ub(218,165,32);
        glVertex2f(71,15.5);
        glVertex2f(71.5,11.5);
        glVertex2f(72,17.3);
        glVertex2f(74,16.5);
        glVertex2f(72,17.3);
        glVertex2f(71.5,17.3);
        glVertex2f(71,17.3);
        glVertex2f(69,16.5);
    glEnd();

    glBegin(GL_POLYGON);
       glColor3ub(218,165,32);
        glVertex2f(84,7);
        glVertex2f(84.5,3);
        glVertex2f(85,9);
        glVertex2f(87,8);
        glVertex2f(85,9);
        glVertex2f(84.5,13);
        glVertex2f(84,9);
        glVertex2f(82,8);
    glEnd();

glBegin(GL_POLYGON);
        glColor3ub(218,165,32);
        glVertex2f(90,7);
        glVertex2f(90.5,4.5);
        glVertex2f(91,9);
        glVertex2f(92.5,8);
        glVertex2f(91,9);
        glVertex2f(90.5,11.5);
        glVertex2f(90,9);
        glVertex2f(88.5,8);
    glEnd();
    glBegin(GL_POLYGON);
      glColor3ub(218,165,32);
        glVertex2f(97,11);
        glVertex2f(97.5,8.5);
        glVertex2f(98,13);
        glVertex2f(99.5,12);
        glVertex2f(98,13);
        glVertex2f(97.5,15.5);
        glVertex2f(97,13);
        glVertex2f(95.5,12);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(218,165,32);
        glVertex2f(24,9);
        glVertex2f(24.5,5);
        glVertex2f(25,11);
        glVertex2f(27,10);
        glVertex2f(25,11);
        glVertex2f(24.5,15);
        glVertex2f(24,11);
        glVertex2f(22,10);
    glEnd();

glBegin(GL_POLYGON);
       glColor3ub(218,165,32);
        glVertex2f(14,10);
        glVertex2f(14.5,7);
        glVertex2f(15,12);
        glVertex2f(17,10);
        glVertex2f(15,12);
        glVertex2f(14.5,15);
        glVertex2f(14,12);
        glVertex2f(12,10);
    glEnd();

}
void myDisplay()
{
    delay();
    glClear(GL_COLOR_BUFFER_BIT);
    sky1();
    fild();
    water();
    Nowka();
    tree();
    sun();
    sky();
    flower();

    glFlush();
}



int main()
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(1280,720);
glutInitWindowPosition(0,0);
glutCreateWindow("View of Village");
init();
glutDisplayFunc(myDisplay);
glutMainLoop();
return 0;
}
