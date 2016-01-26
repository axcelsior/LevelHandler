#ifndef INCLUDED_LEVELMANAGER
#define INCLUDED_LEVELMANAGER
#include <vector>
#include "Level.h"
class LevelManager{

public:
	LevelManager();
	void addLevel(Level level);
	void nextLevel();
	void changeLevel(int stage);
	Level getLevel();

	void clearLevels();

	void update();
	void render(sf::RenderWindow *window);

private:
	std::vector<Level> mLevels;
	int mCurrentLevel;
};
#endif