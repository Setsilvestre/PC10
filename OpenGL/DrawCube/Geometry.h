#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <glm/glm.hpp>			//OpenGL Mathematics 
#include "Vertex.h"
#include "GameElement.h"
#include <vector>

using namespace std;

class Geometry
{
	vector <GameElement> gameElements;
	Vertex **_data;
public:
	Geometry();
	~Geometry();
	void LoadScene();
	void CreateCube(int position);
};

