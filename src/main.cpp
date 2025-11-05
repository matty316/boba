#ifdef OPEGL
#include <opegl.hpp>
#else
#include "bulkin.h"
#endif

int main() {
#ifdef OPEGL
  OpeGL app;

#else
  Bulkin app;
#endif

  auto wallTexture = app.addTexture("textures/red_brick_diff_4k.jpg");
  auto floorTexture = app.addTexture("textures/brown_floor_tiles_diff_4k.jpg");
  auto ceilingTexture = app.addTexture("textures/plastered_wall_diff_4k.jpg");
  app.addCube(3, 3, wallTexture);
  app.loadLevel("resources/level.tmx", wallTexture, floorTexture,
                ceilingTexture, 2);
  app.run();
}
