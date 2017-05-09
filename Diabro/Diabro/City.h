#ifndef CITY_H_
#define CITY_H_
#include <vector>

struct Coordinate {
	int x;
	int z;
	Coordinate(int pX, int pZ) : x(pX), z(pZ) {	}
};

enum RoomType
{
	EmptyRT,
	CityRT,
	HideoutRT,
	HubRT,
	sizeRT
};

class City
{
public:
	Coordinate position;
	RoomType typeFlag;
	int width;
	int depth;
	int id;

	std::vector<Coordinate> connections;

	City(int pX, int pZ, int pWidth, int pDepth, int pId);
	~City();

	Coordinate getCenterTile();
	Coordinate getRandomTile();
private:
	void setRndType();

};

#endif