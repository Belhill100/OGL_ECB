#include "Cola.h"

void Cola::DibujarCola(float x, float y, float z) {
	glPushMatrix();
		glTranslatef(x, y, z);
		glPushMatrix();
			glTranslatef(-0.5, 0.0, 0.0);
			glRotatef((GLfloat)ROTA, 0.0, 0.0, 1.0);
			glTranslatef(0.5, 0.0, 0.0);
			glPushMatrix();
				glScalef(1.0, 0.4, 1.0);
				glutSolidCube(1.0);
			glPopMatrix();

			for (int i = 0; i < SEG; i++)
			{
				glTranslatef(0.5, 0.0, 0.0);
				glRotatef((GLfloat)ROTA, 0.0, 0.0, 1.0);
				glTranslatef(0.5, 0.0, 0.0);
				glPushMatrix();
				glScalef(1.0, 0.4, 1.0);
				glutSolidCube(1.0);
				glPopMatrix();
			}

			for (int i = 0; i < SEG; i++)
			{
				glTranslatef(0.5, 0.0, 0.0);
				glRotatef((GLfloat)35, 0.0, 0.0, 1.0);
				glTranslatef(0.5, 0.0, 0.0);
				glPushMatrix();
				glScalef(1.0, 0.4, 1.0);
				glutSolidCube(1.0);
				glPopMatrix();
			}

			for (int i = 1; i < SEG; i++)
			{
				glTranslatef(0.5, 0.0, 0.0);
				glRotatef((GLfloat)45, 0.0, 0.0, 1.0);
				glTranslatef(0.5, 0.0, 0.0);
				glPushMatrix();
				glScalef(1.0, 0.4, 1.0);
				glutSolidCube(1.0);
				glPopMatrix();
			}
		glPopMatrix();
	glPopMatrix();
}