#include "bulkin.h"
#include "level.h"
#include "quad.h"
#include <glm/glm.hpp>

int main() {
  Bulkin app;
  auto wallTexture = app.addTexture("textures/wall.png");
  auto boxTexture = app.addTexture("textures/box.png");
  BulkinLevel level("resources/level.tmx", boxTexture);
  level.renderLevel(app);
  app.run();
}
