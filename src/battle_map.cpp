#include "battle_map.h"

BattleMap::BattleMap(CL_GraphicContext gc) : offset(0,0)
{
  //predefine size of map to 40*40
  width = 40;
  height = 40;
  map = new Terrain**[width];
  for (unsigned i = 0;i<width;++i)
  {
    map[i] = new Terrain*[height];
    for (unsigned j = 0;j<height;++j)
    {
      map[i][j] = new Terrain(gc,CL_Point(i,j));
    }
  }
}

BattleMap::~BattleMap()
{
  for (unsigned i = 0;i<width;++i)
  {
    for (unsigned j = 0;j<height;++j)
    {
      delete map[i][j];
    }
    delete map[i];
  }
  delete map;
}

void BattleMap::update(long ms)
{}

void BattleMap::render(CL_GraphicContext gc)
{
  for (unsigned i = 0;i<width;++i)
  {
    for (unsigned j = 0;j<height;++j)
    {
      map[i][j]->render(gc,offset);
    }
  }
}
