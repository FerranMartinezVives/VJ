#ifndef _SCENE_INCLUDE
#define _SCENE_INCLUDE


#include <glm/glm.hpp>
#include "ShaderProgram.h"
#include "TileMap.h"
#include "Player.h"


// Scene contains all the entities of our game.
// It is responsible for updating and render them.


class Scene
{

public:
	Scene();
	~Scene();

	void init();
	void update(int deltaTime);
	void render();

private:
	void initShaders();

private:
	TileMap *map;
	Player *player;
	ShaderProgram texProgram;
	float currentTime;
	glm::vec2 currentMin;
	glm::vec2 currentMax;
	glm::mat4 projection;
	glm::vec2 cameraPos;
	glm::vec2 cameraSize;
	float cameraScrollSpeed;
};


#endif // _SCENE_INCLUDE

