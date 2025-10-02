#include "bulkin.h"
#include "level.h"
#include "quad.h"
#include <glm/glm.hpp>

int main() {
  Bulkin app;
  Level level("resources/level.tmx");
  level.renderLevel(app);
  app.run();
}
