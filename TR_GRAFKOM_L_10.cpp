#include <windows.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouseMotion(int x,int y);


GLUquadricObj *obj = gluNewQuadric();

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("TR_GRAFKOM_L_672018022_672018058_672018065");
    init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
	glutReshapeFunc(ukuran);
    glutMainLoop();

    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);
}

void stadiun()
{



     ///warna lapangan

     //Lapangan luar belakang
    glBegin(GL_POLYGON );
    glColor3ub(48, 150, 67);
    glVertex3f(-50,-30,-27.5);
    glVertex3f(50,-30,-27.5);
    glVertex3f(50,-30,-30);
    glVertex3f(-50,-30,-30);
    glEnd();

     //Lapangan luar kdepan
    glBegin(GL_POLYGON );
    glColor3ub(48, 150, 67);
    glVertex3f(-50,-30,27.5);
    glVertex3f(50,-30,27.5);
    glVertex3f(50,-30,30);
    glVertex3f(-50,-30,30);
    glEnd();

    //Lapangan luar kiri
    glBegin(GL_POLYGON );
    glColor3ub(48, 150, 67);
    glVertex3f(-50,-30,30);
    glVertex3f(-45,-30,30);
    glVertex3f(-45,-30,-30);
    glVertex3f(-50,-30,-30);
    glEnd();
 //Lapangan luar kanan
    glBegin(GL_POLYGON );
    glColor3ub(48, 150, 67);
    glVertex3f(50,-30,30);
    glVertex3f(45,-30,30);
    glVertex3f(45,-30,-30);
    glVertex3f(50,-30,-30);
    glEnd();

    ///lapanagn dalam


    glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(-45,-30,26.5);
    glVertex3f(-40,-30,26.5);
    glVertex3f(-40,-30,-26.5);
    glVertex3f(-45,-30,-26.5);
    glEnd();


    glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(-40,-30,26.5);
    glVertex3f(-35,-30,26.5);
    glVertex3f(-35,-30,-26.5);
    glVertex3f(-40,-30,-26.5);
    glEnd();


    glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(-35,-30,26.5);
    glVertex3f(-30,-30,26.5);
    glVertex3f(-30,-30,-26.5);
    glVertex3f(-35,-30,-26.5);
    glEnd();


    glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(-30,-30,26.5);
    glVertex3f(-25,-30,26.5);
    glVertex3f(-25,-30,-26.5);
    glVertex3f(-30,-30,-26.5);
    glEnd();

      glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(-25,-30,26.5);
    glVertex3f(-20,-30,26.5);
    glVertex3f(-20,-30,-26.5);
    glVertex3f(-25,-30,-26.5);
    glEnd();

     glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(-15,-30,26.5);
    glVertex3f(-20,-30,26.5);
    glVertex3f(-20,-30,-26.5);
    glVertex3f(-15,-30,-26.5);
    glEnd();

    glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(-15,-30,26.5);
    glVertex3f(-10,-30,26.5);
    glVertex3f(-10,-30,-26.5);
    glVertex3f(-15,-30,-26.5);
    glEnd();

    glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(-5,-30,26.5);
    glVertex3f(-10,-30,26.5);
    glVertex3f(-10,-30,-26.5);
    glVertex3f(-5,-30,-26.5);
    glEnd();

     glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(-5,-30,26.5);
    glVertex3f(0,-30,26.5);
    glVertex3f(0,-30,-26.5);
    glVertex3f(-5,-30,-26.5);
    glEnd();

    glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(5,-30,26.5);
    glVertex3f(0,-30,26.5);
    glVertex3f(0,-30,-26.5);
    glVertex3f(5,-30,-26.5);
    glEnd();

       glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(5,-30,26.5);
    glVertex3f(10,-30,26.5);
    glVertex3f(10,-30,-26.5);
    glVertex3f(5,-30,-26.5);
    glEnd();

   glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(15,-30,26.5);
    glVertex3f(10,-30,26.5);
    glVertex3f(10,-30,-26.5);
    glVertex3f(15,-30,-26.5);
    glEnd();

     glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(15,-30,26.5);
    glVertex3f(20,-30,26.5);
    glVertex3f(20,-30,-26.5);
    glVertex3f(15,-30,-26.5);
    glEnd();

      glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(25,-30,26.5);
    glVertex3f(20,-30,26.5);
    glVertex3f(20,-30,-26.5);
    glVertex3f(25,-30,-26.5);
    glEnd();

      glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(25,-30,26.5);
    glVertex3f(30,-30,26.5);
    glVertex3f(30,-30,-26.5);
    glVertex3f(25,-30,-26.5);
    glEnd();

 glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(35,-30,26.5);
    glVertex3f(30,-30,26.5);
    glVertex3f(30,-30,-26.5);
    glVertex3f(35,-30,-26.5);
    glEnd();

       glBegin(GL_POLYGON );
    glColor3ub(0, 240, 45);
    glVertex3f(35,-30,26.5);
    glVertex3f(40,-30,26.5);
    glVertex3f(40,-30,-26.5);
    glVertex3f(35,-30,-26.5);
    glEnd();

     glBegin(GL_POLYGON );
    glColor3ub(28, 117, 45);
    glVertex3f(45,-30,26.5);
    glVertex3f(40,-30,26.5);
    glVertex3f(40,-30,-26.5);
    glVertex3f(45,-30,-26.5);
    glEnd();



  //garis lapangan
	glBegin(GL_LINES );
	glColor3ub(255,255,255);
	glVertex3f(-45,-30,27);
    glVertex3f(45,-30,27);
    glVertex3f(45,-30,-27);
	glVertex3f(45,-30,27);
	glVertex3f(45,-30,-27);
    glVertex3f(-45,-30,-27);
	glVertex3f(-45,-30,27);
	glVertex3f(-45,-30,-27);

	glVertex3f(-45,-30,15);
    glVertex3f(-35,-30,15);
    glVertex3f(-35,-30,-15);
	glVertex3f(-35,-30,15);
	glVertex3f(-35,-30,-15);
    glVertex3f(-45,-30,-15);
	glVertex3f(-45,-30,15);
	glVertex3f(-45,-30,-15);

	glVertex3f(-45,-30,8);
    glVertex3f(-40,-30,8);
    glVertex3f(-40,-30,-8);
	glVertex3f(-40,-30,8);
	glVertex3f(-40,-30,-8);
    glVertex3f(-45,-30,-8);
	glVertex3f(-45,-30,8);
	glVertex3f(-45,-30,-8);

	glVertex3f(35,-30,15);
    glVertex3f(45,-30,15);
    glVertex3f(45,-30,-15);
	glVertex3f(45,-30,15);
	glVertex3f(45,-30,-15);
    glVertex3f(35,-30,-15);
	glVertex3f(35,-30,15);
	glVertex3f(35,-30,-15);

	glVertex3f(40,-30,8);
    glVertex3f(45,-30,8);
    glVertex3f(45,-30,-8);
	glVertex3f(45,-30,8);
	glVertex3f(45,-30,-8);
    glVertex3f(40,-30,-8);
	glVertex3f(40,-30,8);
	glVertex3f(40,-30,-8);


	//garis tengah lapangan
	glVertex3f(0,-30,27);
	glVertex3f(0,-30,-27);
	glVertex3f(0,-30,27);
	glVertex3f(0,-30,-27);

	glEnd();

	///badan stadiun

    //dasar bawah
    glBegin(GL_QUADS);
    glColor3ub(137, 145, 139);
    glVertex3f(-60,-33,40);
    glVertex3f(60,-33,40);
    glVertex3f(60,-33,-40);
    glVertex3f(-60,-33,-40);
    glEnd();

    //tembok depan
    glBegin(GL_QUADS);
    glColor3ub(137, 145, 139);
    glVertex3f(-60,-33,40);
    glVertex3f(-60,-22,40);
    glVertex3f(60,-22,40);
    glVertex3f(60,-33,40);
    glEnd();

    //tembok belakang
    glBegin(GL_QUADS);
    glColor3ub(9, 10, 10);
    glVertex3f(-60,-33,-40);
    glVertex3f(-60,-22,-40);
    glVertex3f(60,-22,-40);
    glVertex3f(60,-33,-40);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3ub(137, 145, 139);
    glVertex3f(-60,-22,40);
    glVertex3f(-60,-33,40);
    glVertex3f(-60,-33,-40);
    glVertex3f(-60,-22,-40);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3ub(137, 145, 139);
    glVertex3f(60,-22,40);
    glVertex3f(60,-33,40);
    glVertex3f(60,-33,-40);
    glVertex3f(60,-22,-40);
    glEnd();


     //kiri PUTIH
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-50,-28,30);
    glVertex3f(-50,-30,30);
    glVertex3f(-50,-30,-30);
    glVertex3f(-50,-28,-30);
    glEnd();


     //kiri PUTIH 1
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-49,-29,29);
    glVertex3f(-49,-30,29);
    glVertex3f(-49,-30,-30);
    glVertex3f(-49,-29,-30);
    glEnd();

    //tangga tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-48,-28.5,-22);
    glVertex3f(-50,-28,-22);
    glVertex3f(-50,-28,-25);
    glVertex3f(-48,-28.5,-25);
    glEnd();

    //tangga tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-48,-28.5,-12);
    glVertex3f(-50,-28,-12);
    glVertex3f(-50,-28,-15);
    glVertex3f(-48,-28.5,-15);
    glEnd();

     //tangga tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-48,-28.5,-2);
    glVertex3f(-50,-28,-2);
    glVertex3f(-50,-28,-5);
    glVertex3f(-48,-28.5,-5);
    glEnd();

    //tangga tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-48,-28.5,8);
    glVertex3f(-50,-28,8);
    glVertex3f(-50,-28,5);
    glVertex3f(-48,-28.5,5);
    glEnd();

     //tangga tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-48,-28.5,18);
    glVertex3f(-50,-28,18);
    glVertex3f(-50,-28,15);
    glVertex3f(-48,-28.5,15);
    glEnd();

     //tangga tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-48,-28.5,28);
    glVertex3f(-50,-28,28);
    glVertex3f(-50,-28,25);
    glVertex3f(-48,-28.5,25);
    glEnd();

    //tribun tingkat pertama kiri
    glBegin(GL_QUADS);
    glColor3ub(128, 162, 255);
    glVertex3f(-63,-20,30);
    glVertex3f(-50,-28,30);
    glVertex3f(-50,-28,-30);
    glVertex3f(-63,-20,-30);
    glEnd();

     //PUTIH kanan
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(50,-28,30);
    glVertex3f(50,-30,30);
    glVertex3f(50,-30,-30);
    glVertex3f(50,-28,-30);
    glEnd();

     //PUTIH KANAN 1
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(49,-29,29);
    glVertex3f(49,-30,29);
    glVertex3f(49,-30,-30);
    glVertex3f(49,-29,-30);
    glEnd();

       //tangga tribun tingkat pertama kANAN
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(48,-28.5,-22);
    glVertex3f(50,-28,-22);
    glVertex3f(50,-28,-25);
    glVertex3f(48,-28.5,-25);
    glEnd();

    //tangga tribun tingkat pertama kanan
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(48,-28.5,-12);
    glVertex3f(50,-28,-12);
    glVertex3f(50,-28,-15);
    glVertex3f(48,-28.5,-15);
    glEnd();

     //tangga tribun tingkat pertama kanan
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(48,-28.5,-2);
    glVertex3f(50,-28,-2);
    glVertex3f(50,-28,-5);
    glVertex3f(48,-28.5,-5);
    glEnd();

    //tangga tribun tingkat pertama kanan
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(48,-28.5,8);
    glVertex3f(50,-28,8);
    glVertex3f(50,-28,5);
    glVertex3f(48,-28.5,5);
    glEnd();

     //tangga tribun tingkat pertama kanan
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(48,-28.5,18);
    glVertex3f(50,-28,18);
    glVertex3f(50,-28,15);
    glVertex3f(48,-28.5,15);
    glEnd();

     //tangga tribun tingkat pertama kanan
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(48,-28.5,28);
    glVertex3f(50,-28,28);
    glVertex3f(50,-28,25);
    glVertex3f(48,-28.5,25);
    glEnd();

    //tribun tingkat pertama kanan
    glBegin(GL_QUADS);
    glColor3ub(128, 162, 255);
    glVertex3f(63,-20,30);
    glVertex3f(50,-28,30);
    glVertex3f(50,-28,-30);
    glVertex3f(63,-20,-30);
    glEnd();

    // belakang putih KIRI
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-49,-30,-30);
    glVertex3f(-49,-28,-30);
    glVertex3f(-50,-28,-30);
    glVertex3f(-50,-30,-30);
    glEnd();

  // belakang putih
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-40,-30,-30);
    glVertex3f(-40,-28,-30);
    glVertex3f(40,-28,-30);
    glVertex3f(40,-30,-30);
    glEnd();


     //LORONG MASUK PENONTON KIRI
    glBegin(GL_QUADS);
    glColor3ub(60, 64, 62);
    glVertex3f(-49,-30,-29.9);
    glVertex3f(-49,-30,-40);
    glVertex3f(-39,-30,-40);
    glVertex3f(-39,-30,-29.9);
    glEnd();

// belakang putih KANAN
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(49,-30,-30);
    glVertex3f(49,-28,-30);
    glVertex3f(50,-28,-30);
    glVertex3f(50,-30,-30);
    glEnd();

  // belakang putih KANAN
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(40,-30,-30);
    glVertex3f(40,-28,-30);
    glVertex3f(-40,-28,-30);
    glVertex3f(-40,-30,-30);
    glEnd();


     //LORONG MASUK PENONTON KANAN
    glBegin(GL_QUADS);
    glColor3ub(60, 64, 62);
    glVertex3f(49,-30,-29.9);
    glVertex3f(49,-30,-40);
    glVertex3f(39,-30,-40);
    glVertex3f(39,-30,-29.9);
    glEnd();

    //KIRI

    //LORONG PENONTON DINDING KIRI
    glBegin(GL_QUADS);
    glColor3ub(187, 191, 189);
    glVertex3f(-49,-28,-30);
    glVertex3f(-49,-30,-30);
    glVertex3f(-49,-30,-40);
    glVertex3f(-49,-22,-40);
    glEnd();

      //LORONG PENONTON DINDING KANAN
    glBegin(GL_QUADS);
    glColor3ub(187, 191, 189);
    glVertex3f(-39,-28,-30);
    glVertex3f(-39,-30,-30);
    glVertex3f(-39,-30,-40);
    glVertex3f(-39,-22,-40);
    glEnd();

      //KANAN

    //LORONG PENONTON DINDING KIRI
    glBegin(GL_QUADS);
    glColor3ub(187, 191, 189);
    glVertex3f(49,-28,-30);
    glVertex3f(49,-30,-30);
    glVertex3f(49,-30,-40);
    glVertex3f(49,-22,-40);
    glEnd();

      //LORONG PENONTON DINDING KANAN
    glBegin(GL_QUADS);
    glColor3ub(187, 191, 189);
    glVertex3f(39,-28,-30);
    glVertex3f(39,-30,-30);
    glVertex3f(39,-30,-40);
    glVertex3f(39,-22,-40);
    glEnd();


     //tribun belakang tingkat 1 TENGAH
    glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(40,-28,-30);
    glVertex3f(40,-20,-43);
    glVertex3f(-40,-20,-43);
    glVertex3f(-40,-28,-30);
    glEnd();

      //tribun belakang tingkat 1 TENGAH KIRI
        glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-40,-21.9,-40);
    glVertex3f(-40,-20,-43);
    glVertex3f(-49,-20,-43);
    glVertex3f(-49,-21.9,-40);
    glEnd();

    //tribun belakang tingkat 1 TENGAH KANAN
        glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(40,-21.9,-40);
    glVertex3f(40,-20,-43);
    glVertex3f(49,-20,-43);
    glVertex3f(49,-21.9,-40);
    glEnd();

     //tribun belakang tingkat 1 KANAN
       glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(49,-28,-30);
    glVertex3f(49,-20,-43);
    glVertex3f(50,-20,-43);
    glVertex3f(50,-28,-30);
    glEnd();

     //tribun belakang tingkat 1 KIRI
       glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-50,-28,-30);
    glVertex3f(-50,-20,-43);
    glVertex3f(-49,-20,-43);
    glVertex3f(-49,-28,-30);
    glEnd();

