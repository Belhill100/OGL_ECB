#include "Cerdo.h"

void Cerdo::DibujarCerdo(float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glPushMatrix();
			glTranslatef(-6.65, -2, 0);
			glScalef(1, 0.6, 1);
			glutSolidSphere(7, 20, 20);
			
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-2.5, -3, 4);
			glRotated(90, 1, 0, 0);
			glutSolidCylinder(1, 2.5, 20, 20);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-10.5, -3, 4);
			glRotated(90, 1, 0, 0);
			glutSolidCylinder(1, 2.5, 20, 20);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-15, -2, 0);
			glRotated(90, 0, 0, 1);
			glRotated(90, 0, 1, 0);
			glRotated(90, 1, 0, 0);
			glutSolidCylinder(1.5, 1.5, 20, 20);
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-11.5, -0.45, 4);
			glScalef(1, 1, 1);
			glutSolidSphere(0.55, 20, 20);
		glPopMatrix();
	glPopMatrix();
}
