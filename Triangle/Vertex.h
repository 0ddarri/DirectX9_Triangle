#pragma once

struct Vertex
{
	Vertex() {}

	Vertex(float x, float y, float z, float r, DWORD c)
	{
		_x = x;	 _y = y;  _z = z; rhw = r;
		color = c;
	}

	float _x, _y, _z, rhw;
	DWORD color;
};