// depan putih
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-50,-30,30);
    glVertex3f(-50,-28,30);
    glVertex3f(50,-28,30);
    glVertex3f(50,-30,30);
    glEnd();

    // depan putih 1
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex3f(-49,-30,29);
    glVertex3f(-49,-29,29);
    glVertex3f(49,-29,29);
    glVertex3f(49,-30,29);
    glEnd();

 //tribun depan tingkat 1
        glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-50,-28,30);
    glVertex3f(-50,-20,43);
    glVertex3f(50,-20,43);
    glVertex3f(50,-28,30);
    glEnd();

     //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-40,-28,30);
    glVertex3f(-40,-30,29);
    glVertex3f(-42,-30,29);
    glVertex3f(-42,-28,30);
    glEnd();

 //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-30,-28,30);
    glVertex3f(-30,-30,29);
    glVertex3f(-32,-30,29);
    glVertex3f(-32,-28,30);
    glEnd();

    //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-20,-28,30);
    glVertex3f(-20,-30,29);
    glVertex3f(-22,-30,29);
    glVertex3f(-22,-28,30);
    glEnd();

      //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(-10,-28,30);
    glVertex3f(-10,-30,29);
    glVertex3f(-12,-30,29);
    glVertex3f(-12,-28,30);
    glEnd();

     //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(0,-28,30);
    glVertex3f(0,-30,29);
    glVertex3f(-2,-30,29);
    glVertex3f(-2,-28,30);
    glEnd();

     //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(10,-28,30);
    glVertex3f(10,-30,29);
    glVertex3f(8,-30,29);
    glVertex3f(8,-28,30);
    glEnd();

    //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(20,-28,30);
    glVertex3f(20,-30,29);
    glVertex3f(18,-30,29);
    glVertex3f(18,-28,30);
    glEnd();

    //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(30,-28,30);
    glVertex3f(30,-30,29);
    glVertex3f(28,-30,29);
    glVertex3f(28,-28,30);
    glEnd();

    //tangga tribun depan tingkat 1
    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex3f(40,-28,30);
    glVertex3f(40,-30,29);
    glVertex3f(38,-30,29);
    glVertex3f(38,-28,30);
    glEnd();

