#ifndef INCLUDED_LEVEL
#define INCLUDED_LEVEL
#include <string>
using namespace std;

#include "Tile.h"

typedef vector<Tile*> TileRow;
typedef vector<TileRow> TileLayer;

class Level{
public:
	Level(string filename);
	void update();
	void render(sf::RenderWindow *window);
private:
	void generateLevel(string filename);
	string mFile;

	TileRow mTileRow;
	TileLayer mBottomTileLayer;

	int  mMapSizeX, mMapSizeY;

};



#endif