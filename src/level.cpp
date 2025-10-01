#include "level.h"
#include <tmxlite/Map.hpp>

void Level::loadLevel(const char *path) {
  tmx::Map map;
  if (map.load(path)) {
    
  }
}
