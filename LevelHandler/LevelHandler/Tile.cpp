#include "Tile.h"

static const int width = 50, height = 50;
static int selectedID = 0;
static bool changeAllowed = true;
static sf::Texture *texture;
static TextureHandler *textureHandler;

Tile::Tile(sf::Vector2i position, int ID, int textureID, TextureHandler *textures)
: Entity(position, sf::IntRect(position.x, position.y, width, height)), mID(ID)
{
	textureHandler = textures;
	texture = textureHandler->GetTexture(textureID);
	mSprite.setTexture(*texture, true);
	mSprite.setTextureRect(sf::IntRect((ID % 3) * width, floor(ID / 3) * height, width, height));
}

Tile::~Tile()
{

}



void Tile::Render(sf::RenderWindow *window)
{
	mSprite.setPosition(mPosition.x, mPosition.y);
	window->draw(mSprite);
}
void Tile::Update(){

}


sf::Vector2i Tile::GetSize(){ return sf::Vector2i(width, height); }

void Tile::IDChangeInfo(int ID, bool allowed)
{
	selectedID = ID;
	changeAllowed = !allowed;
}


int Tile::GetID(){ return mID; }
