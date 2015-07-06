#ifndef SHAPRE_H_
#define SHAPRE_H_

#include "Draw.h"

class Shape
{
public:
	~Shape()=default;

protected:
	IDrawImplementor *drawImplementor;

	Shape(IDrawImplementor *drawImplementor)
	{
	  this->drawImplementor = drawImplementor;
	}
public:
	virtual void draw() = 0;
};


class Square :public Shape
{
public:
	~Square()=default;

	Square(IDrawImplementor *drawImplementor)
	:Shape(drawImplementor)
	{

	}

	void draw()
	{
		drawImplementor->drawSquare();
	}
};


#endif