//.........................................................//
    //segitiga tribun belakang tingkat 1 kanan
    glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(50,-20,-43);
    glVertex3f(50,-28,-30);
    glVertex3f(63,-20,-30);
    glEnd();
    //segitiga tribun belakang tingkat 1 kiri
    glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-50,-20,-43);
    glVertex3f(-50,-28,-30);
    glVertex3f(-63,-20,-30);
    glEnd();
    //segitiga tribun depan tingkat 1 kanan
    glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(50,-20,43);
    glVertex3f(50,-28,30);
    glVertex3f(63,-20,30);
    glEnd();
    //segitiga tribun depan tingkat 1 kiri
    glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-50,-20,43);
    glVertex3f(-50,-28,30);
    glVertex3f(-63,-20,30);
    glEnd();
	glPushMatrix();
	glPopMatrix();

	// Tembok depan TRIBUN LANTAI 2

    //kiri
    glBegin(GL_QUADS);
    glColor3ub(250, 52, 52);
    glVertex3f(-63,-13,30);
    glVertex3f(-63,-20,30);
    glVertex3f(-63,-20,-30);
    glVertex3f(-63,-13,-30);
    glEnd();
    //KANAN
    glBegin(GL_QUADS);
    glColor3ub(250, 52, 52);
    glVertex3f(63,-13,30);
    glVertex3f(63,-20,30);
    glVertex3f(63,-20,-30);
    glVertex3f(63,-13,-30);
    glEnd();

    // depan
    glBegin(GL_QUADS);
    glColor3ub(250, 52, 52);
    glVertex3f(-50,-20,43);
    glVertex3f(-50,-13,43);
    glVertex3f(50,-13,43);
    glVertex3f(50,-20,43);
    glEnd();

    // BELAKANG
    glBegin(GL_QUADS);
    glColor3ub(250, 52, 52);
    glVertex3f(-50,-20,-43);
    glVertex3f(-50,-12,-43);
    glVertex3f(50,-12,-43);
    glVertex3f(50,-20,-43);
    glEnd();

    //TRIBUN LANTAI 2

     //tribun tingkat KEDUA kiri
       glBegin(GL_POLYGON);
    glColor3ub(201, 222, 255);
    glVertex3f(-72,-5,30);
    glVertex3f(-63,-13,30);
    glVertex3f(-63,-13,-30);
    glVertex3f(-72,-5,-30);
    glEnd();

    //tribun tingkat KEDUA KANAN
        glBegin(GL_POLYGON);
    glColor3ub(201, 222, 255);
    glVertex3f(72,-5,30);
    glVertex3f(63,-13,30);
    glVertex3f(63,-13,-30);
    glVertex3f(72,-5,-30);
    glEnd();


 //tribun depan tingkat 2
        glBegin(GL_POLYGON);
    glColor3ub(201, 222, 255);
    glVertex3f(-50,-13,43);
    glVertex3f(-50,-5,52);
    glVertex3f(50,-5,52);
    glVertex3f(50,-13,43);
    glEnd();

    //tribun BELAKANG tingkat 2
    glBegin(GL_POLYGON);
    glColor3ub(201, 222, 255);
    glVertex3f(-50,-12,-43);
    glVertex3f(-50,-5,-52);
    glVertex3f(50,-5,-52);
    glVertex3f(50,-12,-43);
    glEnd();

    ////////////////////////////////
    //INI BUAT SEGI 4 TURUNAN DARI SEGITIGA TRIBUN TINGKAT 1
    //kiri BELAKANG
        glBegin(GL_POLYGON);
    glColor3ub(250, 52, 52);
    glVertex3f(-50,-12,-43);
    glVertex3f(-50,-20,-43);
    glVertex3f(-63,-20,-30);
    glVertex3f(-63,-13,-30);
    glEnd();
    //ATAS belakang
    glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-50,-5,-52);
    glVertex3f(-50,-12,-43);
    glVertex3f(-63,-13,-30);
    glVertex3f(-72,-5,-30);
    glEnd();

    //kANAN
        glBegin(GL_POLYGON);
    glColor3ub(250, 52, 52);
    glVertex3f(50,-12,-43);
    glVertex3f(50,-20,-43);
    glVertex3f(63,-20,-30);
    glVertex3f(63,-13,-30);
    glEnd();
    //atas kanan
        glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(50,-12,-43);
    glVertex3f(50,-5,-52);
    glVertex3f(72,-5,-30);
    glVertex3f(63,-13,-30);
    glEnd();
     //kiri DEPAN
       glBegin(GL_POLYGON);
    glColor3ub(250, 52, 52);
    glVertex3f(-50,-13,43);
    glVertex3f(-50,-20,43);
    glVertex3f(-63,-20,30);
    glVertex3f(-63,-13,30);
    glEnd();
    //atas kiri DEPAN
       glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(-50,-13,43);
    glVertex3f(-50,-5,52);
    glVertex3f(-72,-5,30);
    glVertex3f(-63,-13,30);
    glEnd();
     //kANAN DEPAN
       glBegin(GL_POLYGON);
    glColor3ub(250, 52, 52);
    glVertex3f(50,-13,43);
    glVertex3f(50,-20,43);
    glVertex3f(63,-20,30);
    glVertex3f(63,-13,30);
    glEnd();
    //atas kanan DEPAN
      glBegin(GL_POLYGON);
    glColor3ub(128, 162, 255);
    glVertex3f(50,-13,43);
    glVertex3f(50,-5,52);
    glVertex3f(72,-5,30);
    glVertex3f(63,-13,30);
    glEnd();


    /////////////////////////////////////LINGKARAN LAPANGAN
                                            ///tengah

                                            glPushMatrix();
											glTranslatef(0,-29.5,0);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,10,10,0.5,60,60);
											glPopMatrix();

                                            /*glEnd();
                                            glBegin(GL_POLYGON );
                                            glColor3ub(28, 117, 45);
                                            glVertex3f(-38.5,-28.8,10);
                                            glVertex3f(-35.5,-28.8,10);
                                            glVertex3f(-35.5,-28.8,-10);
                                            glVertex3f(-38.5,-28.8,-10);
                                            glEnd();


                                            ///lingakarn dekat gawang kiri
                                            glPushMatrix();
											glTranslatef(-35,-29.5,0);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,3,3,0.5,60,60);
											glPopMatrix();
                                            glEnd();

                                              glEnd();
                                            glBegin(GL_POLYGON );
                                            glColor3ub(0, 240, 45);
                                            glVertex3f(38.5,-28.8,10);
                                            glVertex3f(35.5,-28.8,10);
                                            glVertex3f(35.5,-28.8,-10);
                                            glVertex3f(38.5,-28.8,-10);
                                            glEnd();


                                            ///lingakarn dekat gawang kiri
                                            glPushMatrix();
											glTranslatef(35,-29.5,0);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,3,3,0.5,60,60);
											glPopMatrix();
                                            glEnd();
                                            ////TIANG
                                            glPushMatrix();
											glTranslatef(49,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();*/

                                               ////TIANG
                                            glPushMatrix();
											glTranslatef(43,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

                                               ////TIANG
                                            glPushMatrix();
											glTranslatef(37,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

                                              ////TIANG
                                            glPushMatrix();
											glTranslatef(31,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

                                              ////TIANG
                                            glPushMatrix();
											glTranslatef(25,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();
                                        ////TIANG
                                            glPushMatrix();
											glTranslatef(19,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

////TIANG
                                            glPushMatrix();
											glTranslatef(13,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

                                            ////TIANG
                                            glPushMatrix();
											glTranslatef(7,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();
  ////TIANG
                                            glPushMatrix();
											glTranslatef(1,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

                                              ////TIANG
                                            glPushMatrix();
											glTranslatef(-5,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

                                                ////TIANG
                                            glPushMatrix();
											glTranslatef(-11,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();

   ////TIANG
                                            glPushMatrix();
											glTranslatef(-11,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();
   ////TIANG
                                            glPushMatrix();
											glTranslatef(-17,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();
   ////TIANG
                                            glPushMatrix();
											glTranslatef(-23,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();
   ////TIANG
                                            glPushMatrix();
											glTranslatef(-29,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();
   ////TIANG
                                            glPushMatrix();
											glTranslatef(-35,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();

                                            glEnd();   ////TIANG
                                            glPushMatrix();
											glTranslatef(-41,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();   ////TIANG
                                            glPushMatrix();
											glTranslatef(-47,14,-61);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.3,0.5,24,60,60);
											glPopMatrix();
                                            glEnd();


                                                glPushMatrix();
											glTranslatef(-50,16,-62);
											glRotatef(90,0,90,0);
											glColor3ub(128, 128, 128);
											gluCylinder(obj,2,2,100,60,60);
											glPopMatrix();
                                            glEnd();

    //////////////TIANG LAMPU
                                            //BELAKANG KIRI

                                            glPushMatrix();
											glTranslatef(-57,18,-35);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.7,40,60,60);
											glPopMatrix();
                                            glEnd();

    //gradiasi lampu
glPointSize(10.0);
	glColor3ub(242, 231, 29);
	glBegin(GL_POLYGON);
	glVertex3f(-55,18,-37);
    glVertex3f(-55,23,-35);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 252);
    glVertex3f(-59,23,-32);
    glVertex3f(-59,18,-34);
	glEnd();
 //BELAKANG KANAN
                                            glPushMatrix();
											glTranslatef(57,18,35);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.7,40,60,60);
											glPopMatrix();
                                            glEnd();

    //gradiasi lampu
glPointSize(10.0);
	glColor3ub(242, 231, 29);
	glBegin(GL_POLYGON);
	glVertex3f(55,18,37);
    glVertex3f(55,23,35);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 252);
    glVertex3f(59,23,32);
    glVertex3f(59,18,34);
	glEnd();
 //DEPAN KIRI

                                            glPushMatrix();
											glTranslatef(-57,18,35);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.7,40,60,60);
											glPopMatrix();
                                            glEnd();
    //gradiasi lampu
glPointSize(10.0);
	glColor3ub(242, 231, 29);
	glBegin(GL_POLYGON);
	glVertex3f(-55,18,37);
    glVertex3f(-55,23,35);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 252);
    glVertex3f(-59,23,32);
    glVertex3f(-59,18,34);
	glEnd();

 //DEPAN KANAN
                                            glPushMatrix();
											glTranslatef(57,18,-35);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.7,40,60,60);
											glPopMatrix();
                                            glEnd();
         //gradiasi lampu
glPointSize(10.0);
	glColor3ub(242, 231, 29);
	glBegin(GL_POLYGON);
	glVertex3f(55,18,-37);
    glVertex3f(55,23,-35);
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 252);
    glVertex3f(59,23,-32);
    glVertex3f(59,18,-34);
	glEnd();


    ////////////////////////////////////////////////atap tribun ///////////////

    //ekstra tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(106, 165, 230);
    glVertex3f(-50,10,-59);
    glVertex3f(-50,-5,-52);
    glVertex3f(50,-5,-52);
    glVertex3f(50,10,-59);
    glEnd();
    //atap       tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(169, 170, 171);
    glVertex3f(-50,14,-62);
    glVertex3f(-50,18,-35);
    glVertex3f(50,18,-35);
    glVertex3f(50,14,-62);
    glEnd();
    //atap2       tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(169, 170, 171);
    glVertex3f(-50,17,-62);
    glVertex3f(-50,20,-35);
    glVertex3f(50,20,-35);
    glVertex3f(50,17,-62);
    glEnd();
    //atap3       tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(-50,20,-35);
    glVertex3f(-50,18,-35);
    glVertex3f(50,18,-35);
    glVertex3f(50,20,-35);
    glEnd();
    //atap4       tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(50,14,-62);
    glVertex3f(50,17,-62);
    glVertex3f(50,20,-35);
    glVertex3f(50,18,-35);
    glEnd();
    //atap5       tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(-50,14,-62);
    glVertex3f(-50,17,-62);
    glVertex3f(-50,20,-35);
    glVertex3f(-50,18,-35);
    glEnd();
    //atap6       tribun BELAKANG tingkat 2
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(-50,16.5,-60);
    glVertex3f(-50,-33,-55);
    glVertex3f(50,-33,-55);
    glVertex3f(50,16.5,-60);
    glEnd();
    //dasar bawah
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex3f(-50,-33,-55);
    glVertex3f(50,-33,-55);
    glVertex3f(50,-33,-40);
    glVertex3f(-50,-33,-40);
    glEnd();
//pinggir atap tribun
    glBegin(GL_POLYGON);
    glColor3ub(163, 23, 23);
    glVertex3f(-50,-33,-55);
    glVertex3f(-50,10.5,-59.3);
    glVertex3f(-50,-5,-52);
    glVertex3f(-50,-12,-43);
    glVertex3f(-50,-20,-40);
    glVertex3f(-50,-33,-40);
    glEnd();
//pinggir atap tribun
    glBegin(GL_POLYGON);
    glColor3ub(163, 23, 23);
    glVertex3f(50,-33,-55);
    glVertex3f(50,10.5,-59.3);
    glVertex3f(50,-5,-52);
    glVertex3f(50,-12,-43);
    glVertex3f(50,-20,-40);
    glVertex3f(50,-33,-40);
    glEnd();
/////////////////////////////////tampilan deapn tribun/////////////////
    //tampilan deapn tribun
    glBegin(GL_QUADS);
    glColor3ub(158, 155, 155);
    glVertex3f(-50, -10 ,-62);
    glVertex3f(-50,-33,-62);
    glVertex3f(50,-33,-62);
    glVertex3f(50, -10 ,-62);
    glEnd();
    //tampilan deapn tribun
    glBegin(GL_QUADS);
    glColor3ub(194, 194, 194);
    glVertex3f(-50, -10 ,-62);
    glVertex3f(-50,-10,-57);
    glVertex3f(50,-10,-57);
    glVertex3f(50, -10 ,-62);
    glEnd();
    //kanan tampilan deapn tribun
    glBegin(GL_QUADS);
    glColor3ub(77, 76, 76);
    glVertex3f(-50, -10 ,-62);
    glVertex3f(-50,-10,-57);
    glVertex3f(-50,-33,-55);
    glVertex3f(-50, -33 ,-62);
    glEnd();
    //kiri tampilan deapn tribun
    glBegin(GL_QUADS);
    glColor3ub(77, 76, 76);
    glVertex3f(50, -10 ,-62);
    glVertex3f(50,-10,-57);
    glVertex3f(50,-33,-55);
    glVertex3f(50, -33 ,-62);
    glEnd();

    /////////////////////tangga tribun
    //trbun depan lantai 1

    ////////////1/////////////////////
     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -26, 31);
    glVertex3f(40, -28, 31);
    glVertex3f(48, -28, 31);
    glVertex3f(48, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -26, 33);
    glVertex3f(40, -26, 31);
    glVertex3f(48, -26, 31);
    glVertex3f(48, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -24, 33);
    glVertex3f(40, -26, 33);
    glVertex3f(48, -26, 33);
    glVertex3f(48, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -24, 35);
    glVertex3f(40, -24, 33);
    glVertex3f(48, -24, 33);
    glVertex3f(48, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -24, 35);
    glVertex3f(40, -22, 35);
    glVertex3f(48, -22, 35);
    glVertex3f(48, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -22, 37);
    glVertex3f(40, -22, 35);
    glVertex3f(48, -22, 35);
    glVertex3f(48, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -22, 37);
    glVertex3f(40, -20, 37);
    glVertex3f(48, -20, 37);
    glVertex3f(48, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -20, 39);
    glVertex3f(40, -20, 37);
    glVertex3f(48, -20, 37);
    glVertex3f(48, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -20, 39);
    glVertex3f(40, -18, 39);
    glVertex3f(48, -18, 39);
    glVertex3f(48, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -18, 41);
    glVertex3f(40, -18, 39);
    glVertex3f(48, -18, 39);
    glVertex3f(48, -18, 41);
    glEnd();


    //////////////2//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -26, 31);
    glVertex3f(30, -28, 31);
    glVertex3f(38, -28, 31);
    glVertex3f(38, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -26, 33);
    glVertex3f(30, -26, 31);
    glVertex3f(38, -26, 31);
    glVertex3f(38, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -24, 33);
    glVertex3f(30, -26, 33);
    glVertex3f(38, -26, 33);
    glVertex3f(38, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -24, 35);
    glVertex3f(30, -24, 33);
    glVertex3f(38, -24, 33);
    glVertex3f(38, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -24, 35);
    glVertex3f(30, -22, 35);
    glVertex3f(38, -22, 35);
    glVertex3f(38, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -22, 37);
    glVertex3f(30, -22, 35);
    glVertex3f(38, -22, 35);
    glVertex3f(38, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -22, 37);
    glVertex3f(30, -20, 37);
    glVertex3f(38, -20, 37);
    glVertex3f(38, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -20, 39);
    glVertex3f(30, -20, 37);
    glVertex3f(38, -20, 37);
    glVertex3f(38, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -20, 39);
    glVertex3f(30, -18, 39);
    glVertex3f(38, -18, 39);
    glVertex3f(38, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -18, 41);
    glVertex3f(30, -18, 39);
    glVertex3f(38, -18, 39);
    glVertex3f(38, -18, 41);
    glEnd();

   //////////////3//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -26, 31);
    glVertex3f(20, -28, 31);
    glVertex3f(28, -28, 31);
    glVertex3f(28, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -26, 33);
    glVertex3f(20, -26, 31);
    glVertex3f(28, -26, 31);
    glVertex3f(28, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -24, 33);
    glVertex3f(20, -26, 33);
    glVertex3f(28, -26, 33);
    glVertex3f(28, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -24, 35);
    glVertex3f(20, -24, 33);
    glVertex3f(28, -24, 33);
    glVertex3f(28, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -24, 35);
    glVertex3f(20, -22, 35);
    glVertex3f(28, -22, 35);
    glVertex3f(28, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -22, 37);
    glVertex3f(20, -22, 35);
    glVertex3f(28, -22, 35);
    glVertex3f(28, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -22, 37);
    glVertex3f(20, -20, 37);
    glVertex3f(28, -20, 37);
    glVertex3f(28, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -20, 39);
    glVertex3f(20, -20, 37);
    glVertex3f(28, -20, 37);
    glVertex3f(28, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -20, 39);
    glVertex3f(20, -18, 39);
    glVertex3f(28, -18, 39);
    glVertex3f(28, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -18, 41);
    glVertex3f(20, -18, 39);
    glVertex3f(28, -18, 39);
    glVertex3f(28, -18, 41);
    glEnd();

     //////////////4//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -26, 31);
    glVertex3f(10, -28, 31);
    glVertex3f(18, -28, 31);
    glVertex3f(18, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -26, 33);
    glVertex3f(10, -26, 31);
    glVertex3f(18, -26, 31);
    glVertex3f(18, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -24, 33);
    glVertex3f(10, -26, 33);
    glVertex3f(18, -26, 33);
    glVertex3f(18, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -24, 35);
    glVertex3f(10, -24, 33);
    glVertex3f(18, -24, 33);
    glVertex3f(18, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -24, 35);
    glVertex3f(10, -22, 35);
    glVertex3f(18, -22, 35);
    glVertex3f(18, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -22, 37);
    glVertex3f(10, -22, 35);
    glVertex3f(18, -22, 35);
    glVertex3f(18, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -22, 37);
    glVertex3f(10, -20, 37);
    glVertex3f(18, -20, 37);
    glVertex3f(18, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -20, 39);
    glVertex3f(10, -20, 37);
    glVertex3f(18, -20, 37);
    glVertex3f(18, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -20, 39);
    glVertex3f(10, -18, 39);
    glVertex3f(18, -18, 39);
    glVertex3f(18, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -18, 41);
    glVertex3f(10, -18, 39);
    glVertex3f(18, -18, 39);
    glVertex3f(18, -18, 41);
    glEnd();

     //////////////5//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -26, 31);
    glVertex3f(0, -28, 31);
    glVertex3f(8, -28, 31);
    glVertex3f(8, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -26, 33);
    glVertex3f(0, -26, 31);
    glVertex3f(8, -26, 31);
    glVertex3f(8, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -24, 33);
    glVertex3f(0, -26, 33);
    glVertex3f(8, -26, 33);
    glVertex3f(8, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -24, 35);
    glVertex3f(0, -24, 33);
    glVertex3f(8, -24, 33);
    glVertex3f(8, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -24, 35);
    glVertex3f(0, -22, 35);
    glVertex3f(8, -22, 35);
    glVertex3f(8, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -22, 37);
    glVertex3f(0, -22, 35);
    glVertex3f(8, -22, 35);
    glVertex3f(8, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -22, 37);
    glVertex3f(0, -20, 37);
    glVertex3f(8, -20, 37);
    glVertex3f(8, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -20, 39);
    glVertex3f(0, -20, 37);
    glVertex3f(8, -20, 37);
    glVertex3f(8, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -20, 39);
    glVertex3f(0, -18, 39);
    glVertex3f(8, -18, 39);
    glVertex3f(8, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -18, 41);
    glVertex3f(0, -18, 39);
    glVertex3f(8, -18, 39);
    glVertex3f(8, -18, 41);
    glEnd();

     //////////////6//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -26, 31);
    glVertex3f(-10, -28, 31);
    glVertex3f(-2, -28, 31);
    glVertex3f(-2, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -26, 33);
    glVertex3f(-10, -26, 31);
    glVertex3f(-2, -26, 31);
    glVertex3f(-2, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -24, 33);
    glVertex3f(-10, -26, 33);
    glVertex3f(-2, -26, 33);
    glVertex3f(-2, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -24, 35);
    glVertex3f(-10, -24, 33);
    glVertex3f(-2, -24, 33);
    glVertex3f(-2, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -24, 35);
    glVertex3f(-10, -22, 35);
    glVertex3f(-2, -22, 35);
    glVertex3f(-2, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -22, 37);
    glVertex3f(-10, -22, 35);
    glVertex3f(-2, -22, 35);
    glVertex3f(-2, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -22, 37);
    glVertex3f(-10, -20, 37);
    glVertex3f(-2, -20, 37);
    glVertex3f(-2, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -20, 39);
    glVertex3f(-10, -20, 37);
    glVertex3f(-2, -20, 37);
    glVertex3f(-2, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -20, 39);
    glVertex3f(-10, -18, 39);
    glVertex3f(-2, -18, 39);
    glVertex3f(-2, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -18, 41);
    glVertex3f(-10, -18, 39);
    glVertex3f(-2, -18, 39);
    glVertex3f(-2, -18, 41);
    glEnd();

    //////////////7//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -26, 31);
    glVertex3f(-20, -28, 31);
    glVertex3f(-12, -28, 31);
    glVertex3f(-12, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -26, 33);
    glVertex3f(-20, -26, 31);
    glVertex3f(-12, -26, 31);
    glVertex3f(-12, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -24, 33);
    glVertex3f(-20, -26, 33);
    glVertex3f(-12, -26, 33);
    glVertex3f(-12, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -24, 35);
    glVertex3f(-20, -24, 33);
    glVertex3f(-12, -24, 33);
    glVertex3f(-12, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -24, 35);
    glVertex3f(-20, -22, 35);
    glVertex3f(-12, -22, 35);
    glVertex3f(-12, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -22, 37);
    glVertex3f(-20, -22, 35);
    glVertex3f(-12, -22, 35);
    glVertex3f(-12, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -22, 37);
    glVertex3f(-20, -20, 37);
    glVertex3f(-12, -20, 37);
    glVertex3f(-12, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -20, 39);
    glVertex3f(-20, -20, 37);
    glVertex3f(-12, -20, 37);
    glVertex3f(-12, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -20, 39);
    glVertex3f(-20, -18, 39);
    glVertex3f(-12, -18, 39);
    glVertex3f(-12, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -18, 41);
    glVertex3f(-20, -18, 39);
    glVertex3f(-12, -18, 39);
    glVertex3f(-12, -18, 41);
    glEnd();

     //////////////8//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -26, 31);
    glVertex3f(-30, -28, 31);
    glVertex3f(-22, -28, 31);
    glVertex3f(-22, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -26, 33);
    glVertex3f(-30, -26, 31);
    glVertex3f(-22, -26, 31);
    glVertex3f(-22, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -24, 33);
    glVertex3f(-30, -26, 33);
    glVertex3f(-22, -26, 33);
    glVertex3f(-22, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -24, 35);
    glVertex3f(-30, -24, 33);
    glVertex3f(-22, -24, 33);
    glVertex3f(-22, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -24, 35);
    glVertex3f(-30, -22, 35);
    glVertex3f(-22, -22, 35);
    glVertex3f(-22, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -22, 37);
    glVertex3f(-30, -22, 35);
    glVertex3f(-22, -22, 35);
    glVertex3f(-22, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -22, 37);
    glVertex3f(-30, -20, 37);
    glVertex3f(-22, -20, 37);
    glVertex3f(-22, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -20, 39);
    glVertex3f(-30, -20, 37);
    glVertex3f(-22, -20, 37);
    glVertex3f(-22, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -20, 39);
    glVertex3f(-30, -18, 39);
    glVertex3f(-22, -18, 39);
    glVertex3f(-22, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -18, 41);
    glVertex3f(-30, -18, 39);
    glVertex3f(-22, -18, 39);
    glVertex3f(-22, -18, 41);
    glEnd();

     //////////////9//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -26, 31);
    glVertex3f(-40, -28, 31);
    glVertex3f(-32, -28, 31);
    glVertex3f(-32, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -26, 33);
    glVertex3f(-40, -26, 31);
    glVertex3f(-32, -26, 31);
    glVertex3f(-32, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -24, 33);
    glVertex3f(-40, -26, 33);
    glVertex3f(-32, -26, 33);
    glVertex3f(-32, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -24, 35);
    glVertex3f(-40, -24, 33);
    glVertex3f(-32, -24, 33);
    glVertex3f(-32, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -24, 35);
    glVertex3f(-40, -22, 35);
    glVertex3f(-32, -22, 35);
    glVertex3f(-32, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -22, 37);
    glVertex3f(-40, -22, 35);
    glVertex3f(-32, -22, 35);
    glVertex3f(-32, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -22, 37);
    glVertex3f(-40, -20, 37);
    glVertex3f(-32, -20, 37);
    glVertex3f(-32, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -20, 39);
    glVertex3f(-40, -20, 37);
    glVertex3f(-32, -20, 37);
    glVertex3f(-32, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -20, 39);
    glVertex3f(-40, -18, 39);
    glVertex3f(-32, -18, 39);
    glVertex3f(-32, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -18, 41);
    glVertex3f(-40, -18, 39);
    glVertex3f(-32, -18, 39);
    glVertex3f(-32, -18, 41);
    glEnd();

     //////////////10//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -26, 31);
    glVertex3f(-50, -28, 31);
    glVertex3f(-42, -28, 31);
    glVertex3f(-42, -26, 31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -26, 33);
    glVertex3f(-50, -26, 31);
    glVertex3f(-42, -26, 31);
    glVertex3f(-42, -26, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -24, 33);
    glVertex3f(-50, -26, 33);
    glVertex3f(-42, -26, 33);
    glVertex3f(-42, -24, 33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -24, 35);
    glVertex3f(-50, -24, 33);
    glVertex3f(-42, -24, 33);
    glVertex3f(-42, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -24, 35);
    glVertex3f(-50, -22, 35);
    glVertex3f(-42, -22, 35);
    glVertex3f(-42, -24, 35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -22, 37);
    glVertex3f(-50, -22, 35);
    glVertex3f(-42, -22, 35);
    glVertex3f(-42, -22, 37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -22, 37);
    glVertex3f(-50, -20, 37);
    glVertex3f(-42, -20, 37);
    glVertex3f(-42, -22, 37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -20, 39);
    glVertex3f(-50, -20, 37);
    glVertex3f(-42, -20, 37);
    glVertex3f(-42, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -20, 39);
    glVertex3f(-50, -18, 39);
    glVertex3f(-42, -18, 39);
    glVertex3f(-42, -20, 39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -18, 41);
    glVertex3f(-50, -18, 39);
    glVertex3f(-42, -18, 39);
    glVertex3f(-42, -18, 41);
    glEnd();
//////////////////DEPAN

//////////////1//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -26, -31);
    glVertex3f(30, -28, -31);
    glVertex3f(38, -28, -31);
    glVertex3f(38, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -26, -33);
    glVertex3f(30, -26, -31);
    glVertex3f(38, -26, -31);
    glVertex3f(38, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -24, -33);
    glVertex3f(30, -26, -33);
    glVertex3f(38, -26, -33);
    glVertex3f(38, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -24, -35);
    glVertex3f(30, -24, -33);
    glVertex3f(38, -24, -33);
    glVertex3f(38, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -24, -35);
    glVertex3f(30, -22, -35);
    glVertex3f(38, -22, -35);
    glVertex3f(38, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -22, -37);
    glVertex3f(30, -22, -35);
    glVertex3f(38, -22, -35);
    glVertex3f(38, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -22, -37);
    glVertex3f(30, -20, -37);
    glVertex3f(38, -20, -37);
    glVertex3f(38, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -20, -39);
    glVertex3f(30, -20, -37);
    glVertex3f(38, -20, -37);
    glVertex3f(38, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -20, -39);
    glVertex3f(30, -18, -39);
    glVertex3f(38, -18, -39);
    glVertex3f(38, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -18, -41);
    glVertex3f(30, -18, -39);
    glVertex3f(38, -18, -39);
    glVertex3f(38, -18, -41);
    glEnd();

    //////////////2//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -26, -31);
    glVertex3f(20, -28, -31);
    glVertex3f(28, -28, -31);
    glVertex3f(28, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -26, -33);
    glVertex3f(20, -26, -31);
    glVertex3f(28, -26, -31);
    glVertex3f(28, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -24, -33);
    glVertex3f(20, -26, -33);
    glVertex3f(28, -26, -33);
    glVertex3f(28, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -24, -35);
    glVertex3f(20, -24, -33);
    glVertex3f(28, -24, -33);
    glVertex3f(28, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -24, -35);
    glVertex3f(20, -22, -35);
    glVertex3f(28, -22, -35);
    glVertex3f(28, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -22, -37);
    glVertex3f(20, -22, -35);
    glVertex3f(28, -22, -35);
    glVertex3f(28, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -22, -37);
    glVertex3f(20, -20, -37);
    glVertex3f(28, -20, -37);
    glVertex3f(28, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -20, -39);
    glVertex3f(20, -20, -37);
    glVertex3f(28, -20, -37);
    glVertex3f(28, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -20, -39);
    glVertex3f(20, -18, -39);
    glVertex3f(28, -18, -39);
    glVertex3f(28, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -18, -41);
    glVertex3f(20, -18, -39);
    glVertex3f(28, -18, -39);
    glVertex3f(28, -18, -41);
    glEnd();

     //////////////3//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -26, -31);
    glVertex3f(10, -28, -31);
    glVertex3f(18, -28, -31);
    glVertex3f(18, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -26, -33);
    glVertex3f(10, -26, -31);
    glVertex3f(18, -26, -31);
    glVertex3f(18, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -24, -33);
    glVertex3f(10, -26, -33);
    glVertex3f(18, -26, -33);
    glVertex3f(18, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -24, -35);
    glVertex3f(10, -24, -33);
    glVertex3f(18, -24, -33);
    glVertex3f(18, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -24, -35);
    glVertex3f(10, -22, -35);
    glVertex3f(18, -22, -35);
    glVertex3f(18, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -22, -37);
    glVertex3f(10, -22, -35);
    glVertex3f(18, -22, -35);
    glVertex3f(18, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -22, -37);
    glVertex3f(10, -20, -37);
    glVertex3f(18, -20, -37);
    glVertex3f(18, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -20, -39);
    glVertex3f(10, -20, -37);
    glVertex3f(18, -20, -37);
    glVertex3f(18, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -20, -39);
    glVertex3f(10, -18, -39);
    glVertex3f(18, -18, -39);
    glVertex3f(18, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -18, -41);
    glVertex3f(10, -18, -39);
    glVertex3f(18, -18, -39);
    glVertex3f(18, -18, -41);
    glEnd();

     //////////////4//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -26, -31);
    glVertex3f(0, -28, -31);
    glVertex3f(8, -28, -31);
    glVertex3f(8, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -26, -33);
    glVertex3f(0, -26, -31);
    glVertex3f(8, -26, -31);
    glVertex3f(8, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -24, -33);
    glVertex3f(0, -26, -33);
    glVertex3f(8, -26, -33);
    glVertex3f(8, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -24, -35);
    glVertex3f(0, -24, -33);
    glVertex3f(8, -24, -33);
    glVertex3f(8, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -24, -35);
    glVertex3f(0, -22, -35);
    glVertex3f(8, -22, -35);
    glVertex3f(8, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -22, -37);
    glVertex3f(0, -22, -35);
    glVertex3f(8, -22, -35);
    glVertex3f(8, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -22, -37);
    glVertex3f(0, -20, -37);
    glVertex3f(8, -20, -37);
    glVertex3f(8, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -20, -39);
    glVertex3f(0, -20, -37);
    glVertex3f(8, -20, -37);
    glVertex3f(8, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -20, -39);
    glVertex3f(0, -18, -39);
    glVertex3f(8, -18, -39);
    glVertex3f(8, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -18, -41);
    glVertex3f(0, -18, -39);
    glVertex3f(8, -18, -39);
    glVertex3f(8, -18, -41);
    glEnd();

     //////////////5//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -26, -31);
    glVertex3f(-10, -28, -31);
    glVertex3f(-2, -28, -31);
    glVertex3f(-2, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -26, -33);
    glVertex3f(-10, -26, -31);
    glVertex3f(-2, -26, -31);
    glVertex3f(-2, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -24, -33);
    glVertex3f(-10, -26, -33);
    glVertex3f(-2, -26, -33);
    glVertex3f(-2, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -24, -35);
    glVertex3f(-10, -24, -33);
    glVertex3f(-2, -24, -33);
    glVertex3f(-2, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -24, -35);
    glVertex3f(-10, -22, -35);
    glVertex3f(-2, -22, -35);
    glVertex3f(-2, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -22, -37);
    glVertex3f(-10, -22, -35);
    glVertex3f(-2, -22, -35);
    glVertex3f(-2, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -22, -37);
    glVertex3f(-10, -20, -37);
    glVertex3f(-2, -20, -37);
    glVertex3f(-2, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -20, -39);
    glVertex3f(-10, -20, -37);
    glVertex3f(-2, -20, -37);
    glVertex3f(-2, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -20, -39);
    glVertex3f(-10, -18, -39);
    glVertex3f(-2, -18, -39);
    glVertex3f(-2, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -18, -41);
    glVertex3f(-10, -18, -39);
    glVertex3f(-2, -18, -39);
    glVertex3f(-2, -18, -41);
    glEnd();

    //////////////6//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -26, -31);
    glVertex3f(-20, -28, -31);
    glVertex3f(-12, -28, -31);
    glVertex3f(-12, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -26, -33);
    glVertex3f(-20, -26, -31);
    glVertex3f(-12, -26, -31);
    glVertex3f(-12, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -24, -33);
    glVertex3f(-20, -26, -33);
    glVertex3f(-12, -26, -33);
    glVertex3f(-12, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -24, -35);
    glVertex3f(-20, -24, -33);
    glVertex3f(-12, -24, -33);
    glVertex3f(-12, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -24, -35);
    glVertex3f(-20, -22, -35);
    glVertex3f(-12, -22, -35);
    glVertex3f(-12, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -22, -37);
    glVertex3f(-20, -22, -35);
    glVertex3f(-12, -22, -35);
    glVertex3f(-12, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -22, -37);
    glVertex3f(-20, -20, -37);
    glVertex3f(-12, -20, -37);
    glVertex3f(-12, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -20, -39);
    glVertex3f(-20, -20, -37);
    glVertex3f(-12, -20, -37);
    glVertex3f(-12, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -20, -39);
    glVertex3f(-20, -18, -39);
    glVertex3f(-12, -18, -39);
    glVertex3f(-12, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -18, -41);
    glVertex3f(-20, -18, -39);
    glVertex3f(-12, -18, -39);
    glVertex3f(-12, -18, -41);
    glEnd();

     //////////////7//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -26, -31);
    glVertex3f(-30, -28, -31);
    glVertex3f(-22, -28, -31);
    glVertex3f(-22, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -26, -33);
    glVertex3f(-30, -26, -31);
    glVertex3f(-22, -26, -31);
    glVertex3f(-22, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -24, -33);
    glVertex3f(-30, -26, -33);
    glVertex3f(-22, -26, -33);
    glVertex3f(-22, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -24, -35);
    glVertex3f(-30, -24, -33);
    glVertex3f(-22, -24, -33);
    glVertex3f(-22, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -24, -35);
    glVertex3f(-30, -22, -35);
    glVertex3f(-22, -22, -35);
    glVertex3f(-22, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -22, -37);
    glVertex3f(-30, -22, -35);
    glVertex3f(-22, -22, -35);
    glVertex3f(-22, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -22, -37);
    glVertex3f(-30, -20, -37);
    glVertex3f(-22, -20, -37);
    glVertex3f(-22, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -20, -39);
    glVertex3f(-30, -20, -37);
    glVertex3f(-22, -20, -37);
    glVertex3f(-22, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -20, -39);
    glVertex3f(-30, -18, -39);
    glVertex3f(-22, -18, -39);
    glVertex3f(-22, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -18, -41);
    glVertex3f(-30, -18, -39);
    glVertex3f(-22, -18, -39);
    glVertex3f(-22, -18, -41);
    glEnd();

     //////////////8//////////////////

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-39, -26, -31);
    glVertex3f(-39, -28, -31);
    glVertex3f(-32, -28, -31);
    glVertex3f(-32, -26, -31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-39, -26, -33);
    glVertex3f(-39, -26, -31);
    glVertex3f(-32, -26, -31);
    glVertex3f(-32, -26, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-39, -24, -33);
    glVertex3f(-39, -26, -33);
    glVertex3f(-32, -26, -33);
    glVertex3f(-32, -24, -33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-39, -24, -35);
    glVertex3f(-39, -24, -33);
    glVertex3f(-32, -24, -33);
    glVertex3f(-32, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-39, -24, -35);
    glVertex3f(-39, -22, -35);
    glVertex3f(-32, -22, -35);
    glVertex3f(-32, -24, -35);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-39, -22, -37);
    glVertex3f(-39, -22, -35);
    glVertex3f(-32, -22, -35);
    glVertex3f(-32, -22, -37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-39, -22, -37);
    glVertex3f(-39, -20, -37);
    glVertex3f(-32, -20, -37);
    glVertex3f(-32, -22, -37);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-39, -20, -39);
    glVertex3f(-39, -20, -37);
    glVertex3f(-32, -20, -37);
    glVertex3f(-32, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-39, -20, -39);
    glVertex3f(-39, -18, -39);
    glVertex3f(-32, -18, -39);
    glVertex3f(-32, -20, -39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-39, -18, -41);
    glVertex3f(-39, -18, -39);
    glVertex3f(-32, -18, -39);
    glVertex3f(-32, -18, -41);
    glEnd();

    //ooooooooooooooooooooo    kursi tribun kanan   oooooooooooooooooooooooooooooo//
     //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, 18);
    glVertex3f(48, -27, 18);
    glVertex3f(48, -27, 30);
    glVertex3f(48, -26, 30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, 18);
    glVertex3f(48, -26, 18);
    glVertex3f(48, -26, 30);
    glVertex3f(51, -26, 30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, 18);
    glVertex3f(51, -26, 18);
    glVertex3f(51, -26, 30);
    glVertex3f(51, -24, 30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, 18);
    glVertex3f(51, -24, 18);
    glVertex3f(51, -24, 30);
    glVertex3f(54, -24, 30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, 18);
    glVertex3f(54, -24, 18);
    glVertex3f(54, -24, 30);
    glVertex3f(54, -22, 30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, 18);
    glVertex3f(54, -22, 18);
    glVertex3f(54, -22, 30);
    glVertex3f(57, -22, 30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, 18);
    glVertex3f(57, -22, 18);
    glVertex3f(57, -22, 30);
    glVertex3f(57, -20, 30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, 18);
    glVertex3f(57, -20, 18);
    glVertex3f(57, -20, 30);
    glVertex3f(60, -20, 30);
    glEnd();
//..............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, 15);
    glVertex3f(48, -27, 15);
    glVertex3f(48, -27, -2);
    glVertex3f(48, -26, -2);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, 15);
    glVertex3f(48, -26, 15);
    glVertex3f(48, -26, -2);
    glVertex3f(51, -26, -2);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, 15);
    glVertex3f(51, -26, 15);
    glVertex3f(51, -26, -2);
    glVertex3f(51, -24, -2);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, 15);
    glVertex3f(51, -24, 15);
    glVertex3f(51, -24, -2);
    glVertex3f(54, -24, -2);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, 15);
    glVertex3f(54, -24, 15);
    glVertex3f(54, -24, -2);
    glVertex3f(54, -22, -2);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, 15);
    glVertex3f(54, -22, 15);
    glVertex3f(54, -22, -2);
    glVertex3f(57, -22, -2);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, 15);
    glVertex3f(57, -22, 15);
    glVertex3f(57, -22, -2);
    glVertex3f(57, -20, -2);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, 15);
    glVertex3f(57, -20, 15);
    glVertex3f(57, -20, -2);
    glVertex3f(60, -20, -2);
    glEnd();
