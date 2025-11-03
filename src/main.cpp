#ifdef OPEGL
#include <opegl.hpp>
OpeGL app;
#else
#include "bulkin.h"
#endif

int main() {
#ifdef OPEGL
#else
  Bulkin app;
#endif
  app.addModel("resources/counter_top/scene.gltf", {5.0f, 0.003f, 10.0f}, 90.0f,
               {0.0f, 1.0f, 0.0f}, 0.006f);

  auto wallTexture = app.addTexture("textures/red_brick_diff_4k.jpg");
  auto floorTexture = app.addTexture("textures/brown_floor_tiles_diff_4k.jpg");
  auto ceilingTexture = app.addTexture("textures/plastered_wall_diff_4k.jpg");
  app.loadLevel("resources/level.tmx", wallTexture, floorTexture,
                ceilingTexture, 2);
  app.run();
}
