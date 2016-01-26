#ifndef TILE_H
#define TILE_H

#include "Entity.h"

class Tile : public Entity
{
public:
	Tile(sf::Vector2i position, int ID, int textureID, TextureHandler *textures);
	~Tile();
	void Render(sf::RenderWindow *mainWindow);
	void Update();
	static sf::Vector2i GetSize();
	static void IDChangeInfo(int ID, bool allowed);
	int GetID();
private:
	int mID = 0;
};

#endif