//.............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, -5);
    glVertex3f(48, -27, -5);
    glVertex3f(48, -27, -12);
    glVertex3f(48, -26, -12);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, -5);
    glVertex3f(48, -26, -5);
    glVertex3f(48, -26, -12);
    glVertex3f(51, -26, -12);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, -5);
    glVertex3f(51, -26, -5);
    glVertex3f(51, -26, -12);
    glVertex3f(51, -24, -12);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, -5);
    glVertex3f(51, -24, -5);
    glVertex3f(51, -24, -12);
    glVertex3f(54, -24, -12);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, -5);
    glVertex3f(54, -24, -5);
    glVertex3f(54, -24, -12);
    glVertex3f(54, -22, -12);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, -5);
    glVertex3f(54, -22, -5);
    glVertex3f(54, -22, -12);
    glVertex3f(57, -22, -12);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, -5);
    glVertex3f(57, -22, -5);
    glVertex3f(57, -22, -12);
    glVertex3f(57, -20, -12);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, -5);
    glVertex3f(57, -20, -5);
    glVertex3f(57, -20, -12);
    glVertex3f(60, -20, -12);
    glEnd();
//............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, -15);
    glVertex3f(48, -27, -15);
    glVertex3f(48, -27, -30);
    glVertex3f(48, -26, -30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, -15);
    glVertex3f(48, -26, -15);
    glVertex3f(48, -26, -30);
    glVertex3f(51, -26, -30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, -15);
    glVertex3f(51, -26, -15);
    glVertex3f(51, -26, -30);
    glVertex3f(51, -24, -30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, -15);
    glVertex3f(51, -24, -15);
    glVertex3f(51, -24, -30);
    glVertex3f(54, -24, -30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, -15);
    glVertex3f(54, -24, -15);
    glVertex3f(54, -24, -30);
    glVertex3f(54, -22, -30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, -15);
    glVertex3f(54, -22, -15);
    glVertex3f(54, -22, -30);
    glVertex3f(57, -22, -30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, -15);
    glVertex3f(57, -22, -15);
    glVertex3f(57, -22, -30);
    glVertex3f(57, -20, -30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, -15);
    glVertex3f(57, -20, -15);
    glVertex3f(57, -20, -30);
    glVertex3f(60, -20, -30);
    glEnd();
//oooooooooooooo kursi tribun kiri oooooooooooooo
     //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, 18);
    glVertex3f(-48, -27, 18);
    glVertex3f(-48, -27, 30);
    glVertex3f(-48, -26, 30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, 18);
    glVertex3f(-48, -26, 18);
    glVertex3f(-48, -26, 30);
    glVertex3f(-51, -26, 30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, 18);
    glVertex3f(-51, -26, 18);
    glVertex3f(-51, -26, 30);
    glVertex3f(-51, -24, 30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, 18);
    glVertex3f(-51, -24, 18);
    glVertex3f(-51, -24, 30);
    glVertex3f(-54, -24, 30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, 18);
    glVertex3f(-54, -24, 18);
    glVertex3f(-54, -24, 30);
    glVertex3f(-54, -22, 30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, 18);
    glVertex3f(-54, -22, 18);
    glVertex3f(-54, -22, 30);
    glVertex3f(-57, -22, 30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, 18);
    glVertex3f(-57, -22, 18);
    glVertex3f(-57, -22, 30);
    glVertex3f(-57, -20, 30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, 18);
    glVertex3f(-57, -20, 18);
    glVertex3f(-57, -20, 30);
    glVertex3f(-60, -20, 30);
    glEnd();
//..............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, 15);
    glVertex3f(-48, -27, 15);
    glVertex3f(-48, -27, -2);
    glVertex3f(-48, -26, -2);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, 15);
    glVertex3f(-48, -26, 15);
    glVertex3f(-48, -26, -2);
    glVertex3f(-51, -26, -2);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, 15);
    glVertex3f(-51, -26, 15);
    glVertex3f(-51, -26, -2);
    glVertex3f(-51, -24, -2);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, 15);
    glVertex3f(-51, -24, 15);
    glVertex3f(-51, -24, -2);
    glVertex3f(-54, -24, -2);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, 15);
    glVertex3f(-54, -24, 15);
    glVertex3f(-54, -24, -2);
    glVertex3f(-54, -22, -2);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, 15);
    glVertex3f(-54, -22, 15);
    glVertex3f(-54, -22, -2);
    glVertex3f(-57, -22, -2);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, 15);
    glVertex3f(-57, -22, 15);
    glVertex3f(-57, -22, -2);
    glVertex3f(-57, -20, -2);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, 15);
    glVertex3f(-57, -20, 15);
    glVertex3f(-57, -20, -2);
    glVertex3f(-60, -20, -2);
    glEnd();
//.............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, -5);
    glVertex3f(-48, -27, -5);
    glVertex3f(-48, -27, -12);
    glVertex3f(-48, -26, -12);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, -5);
    glVertex3f(-48, -26, -5);
    glVertex3f(-48, -26, -12);
    glVertex3f(-51, -26, -12);
    glEnd();
        //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, -5);
    glVertex3f(-51, -26, -5);
    glVertex3f(-51, -26, -12);
    glVertex3f(-51, -24, -12);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, -5);
    glVertex3f(-51, -24, -5);
    glVertex3f(-51, -24, -12);
    glVertex3f(-54, -24, -12);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, -5);
    glVertex3f(-54, -24, -5);
    glVertex3f(-54, -24, -12);
    glVertex3f(-54, -22, -12);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, -5);
    glVertex3f(-54, -22, -5);
    glVertex3f(-54, -22, -12);
    glVertex3f(-57, -22, -12);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, -5);
    glVertex3f(-57, -22, -5);
    glVertex3f(-57, -22, -12);
    glVertex3f(-57, -20, -12);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, -5);
    glVertex3f(-57, -20, -5);
    glVertex3f(-57, -20, -12);
    glVertex3f(-60, -20, -12);
    glEnd();
