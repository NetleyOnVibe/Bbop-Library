#ifndef SCENE_CLASS_H
#define SCENE_CLASS_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <variant>
#include <vector>

#include "bbopMathClass.h"
#include "spriteClass.h"
#include "shaderClass.h"
#include "shaders.h"
#include "bbopGlobal.h"

class Scene
{
public:
  Scene();
  Scene(float nAmbiantLightValue, Vector3i nAmbiantLightColor);

  void Use();
  void setAmbiantLightValue(float nAmbiantLightValue);
  float getAmbiantLightValue();
  void setAmbiantLightColor(Vector3i nAmbiantLightColor);
  Vector3i getAmbiantLightColor();
  void Draw(BbopDrawable& spr);
private:
  Shader sceneShader;
  float ambiantLightValue;
  Vector3i ambiantLightColor;
  GLint ambiantLightLoc;
  GLint renderModeLoc;
  Vector3f ambiantLight;
};

#endif // !SCENE_CLASS_H
