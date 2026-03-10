#include "engine.h"
#include "raylib.h"

/*
/screen
  transform raylib window to match model coordinates
/project (2d model)
  convert 3d to 2d 
/3d model
  generate points for 3d model
*/

Vector2 screen (Vector2 vec2, int screenWidth, int screenHeight) {
  return (Vector2){ (vec2.x + 1)/2 * screenWidth, ( 1- (vec2.y + 1)/2) * screenHeight};
}

Vector2 project (MyVector3 vec3){
  return (Vector2){vec3.x/vec3.z, vec3.y/vec3.z};
}