//............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, -15);
    glVertex3f(-48, -27, -15);
    glVertex3f(-48, -27, -30);
    glVertex3f(-48, -26, -30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, -15);
    glVertex3f(-48, -26, -15);
    glVertex3f(-48, -26, -30);
    glVertex3f(-51, -26, -30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, -15);
    glVertex3f(-51, -26, -15);
    glVertex3f(-51, -26, -30);
    glVertex3f(-51, -24, -30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, -15);
    glVertex3f(-51, -24, -15);
    glVertex3f(-51, -24, -30);
    glVertex3f(-54, -24, -30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, -15);
    glVertex3f(-54, -24, -15);
    glVertex3f(-54, -24, -30);
    glVertex3f(-54, -22, -30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, -15);
    glVertex3f(-54, -22, -15);
    glVertex3f(-54, -22, -30);
    glVertex3f(-57, -22, -30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, -15);
    glVertex3f(-57, -22, -15);
    glVertex3f(-57, -22, -30);
    glVertex3f(-57, -20, -30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, -15);
    glVertex3f(-57, -20, -15);
    glVertex3f(-57, -20, -30);
    glVertex3f(-60, -20, -30);
    glEnd();

    //ooooooooooooooooooooo    kursi tribun kanan   oooooooooooooooooooooooooooooo//
     //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, 18);
    glVertex3f(48, -27, 18);
    glVertex3f(48, -27, 30);
    glVertex3f(48, -26, 30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, 18);
    glVertex3f(48, -26, 18);
    glVertex3f(48, -26, 30);
    glVertex3f(51, -26, 30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, 18);
    glVertex3f(51, -26, 18);
    glVertex3f(51, -26, 30);
    glVertex3f(51, -24, 30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, 18);
    glVertex3f(51, -24, 18);
    glVertex3f(51, -24, 30);
    glVertex3f(54, -24, 30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, 18);
    glVertex3f(54, -24, 18);
    glVertex3f(54, -24, 30);
    glVertex3f(54, -22, 30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, 18);
    glVertex3f(54, -22, 18);
    glVertex3f(54, -22, 30);
    glVertex3f(57, -22, 30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, 18);
    glVertex3f(57, -22, 18);
    glVertex3f(57, -22, 30);
    glVertex3f(57, -20, 30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, 18);
    glVertex3f(57, -20, 18);
    glVertex3f(57, -20, 30);
    glVertex3f(60, -20, 30);
    glEnd();
//..............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, 15);
    glVertex3f(48, -27, 15);
    glVertex3f(48, -27, -2);
    glVertex3f(48, -26, -2);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, 15);
    glVertex3f(48, -26, 15);
    glVertex3f(48, -26, -2);
    glVertex3f(51, -26, -2);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, 15);
    glVertex3f(51, -26, 15);
    glVertex3f(51, -26, -2);
    glVertex3f(51, -24, -2);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, 15);
    glVertex3f(51, -24, 15);
    glVertex3f(51, -24, -2);
    glVertex3f(54, -24, -2);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, 15);
    glVertex3f(54, -24, 15);
    glVertex3f(54, -24, -2);
    glVertex3f(54, -22, -2);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, 15);
    glVertex3f(54, -22, 15);
    glVertex3f(54, -22, -2);
    glVertex3f(57, -22, -2);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, 15);
    glVertex3f(57, -22, 15);
    glVertex3f(57, -22, -2);
    glVertex3f(57, -20, -2);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, 15);
    glVertex3f(57, -20, 15);
    glVertex3f(57, -20, -2);
    glVertex3f(60, -20, -2);
    glEnd();
//.............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, -5);
    glVertex3f(48, -27, -5);
    glVertex3f(48, -27, -12);
    glVertex3f(48, -26, -12);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, -5);
    glVertex3f(48, -26, -5);
    glVertex3f(48, -26, -12);
    glVertex3f(51, -26, -12);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, -5);
    glVertex3f(51, -26, -5);
    glVertex3f(51, -26, -12);
    glVertex3f(51, -24, -12);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, -5);
    glVertex3f(51, -24, -5);
    glVertex3f(51, -24, -12);
    glVertex3f(54, -24, -12);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, -5);
    glVertex3f(54, -24, -5);
    glVertex3f(54, -24, -12);
    glVertex3f(54, -22, -12);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, -5);
    glVertex3f(54, -22, -5);
    glVertex3f(54, -22, -12);
    glVertex3f(57, -22, -12);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, -5);
    glVertex3f(57, -22, -5);
    glVertex3f(57, -22, -12);
    glVertex3f(57, -20, -12);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, -5);
    glVertex3f(57, -20, -5);
    glVertex3f(57, -20, -12);
    glVertex3f(60, -20, -12);
    glEnd();
//............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(48, -26, -15);
    glVertex3f(48, -27, -15);
    glVertex3f(48, -27, -30);
    glVertex3f(48, -26, -30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(51, -26, -15);
    glVertex3f(48, -26, -15);
    glVertex3f(48, -26, -30);
    glVertex3f(51, -26, -30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(51, -24, -15);
    glVertex3f(51, -26, -15);
    glVertex3f(51, -26, -30);
    glVertex3f(51, -24, -30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(54, -24, -15);
    glVertex3f(51, -24, -15);
    glVertex3f(51, -24, -30);
    glVertex3f(54, -24, -30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(54, -22, -15);
    glVertex3f(54, -24, -15);
    glVertex3f(54, -24, -30);
    glVertex3f(54, -22, -30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(57, -22, -15);
    glVertex3f(54, -22, -15);
    glVertex3f(54, -22, -30);
    glVertex3f(57, -22, -30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(57, -20, -15);
    glVertex3f(57, -22, -15);
    glVertex3f(57, -22, -30);
    glVertex3f(57, -20, -30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(60, -20, -15);
    glVertex3f(57, -20, -15);
    glVertex3f(57, -20, -30);
    glVertex3f(60, -20, -30);
    glEnd();
//oooooooooooooo kursi tribun kiri oooooooooooooo
     //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, 18);
    glVertex3f(-48, -27, 18);
    glVertex3f(-48, -27, 30);
    glVertex3f(-48, -26, 30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, 18);
    glVertex3f(-48, -26, 18);
    glVertex3f(-48, -26, 30);
    glVertex3f(-51, -26, 30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, 18);
    glVertex3f(-51, -26, 18);
    glVertex3f(-51, -26, 30);
    glVertex3f(-51, -24, 30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, 18);
    glVertex3f(-51, -24, 18);
    glVertex3f(-51, -24, 30);
    glVertex3f(-54, -24, 30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, 18);
    glVertex3f(-54, -24, 18);
    glVertex3f(-54, -24, 30);
    glVertex3f(-54, -22, 30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, 18);
    glVertex3f(-54, -22, 18);
    glVertex3f(-54, -22, 30);
    glVertex3f(-57, -22, 30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, 18);
    glVertex3f(-57, -22, 18);
    glVertex3f(-57, -22, 30);
    glVertex3f(-57, -20, 30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, 18);
    glVertex3f(-57, -20, 18);
    glVertex3f(-57, -20, 30);
    glVertex3f(-60, -20, 30);
    glEnd();
//..............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, 15);
    glVertex3f(-48, -27, 15);
    glVertex3f(-48, -27, -2);
    glVertex3f(-48, -26, -2);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, 15);
    glVertex3f(-48, -26, 15);
    glVertex3f(-48, -26, -2);
    glVertex3f(-51, -26, -2);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, 15);
    glVertex3f(-51, -26, 15);
    glVertex3f(-51, -26, -2);
    glVertex3f(-51, -24, -2);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, 15);
    glVertex3f(-51, -24, 15);
    glVertex3f(-51, -24, -2);
    glVertex3f(-54, -24, -2);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, 15);
    glVertex3f(-54, -24, 15);
    glVertex3f(-54, -24, -2);
    glVertex3f(-54, -22, -2);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, 15);
    glVertex3f(-54, -22, 15);
    glVertex3f(-54, -22, -2);
    glVertex3f(-57, -22, -2);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, 15);
    glVertex3f(-57, -22, 15);
    glVertex3f(-57, -22, -2);
    glVertex3f(-57, -20, -2);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, 15);
    glVertex3f(-57, -20, 15);
    glVertex3f(-57, -20, -2);
    glVertex3f(-60, -20, -2);
    glEnd();
//.............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, -5);
    glVertex3f(-48, -27, -5);
    glVertex3f(-48, -27, -12);
    glVertex3f(-48, -26, -12);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, -5);
    glVertex3f(-48, -26, -5);
    glVertex3f(-48, -26, -12);
    glVertex3f(-51, -26, -12);
    glEnd();
        //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, -5);
    glVertex3f(-51, -26, -5);
    glVertex3f(-51, -26, -12);
    glVertex3f(-51, -24, -12);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, -5);
    glVertex3f(-51, -24, -5);
    glVertex3f(-51, -24, -12);
    glVertex3f(-54, -24, -12);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, -5);
    glVertex3f(-54, -24, -5);
    glVertex3f(-54, -24, -12);
    glVertex3f(-54, -22, -12);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, -5);
    glVertex3f(-54, -22, -5);
    glVertex3f(-54, -22, -12);
    glVertex3f(-57, -22, -12);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, -5);
    glVertex3f(-57, -22, -5);
    glVertex3f(-57, -22, -12);
    glVertex3f(-57, -20, -12);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, -5);
    glVertex3f(-57, -20, -5);
    glVertex3f(-57, -20, -12);
    glVertex3f(-60, -20, -12);
    glEnd();
//............
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-48, -26, -15);
    glVertex3f(-48, -27, -15);
    glVertex3f(-48, -27, -30);
    glVertex3f(-48, -26, -30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-51, -26, -15);
    glVertex3f(-48, -26, -15);
    glVertex3f(-48, -26, -30);
    glVertex3f(-51, -26, -30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-51, -24, -15);
    glVertex3f(-51, -26, -15);
    glVertex3f(-51, -26, -30);
    glVertex3f(-51, -24, -30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-54, -24, -15);
    glVertex3f(-51, -24, -15);
    glVertex3f(-51, -24, -30);
    glVertex3f(-54, -24, -30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-54, -22, -15);
    glVertex3f(-54, -24, -15);
    glVertex3f(-54, -24, -30);
    glVertex3f(-54, -22, -30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-57, -22, -15);
    glVertex3f(-54, -22, -15);
    glVertex3f(-54, -22, -30);
    glVertex3f(-57, -22, -30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-57, -20, -15);
    glVertex3f(-57, -22, -15);
    glVertex3f(-57, -22, -30);
    glVertex3f(-57, -20, -30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-60, -20, -15);
    glVertex3f(-57, -20, -15);
    glVertex3f(-57, -20, -30);
    glVertex3f(-60, -20, -30);
    glEnd();

//ooooooooooooooooooooo   atas  kursi tribun kiri   oooooooooooooooooooooooooooooo//
     //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-62, -12, -15);
    glVertex3f(-62, -13, -15);
    glVertex3f(-62, -13, -30);
    glVertex3f(-62, -12, -30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-64, -12, -15);
    glVertex3f(-62, -12, -15);
    glVertex3f(-62, -12, -30);
    glVertex3f(-64, -12, -30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-64, -10, -15);
    glVertex3f(-64, -11, -15);
    glVertex3f(-64, -11, -30);
    glVertex3f(-64, -10, -30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-66, -10, -15);
    glVertex3f(-64, -10, -15);
    glVertex3f(-64, -10, -30);
    glVertex3f(-66, -10, -30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-66, -8, -15);
    glVertex3f(-66, -9, -15);
    glVertex3f(-66, -9, -30);
    glVertex3f(-66, -8, -30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-68, -8, -15);
    glVertex3f(-66, -8, -15);
    glVertex3f(-66, -8, -30);
    glVertex3f(-68, -8, -30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-68, -7, -15);
    glVertex3f(-68, -6, -15);
    glVertex3f(-68, -6, -30);
    glVertex3f(-68, -7, -30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-71, -6, -15);
    glVertex3f(-68, -6, -15);
    glVertex3f(-68, -6, -30);
    glVertex3f(-71, -6, -30);
    glEnd();
//........
//kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-62, -12, -10);
    glVertex3f(-62, -13, -10);
    glVertex3f(-62, -13, 15);
    glVertex3f(-62, -12, 15);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-64, -12, -10);
    glVertex3f(-62, -12, -10);
    glVertex3f(-62, -12, 15);
    glVertex3f(-64, -12, 15);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-64, -10, -10);
    glVertex3f(-64, -11, -10);
    glVertex3f(-64, -11, 15);
    glVertex3f(-64, -10, 15);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-66, -10, -10);
    glVertex3f(-64, -10, -10);
    glVertex3f(-64, -10, 15);
    glVertex3f(-66, -10, 15);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-66, -8, -10);
    glVertex3f(-66, -9, -10);
    glVertex3f(-66, -9, 15);
    glVertex3f(-66, -8, 15);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-68, -8, -10);
    glVertex3f(-66, -8, -10);
    glVertex3f(-66, -8, 15);
    glVertex3f(-68, -8, 15);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-68, -7, -10);
    glVertex3f(-68, -6, -10);
    glVertex3f(-68, -6, 15);
    glVertex3f(-68, -7, 15);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-71, -6, -10);
    glVertex3f(-68, -6, -10);
    glVertex3f(-68, -6, 15);
    glVertex3f(-71, -6, 15);
    glEnd();

    ///tv PENGUMUMAN

    ///depan

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex3f(-69, -5.5, -3);
    glVertex3f(-69, 2, -3);
    glVertex3f(-69, 2, 10);
    glVertex3f(-69, -5.5, 10);
    glEnd();


///belakang
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex3f(-70, -5.5, -3);
    glVertex3f(-70, 2, -3);
    glVertex3f(-70, 2, 10);
    glVertex3f(-70, -5.5, 10);
    glEnd();

    ///atas

    glBegin(GL_POLYGON);
    glColor3ub(0,0, 0);
    glVertex3f(-70, 2, -3);
    glVertex3f(-69, 2, -3);
    glVertex3f(-69, 2, 10);
    glVertex3f(-70, 2, 10);
    glEnd();

    ///BAWAH

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex3f(-70, -6, -3);
    glVertex3f(-69, -6, -3);
    glVertex3f(-69, -6, 10);
    glVertex3f(-70, -6, 10);
    glEnd();
    ///kiri

   glBegin(GL_POLYGON);
    glColor3ub(0, 0,0);
    glVertex3f(-70, 2, -3);
    glVertex3f(-70, -6, -3);
    glVertex3f(-69, -6, -3);
    glVertex3f(-69, 2, -3);
    glEnd();

    ///kanan

    glBegin(GL_POLYGON);
    glColor3ub(0, 0,0);
    glVertex3f(-70, 2, 10);
    glVertex3f(-70, -6, 10);
    glVertex3f(-69, -6, 10);
    glVertex3f(-69, 2, 10);
    glEnd();





//..........
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-62, -12, 20);
    glVertex3f(-62, -13, 20);
    glVertex3f(-62, -13, 30);
    glVertex3f(-62, -12, 30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-64, -12, 20);
    glVertex3f(-62, -12, 20);
    glVertex3f(-62, -12, 30);
    glVertex3f(-64, -12, 30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-64, -10, 20);
    glVertex3f(-64, -11, 20);
    glVertex3f(-64, -11, 30);
    glVertex3f(-64, -10, 30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-66, -10, 20);
    glVertex3f(-64, -10, 20);
    glVertex3f(-64, -10, 30);
    glVertex3f(-66, -10, 30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-66, -8, 20);
    glVertex3f(-66, -9, 20);
    glVertex3f(-66, -9, 30);
    glVertex3f(-66, -8, 30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-68, -8, 20);
    glVertex3f(-66, -8, 20);
    glVertex3f(-66, -8, 30);
    glVertex3f(-68, -8, 30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-68, -7, 20);
    glVertex3f(-68, -6, 20);
    glVertex3f(-68, -6, 30);
    glVertex3f(-68, -7, 30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-71, -6, 20);
    glVertex3f(-68, -6, 20);
    glVertex3f(-68, -6, 30);
    glVertex3f(-71, -6, 30);
    glEnd();
