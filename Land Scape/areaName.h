#ifndef AREA_NAME_H
#define AREA_NAME_H

#include "./tileGroup.h"

class AreaName : public TileGroup
{
	public:
		AreaName(string name, vector<LandTile *> areaTiles) : name(name), areaTiles(areaTiles) {}

	private:
		string name;
		vector<LandTile *> areaTiles;
};

#endif
