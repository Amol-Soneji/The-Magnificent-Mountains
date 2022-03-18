#ifndef TILE_GROUP_H
#define TILE_GROUP_H

#include <vector>
#include <./landTile.h>

using std::vector;

class TileGroup
{
	public:
		TileGroup() {}
		TileGroup(vector<LandTile *> groupTiles, int groupID) : groupTiles(groupTiles), groupID(groupID) {}
		vector<LandTile *> getTilesInGroup() const;
		int getGroupID() const;
	private:
		vector<LandTile *> groupTiles{};
		int groupID;
};
#endif