//ooooooooooooooooooooo   atas  kursi tribun kanan   oooooooooooooooooooooooooooooo//
     //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(62, -12, -15);
    glVertex3f(62, -13, -15);
    glVertex3f(62, -13, -30);
    glVertex3f(62, -12, -30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(64, -12, -15);
    glVertex3f(62, -12, -15);
    glVertex3f(62, -12, -30);
    glVertex3f(64, -12, -30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(64, -10, -15);
    glVertex3f(64, -11, -15);
    glVertex3f(64, -11, -30);
    glVertex3f(64, -10, -30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(66, -10, -15);
    glVertex3f(64, -10, -15);
    glVertex3f(64, -10, -30);
    glVertex3f(66, -10, -30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(66, -8, -15);
    glVertex3f(66, -9, -15);
    glVertex3f(66, -9, -30);
    glVertex3f(66, -8, -30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(68, -8, -15);
    glVertex3f(66, -8, -15);
    glVertex3f(66, -8, -30);
    glVertex3f(68, -8, -30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(68, -7, -15);
    glVertex3f(68, -6, -15);
    glVertex3f(68, -6, -30);
    glVertex3f(68, -7, -30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(71, -6, -15);
    glVertex3f(68, -6, -15);
    glVertex3f(68, -6, -30);
    glVertex3f(71, -6, -30);
    glEnd();
//........
//kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(62, -12, -10);
    glVertex3f(62, -13, -10);
    glVertex3f(62, -13, 15);
    glVertex3f(62, -12, 15);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(64, -12, -10);
    glVertex3f(62, -12, -10);
    glVertex3f(62, -12, 15);
    glVertex3f(64, -12, 15);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(64, -10, -10);
    glVertex3f(64, -11, -10);
    glVertex3f(64, -11, 15);
    glVertex3f(64, -10, 15);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(66, -10, -10);
    glVertex3f(64, -10, -10);
    glVertex3f(64, -10, 15);
    glVertex3f(66, -10, 15);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(66, -8, -10);
    glVertex3f(66, -9, -10);
    glVertex3f(66, -9, 15);
    glVertex3f(66, -8, 15);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(68, -8, -10);
    glVertex3f(66, -8, -10);
    glVertex3f(66, -8, 15);
    glVertex3f(68, -8, 15);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(68, -7, -10);
    glVertex3f(68, -6, -10);
    glVertex3f(68, -6, 15);
    glVertex3f(68, -7, 15);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(71, -6, -10);
    glVertex3f(68, -6, -10);
    glVertex3f(68, -6, 15);
    glVertex3f(71, -6, 15);
    glEnd();
//..........
    //kursi 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(62, -12, 20);
    glVertex3f(62, -13, 20);
    glVertex3f(62, -13, 30);
    glVertex3f(62, -12, 30);
    glEnd();
    //alas 1 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(64, -12, 20);
    glVertex3f(62, -12, 20);
    glVertex3f(62, -12, 30);
    glVertex3f(64, -12, 30);
    glEnd();
    //kursi 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(64, -10, 20);
    glVertex3f(64, -11, 20);
    glVertex3f(64, -11, 30);
    glVertex3f(64, -10, 30);
    glEnd();
    //alas 2 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(66, -10, 20);
    glVertex3f(64, -10, 20);
    glVertex3f(64, -10, 30);
    glVertex3f(66, -10, 30);
    glEnd();
    //kursi 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(66, -8, 20);
    glVertex3f(66, -9, 20);
    glVertex3f(66, -9, 30);
    glVertex3f(66, -8, 30);
    glEnd();
    //alas 3 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(68, -8, 20);
    glVertex3f(66, -8, 20);
    glVertex3f(66, -8, 30);
    glVertex3f(68, -8, 30);
    glEnd();
    //kursi 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(68, -7, 20);
    glVertex3f(68, -6, 20);
    glVertex3f(68, -6, 30);
    glVertex3f(68, -7, 30);
    glEnd();
    //alas 4 tribun atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(71, -6, 20);
    glVertex3f(68, -6, 20);
    glVertex3f(68, -6, 30);
    glVertex3f(71, -6, 30);
    glEnd();

    ///////////////////////tribun lantai 2 depan

     ////////////1/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -11, 43);
    glVertex3f(40, -13, 43);
    glVertex3f(50, -13, 43);
    glVertex3f(50, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -11, 45);
    glVertex3f(40, -11, 43);
    glVertex3f(50, -11, 43);
    glVertex3f(50, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -9, 45);
    glVertex3f(40, -11, 45);
    glVertex3f(50, -11, 45);
    glVertex3f(50, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -9, 47);
    glVertex3f(40, -9, 45);
    glVertex3f(50, -9, 45);
    glVertex3f(50, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -7, 47);
    glVertex3f(40, -9, 47);
    glVertex3f(50, -9, 47);
    glVertex3f(50, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -7, 49);
    glVertex3f(40, -7, 47);
    glVertex3f(50, -7, 47);
    glVertex3f(50, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -5, 49);
    glVertex3f(40, -7, 49);
    glVertex3f(50, -7, 49);
    glVertex3f(50, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -5, 51);
    glVertex3f(40, -5, 49);
    glVertex3f(50, -5, 49);
    glVertex3f(50, -5, 51);
    glEnd();
////////////2/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -11, 43);
    glVertex3f(30, -13, 43);
    glVertex3f(38, -13, 43);
    glVertex3f(38, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -11, 45);
    glVertex3f(30, -11, 43);
    glVertex3f(38, -11, 43);
    glVertex3f(38, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -9, 45);
    glVertex3f(30, -11, 45);
    glVertex3f(38, -11, 45);
    glVertex3f(38, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -9, 47);
    glVertex3f(30, -9, 45);
    glVertex3f(38, -9, 45);
    glVertex3f(38, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -7, 47);
    glVertex3f(30, -9, 47);
    glVertex3f(38, -9, 47);
    glVertex3f(38, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -7, 49);
    glVertex3f(30, -7, 47);
    glVertex3f(38, -7, 47);
    glVertex3f(38, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -5, 49);
    glVertex3f(30, -7, 49);
    glVertex3f(38, -7, 49);
    glVertex3f(38, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -5, 51);
    glVertex3f(30, -5, 49);
    glVertex3f(38, -5, 49);
    glVertex3f(38, -5, 51);
    glEnd();

    ////////////3/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -11, 43);
    glVertex3f(20, -13, 43);
    glVertex3f(28, -13, 43);
    glVertex3f(28, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -11, 45);
    glVertex3f(20, -11, 43);
    glVertex3f(28, -11, 43);
    glVertex3f(28, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -9, 45);
    glVertex3f(20, -11, 45);
    glVertex3f(28, -11, 45);
    glVertex3f(28, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -9, 47);
    glVertex3f(20, -9, 45);
    glVertex3f(28, -9, 45);
    glVertex3f(28, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -7, 47);
    glVertex3f(20, -9, 47);
    glVertex3f(28, -9, 47);
    glVertex3f(28, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -7, 49);
    glVertex3f(20, -7, 47);
    glVertex3f(28, -7, 47);
    glVertex3f(28, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -5, 49);
    glVertex3f(20, -7, 49);
    glVertex3f(28, -7, 49);
    glVertex3f(28, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -5, 51);
    glVertex3f(20, -5, 49);
    glVertex3f(28, -5, 49);
    glVertex3f(28, -5, 51);
    glEnd();

      ////////////4/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -11, 43);
    glVertex3f(10, -13, 43);
    glVertex3f(18, -13, 43);
    glVertex3f(18, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -11, 45);
    glVertex3f(10, -11, 43);
    glVertex3f(18, -11, 43);
    glVertex3f(18, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -9, 45);
    glVertex3f(10, -11, 45);
    glVertex3f(18, -11, 45);
    glVertex3f(18, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -9, 47);
    glVertex3f(10, -9, 45);
    glVertex3f(18, -9, 45);
    glVertex3f(18, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -7, 47);
    glVertex3f(10, -9, 47);
    glVertex3f(18, -9, 47);
    glVertex3f(18, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -7, 49);
    glVertex3f(10, -7, 47);
    glVertex3f(18, -7, 47);
    glVertex3f(18, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -5, 49);
    glVertex3f(10, -7, 49);
    glVertex3f(18, -7, 49);
    glVertex3f(18, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -5, 51);
    glVertex3f(10, -5, 49);
    glVertex3f(18, -5, 49);
    glVertex3f(18, -5, 51);
    glEnd();

      ////////////5/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -11, 43);
    glVertex3f(0, -13, 43);
    glVertex3f(8, -13, 43);
    glVertex3f(8, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -11, 45);
    glVertex3f(0, -11, 43);
    glVertex3f(8, -11, 43);
    glVertex3f(8, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -9, 45);
    glVertex3f(0, -11, 45);
    glVertex3f(8, -11, 45);
    glVertex3f(8, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -9, 47);
    glVertex3f(0, -9, 45);
    glVertex3f(8, -9, 45);
    glVertex3f(8, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -7, 47);
    glVertex3f(0, -9, 47);
    glVertex3f(8, -9, 47);
    glVertex3f(8, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -7, 49);
    glVertex3f(0, -7, 47);
    glVertex3f(8, -7, 47);
    glVertex3f(8, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -5, 49);
    glVertex3f(0, -7, 49);
    glVertex3f(8, -7, 49);
    glVertex3f(8, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -5, 51);
    glVertex3f(0, -5, 49);
    glVertex3f(8, -5, 49);
    glVertex3f(8, -5, 51);
    glEnd();

 ////////////6/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -11, 43);
    glVertex3f(-10, -13, 43);
    glVertex3f(-2, -13, 43);
    glVertex3f(-2, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -11, 45);
    glVertex3f(-10, -11, 43);
    glVertex3f(-2, -11, 43);
    glVertex3f(-2, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -9, 45);
    glVertex3f(-10, -11, 45);
    glVertex3f(-2, -11, 45);
    glVertex3f(-2, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -9, 47);
    glVertex3f(-10, -9, 45);
    glVertex3f(-2, -9, 45);
    glVertex3f(-2, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -7, 47);
    glVertex3f(-10, -9, 47);
    glVertex3f(-2, -9, 47);
    glVertex3f(-2, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -7, 49);
    glVertex3f(-10, -7, 47);
    glVertex3f(-2, -7, 47);
    glVertex3f(-2, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -5, 49);
    glVertex3f(-10, -7, 49);
    glVertex3f(-2, -7, 49);
    glVertex3f(-2, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -5, 51);
    glVertex3f(-10, -5, 49);
    glVertex3f(-2, -5, 49);
    glVertex3f(-2, -5, 51);
    glEnd();
////////////7/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -11, 43);
    glVertex3f(-20, -13, 43);
    glVertex3f(-12, -13, 43);
    glVertex3f(-12, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -11, 45);
    glVertex3f(-20, -11, 43);
    glVertex3f(-12, -11, 43);
    glVertex3f(-12, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -9, 45);
    glVertex3f(-20, -11, 45);
    glVertex3f(-12, -11, 45);
    glVertex3f(-12, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -9, 47);
    glVertex3f(-20, -9, 45);
    glVertex3f(-12, -9, 45);
    glVertex3f(-12, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -7, 47);
    glVertex3f(-20, -9, 47);
    glVertex3f(-12, -9, 47);
    glVertex3f(-12, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -7, 49);
    glVertex3f(-20, -7, 47);
    glVertex3f(-12, -7, 47);
    glVertex3f(-12, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -5, 49);
    glVertex3f(-20, -7, 49);
    glVertex3f(-12, -7, 49);
    glVertex3f(-12, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -5, 51);
    glVertex3f(-20, -5, 49);
    glVertex3f(-12, -5, 49);
    glVertex3f(-12, -5, 51);
    glEnd();

////////////8/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -11, 43);
    glVertex3f(-30, -13, 43);
    glVertex3f(-22, -13, 43);
    glVertex3f(-22, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -11, 45);
    glVertex3f(-30, -11, 43);
    glVertex3f(-22, -11, 43);
    glVertex3f(-22, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -9, 45);
    glVertex3f(-30, -11, 45);
    glVertex3f(-22, -11, 45);
    glVertex3f(-22, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -9, 47);
    glVertex3f(-30, -9, 45);
    glVertex3f(-22, -9, 45);
    glVertex3f(-22, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -7, 47);
    glVertex3f(-30, -9, 47);
    glVertex3f(-22, -9, 47);
    glVertex3f(-22, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -7, 49);
    glVertex3f(-30, -7, 47);
    glVertex3f(-22, -7, 47);
    glVertex3f(-22, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -5, 49);
    glVertex3f(-30, -7, 49);
    glVertex3f(-22, -7, 49);
    glVertex3f(-22, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -5, 51);
    glVertex3f(-30, -5, 49);
    glVertex3f(-22, -5, 49);
    glVertex3f(-22, -5, 51);
    glEnd();

    ////////////9/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -11, 43);
    glVertex3f(-40, -13, 43);
    glVertex3f(-32, -13, 43);
    glVertex3f(-32, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -11, 45);
    glVertex3f(-40, -11, 43);
    glVertex3f(-32, -11, 43);
    glVertex3f(-32, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -9, 45);
    glVertex3f(-40, -11, 45);
    glVertex3f(-32, -11, 45);
    glVertex3f(-32, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -9, 47);
    glVertex3f(-40, -9, 45);
    glVertex3f(-32, -9, 45);
    glVertex3f(-32, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -7, 47);
    glVertex3f(-40, -9, 47);
    glVertex3f(-32, -9, 47);
    glVertex3f(-32, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -7, 49);
    glVertex3f(-40, -7, 47);
    glVertex3f(-32, -7, 47);
    glVertex3f(-32, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -5, 49);
    glVertex3f(-40, -7, 49);
    glVertex3f(-32, -7, 49);
    glVertex3f(-32, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -5, 51);
    glVertex3f(-40, -5, 49);
    glVertex3f(-32, -5, 49);
    glVertex3f(-32, -5, 51);
    glEnd();

////////////10/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -11, 43);
    glVertex3f(-50, -13, 43);
    glVertex3f(-42, -13, 43);
    glVertex3f(-42, -11, 43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -11, 45);
    glVertex3f(-50, -11, 43);
    glVertex3f(-42, -11, 43);
    glVertex3f(-42, -11, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -9, 45);
    glVertex3f(-50, -11, 45);
    glVertex3f(-42, -11, 45);
    glVertex3f(-42, -9, 45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -9, 47);
    glVertex3f(-50, -9, 45);
    glVertex3f(-42, -9, 45);
    glVertex3f(-42, -9, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -7, 47);
    glVertex3f(-50, -9, 47);
    glVertex3f(-42, -9, 47);
    glVertex3f(-42, -7, 47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -7, 49);
    glVertex3f(-50, -7, 47);
    glVertex3f(-42, -7, 47);
    glVertex3f(-42, -7, 49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -5, 49);
    glVertex3f(-50, -7, 49);
    glVertex3f(-42, -7, 49);
    glVertex3f(-42, -5, 49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -5, 51);
    glVertex3f(-50, -5, 49);
    glVertex3f(-42, -5, 49);
    glVertex3f(-42, -5, 51);
    glEnd();


///tribun 2 belakang

 ////////////1/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -10, -43);
    glVertex3f(40, -12, -43);
    glVertex3f(50, -12, -43);
    glVertex3f(50, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -10, -45);
    glVertex3f(40, -10, -43);
    glVertex3f(50, -10, -43);
    glVertex3f(50, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -8, -45);
    glVertex3f(40, -10, -45);
    glVertex3f(50, -10, -45);
    glVertex3f(50, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -8, -47);
    glVertex3f(40, -8, -45);
    glVertex3f(50, -8, -45);
    glVertex3f(50, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -6, -47);
    glVertex3f(40, -8, -47);
    glVertex3f(50, -8, -47);
    glVertex3f(50, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -6, -49);
    glVertex3f(40, -6, -47);
    glVertex3f(50, -6, -47);
    glVertex3f(50, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -4, -49);
    glVertex3f(40, -6, -49);
    glVertex3f(50, -6, -49);
    glVertex3f(50, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -4, -51);
    glVertex3f(40, -4, -49);
    glVertex3f(50, -4, -49);
    glVertex3f(50, -4, -51);
    glEnd();

////////////2/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -10, -43);
    glVertex3f(30, -12, -43);
    glVertex3f(38, -12, -43);
    glVertex3f(38, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -10, -45);
    glVertex3f(30, -10, -43);
    glVertex3f(38, -10, -43);
    glVertex3f(38, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -8, -45);
    glVertex3f(30, -10, -45);
    glVertex3f(38, -10, -45);
    glVertex3f(38, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -8, -47);
    glVertex3f(30, -8, -45);
    glVertex3f(38, -8, -45);
    glVertex3f(38, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -6, -47);
    glVertex3f(30, -8, -47);
    glVertex3f(38, -8, -47);
    glVertex3f(38, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -6, -49);
    glVertex3f(30, -6, -47);
    glVertex3f(38, -6, -47);
    glVertex3f(38, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -4, -49);
    glVertex3f(30, -6, -49);
    glVertex3f(38, -6, -49);
    glVertex3f(38, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -4, -51);
    glVertex3f(30, -4, -49);
    glVertex3f(38, -4, -49);
    glVertex3f(38, -4, -51);
    glEnd();
////////////3/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -10, -43);
    glVertex3f(20, -12, -43);
    glVertex3f(28, -12, -43);
    glVertex3f(28, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -10, -45);
    glVertex3f(20, -10, -43);
    glVertex3f(28, -10, -43);
    glVertex3f(28, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -8, -45);
    glVertex3f(20, -10, -45);
    glVertex3f(28, -10, -45);
    glVertex3f(28, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -8, -47);
    glVertex3f(20, -8, -45);
    glVertex3f(28, -8, -45);
    glVertex3f(28, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -6, -47);
    glVertex3f(20, -8, -47);
    glVertex3f(28, -8, -47);
    glVertex3f(28, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -6, -49);
    glVertex3f(20, -6, -47);
    glVertex3f(28, -6, -47);
    glVertex3f(28, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -4, -49);
    glVertex3f(20, -6, -49);
    glVertex3f(28, -6, -49);
    glVertex3f(28, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -4, -51);
    glVertex3f(20, -4, -49);
    glVertex3f(28, -4, -49);
    glVertex3f(28, -4, -51);
    glEnd();

////////////4/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -10, -43);
    glVertex3f(10, -12, -43);
    glVertex3f(18, -12, -43);
    glVertex3f(18, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -10, -45);
    glVertex3f(10, -10, -43);
    glVertex3f(18, -10, -43);
    glVertex3f(18, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -8, -45);
    glVertex3f(10, -10, -45);
    glVertex3f(18, -10, -45);
    glVertex3f(18, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -8, -47);
    glVertex3f(10, -8, -45);
    glVertex3f(18, -8, -45);
    glVertex3f(18, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -6, -47);
    glVertex3f(10, -8, -47);
    glVertex3f(18, -8, -47);
    glVertex3f(18, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -6, -49);
    glVertex3f(10, -6, -47);
    glVertex3f(18, -6, -47);
    glVertex3f(18, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -4, -49);
    glVertex3f(10, -6, -49);
    glVertex3f(18, -6, -49);
    glVertex3f(18, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -4, -51);
    glVertex3f(10, -4, -49);
    glVertex3f(18, -4, -49);
    glVertex3f(18, -4, -51);
    glEnd();
////////////5/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -10, -43);
    glVertex3f(0, -12, -43);
    glVertex3f(8, -12, -43);
    glVertex3f(8, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -10, -45);
    glVertex3f(0, -10, -43);
    glVertex3f(8, -10, -43);
    glVertex3f(8, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -8, -45);
    glVertex3f(0, -10, -45);
    glVertex3f(8, -10, -45);
    glVertex3f(8, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -8, -47);
    glVertex3f(0, -8, -45);
    glVertex3f(8, -8, -45);
    glVertex3f(8, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -6, -47);
    glVertex3f(0, -8, -47);
    glVertex3f(8, -8, -47);
    glVertex3f(8, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -6, -49);
    glVertex3f(0, -6, -47);
    glVertex3f(8, -6, -47);
    glVertex3f(8, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -4, -49);
    glVertex3f(0, -6, -49);
    glVertex3f(8, -6, -49);
    glVertex3f(8, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -4, -51);
    glVertex3f(0, -4, -49);
    glVertex3f(8, -4, -49);
    glVertex3f(8, -4, -51);
    glEnd();

////////////6/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -10, -43);
    glVertex3f(-10, -12, -43);
    glVertex3f(-2, -12, -43);
    glVertex3f(-2, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -10, -45);
    glVertex3f(-10, -10, -43);
    glVertex3f(-2, -10, -43);
    glVertex3f(-2, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -8, -45);
    glVertex3f(-10, -10, -45);
    glVertex3f(-2, -10, -45);
    glVertex3f(-2, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -8, -47);
    glVertex3f(-10, -8, -45);
    glVertex3f(-2, -8, -45);
    glVertex3f(-2, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -6, -47);
    glVertex3f(-10, -8, -47);
    glVertex3f(-2, -8, -47);
    glVertex3f(-2, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -6, -49);
    glVertex3f(-10, -6, -47);
    glVertex3f(-2, -6, -47);
    glVertex3f(-2, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -4, -49);
    glVertex3f(-10, -6, -49);
    glVertex3f(-2, -6, -49);
    glVertex3f(-2, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -4, -51);
    glVertex3f(-10, -4, -49);
    glVertex3f(-2, -4, -49);
    glVertex3f(-2, -4, -51);
    glEnd();


////////////7/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -10, -43);
    glVertex3f(-20, -12, -43);
    glVertex3f(-12, -12, -43);
    glVertex3f(-12, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -10, -45);
    glVertex3f(-20, -10, -43);
    glVertex3f(-12, -10, -43);
    glVertex3f(-12, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -8, -45);
    glVertex3f(-20, -10, -45);
    glVertex3f(-12, -10, -45);
    glVertex3f(-12, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -8, -47);
    glVertex3f(-20, -8, -45);
    glVertex3f(-12, -8, -45);
    glVertex3f(-12, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -6, -47);
    glVertex3f(-20, -8, -47);
    glVertex3f(-12, -8, -47);
    glVertex3f(-12, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -6, -49);
    glVertex3f(-20, -6, -47);
    glVertex3f(-12, -6, -47);
    glVertex3f(-12, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -4, -49);
    glVertex3f(-20, -6, -49);
    glVertex3f(-12, -6, -49);
    glVertex3f(-12, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -4, -51);
    glVertex3f(-20, -4, -49);
    glVertex3f(-12, -4, -49);
    glVertex3f(-12, -4, -51);
    glEnd();

    ////////////8/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -10, -43);
    glVertex3f(-30, -12, -43);
    glVertex3f(-22, -12, -43);
    glVertex3f(-22, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -10, -45);
    glVertex3f(-30, -10, -43);
    glVertex3f(-22, -10, -43);
    glVertex3f(-22, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -8, -45);
    glVertex3f(-30, -10, -45);
    glVertex3f(-22, -10, -45);
    glVertex3f(-22, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -8, -47);
    glVertex3f(-30, -8, -45);
    glVertex3f(-22, -8, -45);
    glVertex3f(-22, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -6, -47);
    glVertex3f(-30, -8, -47);
    glVertex3f(-22, -8, -47);
    glVertex3f(-22, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -6, -49);
    glVertex3f(-30, -6, -47);
    glVertex3f(-22, -6, -47);
    glVertex3f(-22, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -4, -49);
    glVertex3f(-30, -6, -49);
    glVertex3f(-22, -6, -49);
    glVertex3f(-22, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -4, -51);
    glVertex3f(-30, -4, -49);
    glVertex3f(-22, -4, -49);
    glVertex3f(-22, -4, -51);
    glEnd();

      ////////////9/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -10, -43);
    glVertex3f(-40, -12, -43);
    glVertex3f(-32, -12, -43);
    glVertex3f(-32, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -10, -45);
    glVertex3f(-40, -10, -43);
    glVertex3f(-32, -10, -43);
    glVertex3f(-32, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -8, -45);
    glVertex3f(-40, -10, -45);
    glVertex3f(-32, -10, -45);
    glVertex3f(-32, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -8, -47);
    glVertex3f(-40, -8, -45);
    glVertex3f(-32, -8, -45);
    glVertex3f(-32, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -6, -47);
    glVertex3f(-40, -8, -47);
    glVertex3f(-32, -8, -47);
    glVertex3f(-32, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -6, -49);
    glVertex3f(-40, -6, -47);
    glVertex3f(-32, -6, -47);
    glVertex3f(-32, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -4, -49);
    glVertex3f(-40, -6, -49);
    glVertex3f(-32, -6, -49);
    glVertex3f(-32, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -4, -51);
    glVertex3f(-40, -4, -49);
    glVertex3f(-32, -4, -49);
    glVertex3f(-32, -4, -51);
    glEnd();

        ////////////10/////////////////////
    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -10, -43);
    glVertex3f(-50, -12, -43);
    glVertex3f(-42, -12, -43);
    glVertex3f(-42, -10, -43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -10, -45);
    glVertex3f(-50, -10, -43);
    glVertex3f(-42, -10, -43);
    glVertex3f(-42, -10, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -8, -45);
    glVertex3f(-50, -10, -45);
    glVertex3f(-42, -10, -45);
    glVertex3f(-42, -8, -45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -8, -47);
    glVertex3f(-50, -8, -45);
    glVertex3f(-42, -8, -45);
    glVertex3f(-42, -8, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -6, -47);
    glVertex3f(-50, -8, -47);
    glVertex3f(-42, -8, -47);
    glVertex3f(-42, -6, -47);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -6, -49);
    glVertex3f(-50, -6, -47);
    glVertex3f(-42, -6, -47);
    glVertex3f(-42, -6, -49);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -4, -49);
    glVertex3f(-50, -6, -49);
    glVertex3f(-42, -6, -49);
    glVertex3f(-42, -4, -49);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -4, -51);
    glVertex3f(-50, -4, -49);
    glVertex3f(-42, -4, -49);
    glVertex3f(-42, -4, -51);
    glEnd();

    ///tribun lantai 3
    ///1

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, -2, -52);
    glVertex3f(-50, -4, -52);
    glVertex3f(-42, -4, -52);
    glVertex3f(-42, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, -2, -53);
    glVertex3f(-50, -2, -52);
    glVertex3f(-42, -2, -52);
    glVertex3f(-42, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, 0, -53);
    glVertex3f(-50, -2, -53);
    glVertex3f(-42, -2, -53);
    glVertex3f(-42, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, 0, -54);
    glVertex3f(-50, 0, -53);
    glVertex3f(-42, 0, -53);
    glVertex3f(-42, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, 2, -54);
    glVertex3f(-50, 0, -54);
    glVertex3f(-42, 0, -54);
    glVertex3f(-42, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, 2, -55);
    glVertex3f(-50, 2, -54);
    glVertex3f(-42, 2, -54);
    glVertex3f(-42, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, 2, -55);
    glVertex3f(-50, 4, -55);
    glVertex3f(-42, 4, -55);
    glVertex3f(-42, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, 4, -56);
    glVertex3f(-50, 4, -55);
    glVertex3f(-42, 4, -55);
    glVertex3f(-42, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, 4, -56);
    glVertex3f(-50, 6, -56);
    glVertex3f(-42, 6, -56);
    glVertex3f(-42, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, 6, -57);
    glVertex3f(-50, 6, -56);
    glVertex3f(-42, 6, -56);
    glVertex3f(-42, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, 6, -57);
    glVertex3f(-50, 8, -57);
    glVertex3f(-42, 8, -57);
    glVertex3f(-42, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, 8, -58);
    glVertex3f(-50, 8, -57);
    glVertex3f(-42, 8, -57);
    glVertex3f(-42, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-50, 8, -58);
    glVertex3f(-50, 10, -58);
    glVertex3f(-42, 10, -58);
    glVertex3f(-42, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-50, 10, -59);
    glVertex3f(-50, 10, -58);
    glVertex3f(-42, 10,-58);
    glVertex3f(-42, 10, -59);
    glEnd();

  ///2

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, -2, -52);
    glVertex3f(-40, -4, -52);
    glVertex3f(-32, -4, -52);
    glVertex3f(-32, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, -2, -53);
    glVertex3f(-40, -2, -52);
    glVertex3f(-32, -2, -52);
    glVertex3f(-32, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, 0, -53);
    glVertex3f(-40, -2, -53);
    glVertex3f(-32, -2, -53);
    glVertex3f(-32, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, 0, -54);
    glVertex3f(-40, 0, -53);
    glVertex3f(-32, 0, -53);
    glVertex3f(-32, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, 2, -54);
    glVertex3f(-40, 0, -54);
    glVertex3f(-32, 0, -54);
    glVertex3f(-32, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, 2, -55);
    glVertex3f(-40, 2, -54);
    glVertex3f(-32, 2, -54);
    glVertex3f(-32, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, 2, -55);
    glVertex3f(-40, 4, -55);
    glVertex3f(-32, 4, -55);
    glVertex3f(-32, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, 4, -56);
    glVertex3f(-40, 4, -55);
    glVertex3f(-32, 4, -55);
    glVertex3f(-32, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, 4, -56);
    glVertex3f(-40, 6, -56);
    glVertex3f(-32, 6, -56);
    glVertex3f(-32, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, 6, -57);
    glVertex3f(-40, 6, -56);
    glVertex3f(-32, 6, -56);
    glVertex3f(-32, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, 6, -57);
    glVertex3f(-40, 8, -57);
    glVertex3f(-32, 8, -57);
    glVertex3f(-32, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, 8, -58);
    glVertex3f(-40, 8, -57);
    glVertex3f(-32, 8, -57);
    glVertex3f(-32, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-40, 8, -58);
    glVertex3f(-40, 10, -58);
    glVertex3f(-32, 10, -58);
    glVertex3f(-32, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-40, 10, -59);
    glVertex3f(-40, 10, -58);
    glVertex3f(-32, 10,-58);
    glVertex3f(-32, 10, -59);
    glEnd();

///3

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, -2, -52);
    glVertex3f(-30, -4, -52);
    glVertex3f(-22, -4, -52);
    glVertex3f(-22, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, -2, -53);
    glVertex3f(-30, -2, -52);
    glVertex3f(-22, -2, -52);
    glVertex3f(-22, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, 0, -53);
    glVertex3f(-30, -2, -53);
    glVertex3f(-22, -2, -53);
    glVertex3f(-22, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, 0, -54);
    glVertex3f(-30, 0, -53);
    glVertex3f(-22, 0, -53);
    glVertex3f(-22, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, 2, -54);
    glVertex3f(-30, 0, -54);
    glVertex3f(-22, 0, -54);
    glVertex3f(-22, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, 2, -55);
    glVertex3f(-30, 2, -54);
    glVertex3f(-22, 2, -54);
    glVertex3f(-22, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, 2, -55);
    glVertex3f(-30, 4, -55);
    glVertex3f(-22, 4, -55);
    glVertex3f(-22, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, 4, -56);
    glVertex3f(-30, 4, -55);
    glVertex3f(-22, 4, -55);
    glVertex3f(-22, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, 4, -56);
    glVertex3f(-30, 6, -56);
    glVertex3f(-22, 6, -56);
    glVertex3f(-22, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, 6, -57);
    glVertex3f(-30, 6, -56);
    glVertex3f(-22, 6, -56);
    glVertex3f(-22, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, 6, -57);
    glVertex3f(-30, 8, -57);
    glVertex3f(-22, 8, -57);
    glVertex3f(-22, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, 8, -58);
    glVertex3f(-30, 8, -57);
    glVertex3f(-22, 8, -57);
    glVertex3f(-22, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-30, 8, -58);
    glVertex3f(-30, 10, -58);
    glVertex3f(-22, 10, -58);
    glVertex3f(-22, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-30, 10, -59);
    glVertex3f(-30, 10, -58);
    glVertex3f(-22, 10,-58);
    glVertex3f(-22, 10, -59);
    glEnd();
