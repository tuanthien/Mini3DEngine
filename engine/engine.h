#ifndef ENGINE_H
#define ENGINE_H

#include <my_math.h>
#include "raylib.h"

Vector2 screen(Vector2 vec2, int screenWidth, int screenHeight);
Vector2 project(MyVector3 vec3);
#endif