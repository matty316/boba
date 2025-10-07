#include "bulkin.h"
#include "level.h"
#include "quad.h"
#include <glm/glm.hpp>

int main() {
  Bulkin app;
  auto wallTexture = app.addTexture("textures/red_brick_diff_4k.jpg");
  auto boxTexture = app.addTexture("textures/brown_floor_tiles_diff_4k.jpg");
  auto ceilingTexture = app.addTexture("textures/plastered_wall_diff_4k.jpg");
  BulkinLevel level("resources/level.tmx", wallTexture, boxTexture, ceilingTexture, 2);
  level.renderLevel(app);
  app.run();
}
