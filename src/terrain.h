#pragma once
#include <string>
#include <ClanLib/core.h>
#include <ClanLib/display.h>

class Terrain
{
  public:
    Terrain(CL_GraphicContext gc, CL_Point location, std::string path = "res/terrain.png");
    void update(long ms);
    void render(CL_GraphicContext gc,CL_Size offset);

  private:
    const static CL_Size size;
    const static int edge_length = 40;
    CL_Point location;
	  CL_Sprite sprite;
};
