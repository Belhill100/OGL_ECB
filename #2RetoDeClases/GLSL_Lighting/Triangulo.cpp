#include "Triangulo.h"

void Triangulo::DibujarTriangulo(float x, float y, float z, float v1, float v2, float v3) {
	glPushMatrix();
        glTranslatef(x, y, z);
        glBegin(GL_TRIANGLES);
            glVertex3f(v1, 0.0, 0.0);
            glVertex3f(0.0, v2, 0.0);
            glVertex3f(v3, 0.0, 0.0);
        glEnd();
	glPopMatrix();
}
