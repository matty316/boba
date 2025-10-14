#ifdef OPEGL
#include <opegl.hpp>
#else
#include "bulkin.h"
#include "level.h"
#include <glm/glm.hpp>
#endif

int main() {
#ifdef OPEGL
  OpeGL app;
#else
  Bulkin app;
  auto wallTexture = app.addTexture("textures/red_brick_diff_4k.jpg");
  auto boxTexture = app.addTexture("textures/brown_floor_tiles_diff_4k.jpg");
  auto ceilingTexture = app.addTexture("textures/plastered_wall_diff_4k.jpg");
  BulkinLevel level("resources/level.tmx", wallTexture, boxTexture,
                    ceilingTexture, 2);
  level.renderLevel(app);
  app.addModel("resources/counter_top/scene.gltf", {5.0f, 0.003f, 10.0f}, 90.0f,
               {0.0f, 1.0f, 0.0f}, 0.006f);

#endif

  app.run();
}
