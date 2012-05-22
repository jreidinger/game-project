#include <ClanLib/core.h>
#include <ClanLib/display.h>

#include "terrain.h"

class BattleMap
{
  public:
    BattleMap(CL_GraphicContext gc);
    ~BattleMap();
    void update(long ms);
    void render(CL_GraphicContext gc);
  private:
    Terrain ***map;
    CL_Size offset;
    unsigned width;
    unsigned height;
};
