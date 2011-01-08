/* Copyright 2010 Ilkka Halila
This file is part of Goblin Camp.

Goblin Camp is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Goblin Camp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License 
along with Goblin Camp. If not, see <http://www.gnu.org/licenses/>.*/
#pragma once

#include <boost/filesystem.hpp>
#include <SDL.h>

/*******************
// Tileset
// Encapsulates a texture containing equally-sized
// tiles, allowing them to be drawn by an position value
/******************/
class Tileset
{
public:
	Tileset(boost::filesystem::path path, int tileWidth, int tileHeight);
	~Tileset();

	int Count() const;
	void DrawTile(int tile, SDL_Surface * dst, SDL_Rect * dstRect) const;

private:
	int tileWidth, tileHeight;
	int tileXDim, tileYDim;
	int tileCount;
	SDL_Surface *tiles;
};