#include "LevelManager.h"
#include <iostream>

LevelManager::LevelManager():
	mCurrentLevel(0){

}
void LevelManager::addLevel(Level level){
	mLevels.push_back(level);
}
void LevelManager::clearLevels(){
	mLevels.clear();
}


/*     SKALL RETURNERA PEKARE TILL DEN AKTUELLA LEVELN // ÅTKOMST ÅT ANDRA KLASSER
Level LevelManager::getLevel(){
	Level *level = mLevels[mCurrentLevel];
	return level;
}
*/

void LevelManager::nextLevel(){
	if (mCurrentLevel != mLevels.size()-1){
		std::cout << "Changing to next level" << std::endl;
		mCurrentLevel += 1;
	}
	else {
		std::cout << "Can't change to next level because there is none." << std::endl;
	}
}
void LevelManager::changeLevel(int i){
	if (i < mLevels.size()){
		std::cout << "Changing to level " << i << std::endl;
		mCurrentLevel = i;
	}
	else {
		std::cout << "That level does not exist!" << std::endl;
	}
}

void LevelManager::render(sf::RenderWindow *window){
	mLevels[mCurrentLevel].render(window);
	//mLevels[mCurrentLevel].update();
}
