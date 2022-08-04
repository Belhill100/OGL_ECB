#include "Cruz.h"

void Cruz::DibujarCruz(float x, float y, float z) {
    glPushMatrix();
        glTranslatef(x, y, z);
        glPushMatrix();
            glRotatef(90, 1, 0, 0);
            glTranslatef(0, 0, -1);
            glutSolidCylinder(0.20, 2, 20, 20);
        glPopMatrix();

        glPushMatrix();
            glRotatef(90, 0, 1, 0);
            glTranslatef(-1, 0.5, -0.75);
            glutSolidCylinder(0.20, 1.5, 20, 20);
        glPopMatrix();
    glPopMatrix();
}