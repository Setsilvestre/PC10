#include "Geometry.h"
#define MAXVERTICES 36

Geometry::Geometry(){
	_data = 0;
}

Geometry::~Geometry(){
	if (_data != 0){
		delete[]_data;
	}
}

void Geometry::LoadScene(){
	fstream myfile;
	string line, x, y, z;
	GameElement myElement;
	myfile.open("Vertex.txt", ios::in);
	myfile >> line;
	cout << line << endl;
	int lenght;
	lenght = stoi(line);
	_data = new Vertex*[lenght];
	for (int i = 0; i < lenght; i++){
		_data[i] = new Vertex[MAXVERTICES+1];
	}
	for (int i = 0; i < lenght; i++){
		gameElements.push_back(myElement);
		for (int j = 0; j < 11; j++){
			if (j==0){
				myfile >> line;
				gameElements[i].idObject = stoi(line);
				if (gameElements[i].idObject == 0){
					CreateCube(i);
				}
				cout << "idObject: ";
				cout << gameElements[i].idObject << endl;
				system("pause");
			}
			if (j >=1 && j<=3){
				myfile >> x;
				myfile >> y;
				myfile >> z;
				gameElements[i].translate = glm::vec3(stof(x), stof(y), stof(z));
				cout << gameElements[i].translate.x << endl;
				cout << gameElements[i].translate.y << endl;
				cout << gameElements[i].translate.z << endl;
				system("pause");
				j = 3;
			}
			if (j ==4 ){
				myfile >> x;
				gameElements[i].angle = stof(x);
				cout << "Angle: ";
				cout << gameElements[i].angle << endl;
				system("pause");
			}
			if (j>=5 && j<=7 ){
				myfile >> x;
				myfile >> y;
				myfile >> z;
				gameElements[i].rotate = glm::vec3(stof(x), stof(y), stof(z));
				cout << gameElements[i].rotate.x << endl;
				cout << gameElements[i].rotate.y << endl;
				cout << gameElements[i].rotate.z << endl;
				system("pause");
				j = 7;
			}
			if (j >=8 && j<=10 ){
				myfile >> x;
				myfile >> y;
				myfile >> z;
				gameElements[i].scale = glm::vec3(stof(x), stof(y), stof(z));
				cout << gameElements[i].scale.x << endl;
				cout << gameElements[i].scale.y << endl;
				cout << gameElements[i].scale.z << endl;
				system("pause");
				j = 10;
			}
		}
	}
	myfile.close();
}

void Geometry::CreateCube(int position){
	_data[position][0].setPosition(-1.0f, -1.0f, -1.0f);
	_data[position][1].setPosition(-1.0f, -1.0f, 1.0f);
	_data[position][2].setPosition(-1.0f, 1.0f, 1.0f);
	_data[position][3].setPosition(1.0f, 1.0f, -1.0f);
	_data[position][4].setPosition(-1.0f, -1.0f, -1.0f);
	_data[position][5].setPosition(-1.0f, 1.0f, -1.0f);
	_data[position][6].setPosition(1.0f, -1.0f, 1.0f);
	_data[position][7].setPosition(-1.0f, -1.0f, -1.0f);
	_data[position][8].setPosition(1.0f, -1.0f, -1.0f);
	_data[position][9].setPosition(1.0f, 1.0f, -1.0f);
	_data[position][10].setPosition(1.0f, -1.0f, -1.0f);
	_data[position][11].setPosition(-1.0f, -1.0f, -1.0f);
	_data[position][12].setPosition(-1.0f, -1.0f, -1.0f);
	_data[position][13].setPosition(-1.0f, 1.0f, 1.0f);
	_data[position][14].setPosition(-1.0f, 1.0f, -1.0f);
	_data[position][15].setPosition(1.0f, -1.0f, 1.0f);
	_data[position][16].setPosition(-1.0f, -1.0f, 1.0f);
	_data[position][17].setPosition(-1.0f, -1.0f, -1.0f);
	_data[position][18].setPosition(-1.0f, 1.0f, 1.0f);
	_data[position][19].setPosition(-1.0f, -1.0f, 1.0f);
	_data[position][20].setPosition(1.0f, -1.0f, 1.0f);
	_data[position][21].setPosition(1.0f, 1.0f, 1.0f);
	_data[position][22].setPosition(1.0f, -1.0f, -1.0f);
	_data[position][23].setPosition(1.0f, 1.0f, -1.0f);
	_data[position][24].setPosition(1.0f, -1.0f, -1.0f);
	_data[position][25].setPosition(1.0f, 1.0f, 1.0f);
	_data[position][26].setPosition(1.0f, -1.0f, 1.0f);
	_data[position][27].setPosition(1.0f, 1.0f, 1.0f);
	_data[position][28].setPosition(1.0f, 1.0f, -1.0f);
	_data[position][29].setPosition(-1.0f, 1.0f, -1.0f);
	_data[position][30].setPosition(1.0f, 1.0f, 1.0f);
	_data[position][31].setPosition(-1.0f, 1.0f, -1.0f);
	_data[position][32].setPosition(-1.0f, 1.0f, 1.0f);
	_data[position][33].setPosition(1.0f, 1.0f, 1.0f);
	_data[position][34].setPosition(-1.0f, 1.0f, 1.0f);
	_data[position][35].setPosition(1.0f, -1.0f, 1.0f);
}