///4

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, -2, -52);
    glVertex3f(-20, -4, -52);
    glVertex3f(-12, -4, -52);
    glVertex3f(-12, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, -2, -53);
    glVertex3f(-20, -2, -52);
    glVertex3f(-12, -2, -52);
    glVertex3f(-12, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, 0, -53);
    glVertex3f(-20, -2, -53);
    glVertex3f(-12, -2, -53);
    glVertex3f(-12, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, 0, -54);
    glVertex3f(-20, 0, -53);
    glVertex3f(-12, 0, -53);
    glVertex3f(-12, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, 2, -54);
    glVertex3f(-20, 0, -54);
    glVertex3f(-12, 0, -54);
    glVertex3f(-12, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, 2, -55);
    glVertex3f(-20, 2, -54);
    glVertex3f(-12, 2, -54);
    glVertex3f(-12, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, 2, -55);
    glVertex3f(-20, 4, -55);
    glVertex3f(-12, 4, -55);
    glVertex3f(-12, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, 4, -56);
    glVertex3f(-20, 4, -55);
    glVertex3f(-12, 4, -55);
    glVertex3f(-12, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, 4, -56);
    glVertex3f(-20, 6, -56);
    glVertex3f(-12, 6, -56);
    glVertex3f(-12, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, 6, -57);
    glVertex3f(-20, 6, -56);
    glVertex3f(-12, 6, -56);
    glVertex3f(-12, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, 6, -57);
    glVertex3f(-20, 8, -57);
    glVertex3f(-12, 8, -57);
    glVertex3f(-12, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, 8, -58);
    glVertex3f(-20, 8, -57);
    glVertex3f(-12, 8, -57);
    glVertex3f(-12, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-20, 8, -58);
    glVertex3f(-20, 10, -58);
    glVertex3f(-12, 10, -58);
    glVertex3f(-12, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-20, 10, -59);
    glVertex3f(-20, 10, -58);
    glVertex3f(-12, 10,-58);
    glVertex3f(-12, 10, -59);
    glEnd();

