#include "terrain.h"

const CL_Size Terrain::size(78,68);
using namespace std;

Terrain::Terrain(CL_GraphicContext gc, CL_Point location, std::string path) :
  location(location),sprite(gc,path)
{}

void Terrain::update(long ms)
{}

void Terrain::render(CL_GraphicContext gc,CL_Size offset)
{
  int position_x = location.x/2*(size.width+edge_length)+location.x%2*size.width-offset.width;
  int position_y = location.y*size.height+location.x%2*size.height/2-offset.height;
  sprite.draw(gc, position_x, position_y);
}
