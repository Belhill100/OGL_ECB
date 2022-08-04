#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>
#define ROTA 25
#define SEG 5

class Cola
{
public:
	Cola() {};
	void DibujarCola(float x, float y, float z);
};