///5

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, -2, -52);
    glVertex3f(-10, -4, -52);
    glVertex3f(-2, -4, -52);
    glVertex3f(-2, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, -2, -53);
    glVertex3f(-10, -2, -52);
    glVertex3f(-2, -2, -52);
    glVertex3f(-2, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, 0, -53);
    glVertex3f(-10, -2, -53);
    glVertex3f(-2, -2, -53);
    glVertex3f(-2, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, 0, -54);
    glVertex3f(-10, 0, -53);
    glVertex3f(-2, 0, -53);
    glVertex3f(-2, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, 2, -54);
    glVertex3f(-10, 0, -54);
    glVertex3f(-2, 0, -54);
    glVertex3f(-2, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, 2, -55);
    glVertex3f(-10, 2, -54);
    glVertex3f(-2, 2, -54);
    glVertex3f(-2, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, 2, -55);
    glVertex3f(-10, 4, -55);
    glVertex3f(-2, 4, -55);
    glVertex3f(-2, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, 4, -56);
    glVertex3f(-10, 4, -55);
    glVertex3f(-2, 4, -55);
    glVertex3f(-2, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, 4, -56);
    glVertex3f(-10, 6, -56);
    glVertex3f(-2, 6, -56);
    glVertex3f(-2, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, 6, -57);
    glVertex3f(-10, 6, -56);
    glVertex3f(-2, 6, -56);
    glVertex3f(-2, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, 6, -57);
    glVertex3f(-10, 8, -57);
    glVertex3f(-2, 8, -57);
    glVertex3f(-2, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, 8, -58);
    glVertex3f(-10, 8, -57);
    glVertex3f(-2, 8, -57);
    glVertex3f(-2, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(-10, 8, -58);
    glVertex3f(-10, 10, -58);
    glVertex3f(-2, 10, -58);
    glVertex3f(-2, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(-10, 10, -59);
    glVertex3f(-10, 10, -58);
    glVertex3f(-2, 10,-58);
    glVertex3f(-2, 10, -59);
    glEnd();

    ///6

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, -2, -52);
    glVertex3f(0, -4, -52);
    glVertex3f(8, -4, -52);
    glVertex3f(8, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, -2, -53);
    glVertex3f(0, -2, -52);
    glVertex3f(8, -2, -52);
    glVertex3f(8, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, 0, -53);
    glVertex3f(0, -2, -53);
    glVertex3f(8, -2, -53);
    glVertex3f(8, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, 0, -54);
    glVertex3f(0, 0, -53);
    glVertex3f(8, 0, -53);
    glVertex3f(8, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, 2, -54);
    glVertex3f(0, 0, -54);
    glVertex3f(8, 0, -54);
    glVertex3f(8, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, 2, -55);
    glVertex3f(0, 2, -54);
    glVertex3f(8, 2, -54);
    glVertex3f(8, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, 2, -55);
    glVertex3f(0, 4, -55);
    glVertex3f(8, 4, -55);
    glVertex3f(8, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, 4, -56);
    glVertex3f(0, 4, -55);
    glVertex3f(8, 4, -55);
    glVertex3f(8, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, 4, -56);
    glVertex3f(0, 6, -56);
    glVertex3f(8, 6, -56);
    glVertex3f(8, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, 6, -57);
    glVertex3f(0, 6, -56);
    glVertex3f(8, 6, -56);
    glVertex3f(8, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, 6, -57);
    glVertex3f(0, 8, -57);
    glVertex3f(8, 8, -57);
    glVertex3f(8, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, 8, -58);
    glVertex3f(0, 8, -57);
    glVertex3f(8, 8, -57);
    glVertex3f(8, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(0, 8, -58);
    glVertex3f(0, 10, -58);
    glVertex3f(8, 10, -58);
    glVertex3f(8, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(0, 10, -59);
    glVertex3f(0, 10, -58);
    glVertex3f(8, 10,-58);
    glVertex3f(8, 10, -59);
    glEnd();

        ///7

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, -2, -52);
    glVertex3f(10, -4, -52);
    glVertex3f(18, -4, -52);
    glVertex3f(18, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, -2, -53);
    glVertex3f(10, -2, -52);
    glVertex3f(18, -2, -52);
    glVertex3f(18, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, 0, -53);
    glVertex3f(10, -2, -53);
    glVertex3f(18, -2, -53);
    glVertex3f(18, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, 0, -54);
    glVertex3f(10, 0, -53);
    glVertex3f(18, 0, -53);
    glVertex3f(18, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, 2, -54);
    glVertex3f(10, 0, -54);
    glVertex3f(18, 0, -54);
    glVertex3f(18, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, 2, -55);
    glVertex3f(10, 2, -54);
    glVertex3f(18, 2, -54);
    glVertex3f(18, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, 2, -55);
    glVertex3f(10, 4, -55);
    glVertex3f(18, 4, -55);
    glVertex3f(18, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, 4, -56);
    glVertex3f(10, 4, -55);
    glVertex3f(18, 4, -55);
    glVertex3f(18, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, 4, -56);
    glVertex3f(10, 6, -56);
    glVertex3f(18, 6, -56);
    glVertex3f(18, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, 6, -57);
    glVertex3f(10, 6, -56);
    glVertex3f(18, 6, -56);
    glVertex3f(18, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, 6, -57);
    glVertex3f(10, 8, -57);
    glVertex3f(18, 8, -57);
    glVertex3f(18, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, 8, -58);
    glVertex3f(10, 8, -57);
    glVertex3f(18, 8, -57);
    glVertex3f(18, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(10, 8, -58);
    glVertex3f(10, 10, -58);
    glVertex3f(18, 10, -58);
    glVertex3f(18, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(10, 10, -59);
    glVertex3f(10, 10, -58);
    glVertex3f(18, 10,-58);
    glVertex3f(18, 10, -59);
    glEnd();

    ///8

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, -2, -52);
    glVertex3f(20, -4, -52);
    glVertex3f(28, -4, -52);
    glVertex3f(28, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, -2, -53);
    glVertex3f(20, -2, -52);
    glVertex3f(28, -2, -52);
    glVertex3f(28, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, 0, -53);
    glVertex3f(20, -2, -53);
    glVertex3f(28, -2, -53);
    glVertex3f(28, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, 0, -54);
    glVertex3f(20, 0, -53);
    glVertex3f(28, 0, -53);
    glVertex3f(28, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, 2, -54);
    glVertex3f(20, 0, -54);
    glVertex3f(28, 0, -54);
    glVertex3f(28, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, 2, -55);
    glVertex3f(20, 2, -54);
    glVertex3f(28, 2, -54);
    glVertex3f(28, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, 2, -55);
    glVertex3f(20, 4, -55);
    glVertex3f(28, 4, -55);
    glVertex3f(28, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, 4, -56);
    glVertex3f(20, 4, -55);
    glVertex3f(28, 4, -55);
    glVertex3f(28, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, 4, -56);
    glVertex3f(20, 6, -56);
    glVertex3f(28, 6, -56);
    glVertex3f(28, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, 6, -57);
    glVertex3f(20, 6, -56);
    glVertex3f(28, 6, -56);
    glVertex3f(28, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, 6, -57);
    glVertex3f(20, 8, -57);
    glVertex3f(28, 8, -57);
    glVertex3f(28, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, 8, -58);
    glVertex3f(20, 8, -57);
    glVertex3f(28, 8, -57);
    glVertex3f(28, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(20, 8, -58);
    glVertex3f(20, 10, -58);
    glVertex3f(28, 10, -58);
    glVertex3f(28, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(20, 10, -59);
    glVertex3f(20, 10, -58);
    glVertex3f(28, 10,-58);
    glVertex3f(28, 10, -59);
    glEnd();

    ///9

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, -2, -52);
    glVertex3f(30, -4, -52);
    glVertex3f(38, -4, -52);
    glVertex3f(38, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, -2, -53);
    glVertex3f(30, -2, -52);
    glVertex3f(38, -2, -52);
    glVertex3f(38, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, 0, -53);
    glVertex3f(30, -2, -53);
    glVertex3f(38, -2, -53);
    glVertex3f(38, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, 0, -54);
    glVertex3f(30, 0, -53);
    glVertex3f(38, 0, -53);
    glVertex3f(38, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, 2, -54);
    glVertex3f(30, 0, -54);
    glVertex3f(38, 0, -54);
    glVertex3f(38, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, 2, -55);
    glVertex3f(30, 2, -54);
    glVertex3f(38, 2, -54);
    glVertex3f(38, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, 2, -55);
    glVertex3f(30, 4, -55);
    glVertex3f(38, 4, -55);
    glVertex3f(38, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, 4, -56);
    glVertex3f(30, 4, -55);
    glVertex3f(38, 4, -55);
    glVertex3f(38, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, 4, -56);
    glVertex3f(30, 6, -56);
    glVertex3f(38, 6, -56);
    glVertex3f(38, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, 6, -57);
    glVertex3f(30, 6, -56);
    glVertex3f(38, 6, -56);
    glVertex3f(38, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(30, 45, 224);
    glVertex3f(30, 6, -57);
    glVertex3f(30, 8, -57);
    glVertex3f(38, 8, -57);
    glVertex3f(38, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, 8, -58);
    glVertex3f(30, 8, -57);
    glVertex3f(38, 8, -57);
    glVertex3f(38, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(30, 8, -58);
    glVertex3f(30, 10, -58);
    glVertex3f(38, 10, -58);
    glVertex3f(38, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(30, 10, -59);
    glVertex3f(30, 10, -58);
    glVertex3f(38, 10,-58);
    glVertex3f(38, 10, -59);
    glEnd();
///10

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, -2, -52);
    glVertex3f(40, -4, -52);
    glVertex3f(50, -4, -52);
    glVertex3f(50, -2, -52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, -2, -53);
    glVertex3f(40, -2, -52);
    glVertex3f(50, -2, -52);
    glVertex3f(50, -2, -53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, 0, -53);
    glVertex3f(40, -2, -53);
    glVertex3f(50, -2, -53);
    glVertex3f(50, 0, -53);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, 0, -54);
    glVertex3f(40, 0, -53);
    glVertex3f(50, 0, -53);
    glVertex3f(50, 0, -54);
    glEnd();

      glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, 2, -54);
    glVertex3f(40, 0, -54);
    glVertex3f(50, 0, -54);
    glVertex3f(50, 2, -54);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, 2, -55);
    glVertex3f(40, 2, -54);
    glVertex3f(50, 2, -54);
    glVertex3f(50, 2, -55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, 2, -55);
    glVertex3f(40, 4, -55);
    glVertex3f(50, 4, -55);
    glVertex3f(50, 2, -55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, 4, -56);
    glVertex3f(40, 4, -55);
    glVertex3f(50, 4, -55);
    glVertex3f(50, 4, -56);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, 4, -56);
    glVertex3f(40, 6, -56);
    glVertex3f(50, 6, -56);
    glVertex3f(50, 4, -56);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, 6, -57);
    glVertex3f(40, 6, -56);
    glVertex3f(50, 6, -56);
    glVertex3f(50, 6, -57);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, 6, -57);
    glVertex3f(40, 8, -57);
    glVertex3f(50, 8, -57);
    glVertex3f(50, 6, -57);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, 8, -58);
    glVertex3f(40, 8, -57);
    glVertex3f(50, 8, -57);
    glVertex3f(50, 8, -58);
    glEnd();

   glBegin(GL_QUADS);
    glColor3ub(0, 45, 224);
    glVertex3f(40, 8, -58);
    glVertex3f(40, 10, -58);
    glVertex3f(50, 10, -58);
    glVertex3f(50, 8, -58);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(255, 255, 252);
    glVertex3f(40, 10, -59);
    glVertex3f(40, 10, -58);
    glVertex3f(50, 10,-58);
    glVertex3f(50, 10, -59);
    glEnd();

   //gawang
 //DEPAN KIRI

                                            glPushMatrix();
											glTranslatef(-40,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
 //DEPAN KANAN
                                            glPushMatrix();
											glTranslatef(-40,-13,8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
//belakang KIRI

                                            glPushMatrix();
											glTranslatef(45,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
 //belakang KANAN
                                            glPushMatrix();
											glTranslatef(45,-13,8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
 //ATAS depan
                                            glPushMatrix();
											glTranslatef(-40,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
//samping kanan
                                            glPushMatrix();
											glTranslatef(-40,-13,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,5,50,50);
											glPopMatrix();
                                            glEnd();
//samping kiri
                                            glPushMatrix();
											glTranslatef(-40,-13,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,5,50,50);
											glPopMatrix();
                                            glEnd();

//jaring kanan
												glPushMatrix();
												glTranslatef(43.5,-13,8);
												glRotatef(90,90,0,0);
												glColor3ub(255,255,255);
												gluCylinder(obj,0.4,0.5,16,50,50);
												glPopMatrix();
												glEnd();

												 glPushMatrix();
												glTranslatef(41.5,-13,8);
												glRotatef(90,90,0,0);
												glColor3ub(255,255,255);
												gluCylinder(obj,0.4,0.5,16,50,50);
												glPopMatrix();
												glEnd();

                                            glPushMatrix();
											glTranslatef(-40,-15,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(-40,-17,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-19,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-21,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-23,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-25,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-27,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-29,8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

//jaring kiri


                                            glPushMatrix();
											glTranslatef(43.5,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											 glPushMatrix();
											glTranslatef(41.5,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();



                                            glPushMatrix();
											glTranslatef(-40,-15,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(-40,-17,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-19,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-21,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-23,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-25,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-27,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-29,-8);
											glRotatef(-240,-240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

//jaring belakang

                                            glPushMatrix();
											glTranslatef(-45,-15,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(-45,-17,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-19,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-21,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-23,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-25,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-27,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-29,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,6);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,4);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,2);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,0);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,-2);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,-4);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-13,-6);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();
//jaring atas
											glPushMatrix();
											glTranslatef(-41.5,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-43.5,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(-40,-13,6);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-13,4);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-13,2);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-13,0);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-13,-2);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-13,-4);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-40,-13,-6);
											glRotatef(-240,-240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();




 //gawang satunya
 //DEPAN KIRI

                                            glPushMatrix();
											glTranslatef(40,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
 //DEPAN KANAN
                                            glPushMatrix();
											glTranslatef(40,-13,8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
 //ATAS depan
                                            glPushMatrix();
											glTranslatef(40,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
//ATAS belakang
                                            glPushMatrix();
											glTranslatef(45,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
//belakang KIRI

                                            glPushMatrix();
											glTranslatef(-45,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();
 //belakang KANAN
                                            glPushMatrix();
											glTranslatef(-45,-13,8);
											glRotatef(90,90,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();


//ATAS belakang
                                            glPushMatrix();
											glTranslatef(-45,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,16,50,50);
											glPopMatrix();
                                            glEnd();

//samping kanan
                                            glPushMatrix();
											glTranslatef(40,-13,8);
											glRotatef(240,240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,5,50,50);
											glPopMatrix();
                                            glEnd();
//samping kiri
                                            glPushMatrix();
											glTranslatef(40,-13,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.7,5,50,50);
											glPopMatrix();
                                            glEnd();

//jaring atas
                              				glPushMatrix();
											glTranslatef(41.5,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(43.5,-13,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(40,-13,6);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-13,4);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-13,2);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-13,0);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-13,-2);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-13,-4);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-13,-6);
											glRotatef(240,240,-230,240);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();


//jaring belakang
                                            glPushMatrix();
											glTranslatef(45,-15,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(45,-17,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-19,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-21,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-23,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-25,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-27,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(45,-29,8);
											glRotatef(-900,-900,0,0);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

												glPushMatrix();
											glTranslatef(-45,-13,6);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-13,4);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-13,2);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-13,0);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-13,-2);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-13,-4);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(-45,-13,-6);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();



//jaring kanan
											glPushMatrix();
											glTranslatef(-43.5,-13,8);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											 glPushMatrix();
											glTranslatef(-41.5,-13,8);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(40,-15,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(40,-17,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-19,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-21,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-23,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-25,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-27,8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-29,8);
											glRotatef(240,240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

//jaring kiri
											glPushMatrix();
											glTranslatef(-43.5,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

											 glPushMatrix();
											glTranslatef(-41.5,-13,-8);
											glRotatef(90,90,0,0);
											glColor3ub(255,255,255);
											gluCylinder(obj,0.4,0.5,16,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(40,-15,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

                                            glPushMatrix();
											glTranslatef(40,-17,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-19,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-21,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-23,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-25,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-27,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(255, 255, 255);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

											glPushMatrix();
											glTranslatef(40,-29,-8);
											glRotatef(240,240,-230,240);
											glColor3ub(137, 145, 139);
											gluCylinder(obj,0.4,0.5,5,50,50);
											glPopMatrix();
                                            glEnd();

}

void bola()
{

    ///bola melayang
    glColor3ub(255,255,255);
    glutWireSphere(2,100,100);

     ///bola dilapangan
    	glPushMatrix();
	glTranslatef(0,-28,0);
	glColor3ub(255,255,255);
	glRotatef(2,2,10,0);
	glutSolidSphere(2,360,360);
	glPopMatrix();

}


void tampil(void)
{
	if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

    stadiun();
    bola();

   glutSwapBuffers();


}



void idle(){
	if(!mouseDown){
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}



void mouse (int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	} else {
		mouseDown = false;
	}
}

void mouseMotion(int x, int y){
	if(mouseDown){
		yrot = x - xdiff;
		xrot = y + xdiff;
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glLoadIdentity();
        gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        glRotatef(xrot, 1.0f, 0.0f, 0.0f);
        glRotatef(yrot, 0.0f, 1.0f, 0.0f);
		glutPostRedisplay();
	}
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
	case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
	case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
	case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
	case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

void ukuran(int lebar, int tinggi)
{

    glViewport(0,0,lebar,tinggi);
    if (tinggi == 0) tinggi = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, lebar / tinggi, 6.0, 600.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
