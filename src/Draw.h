#ifndef DRAW_H_
#define DRAW_H_

#include "iostream"

using namespace std;


class IDrawImplementor
{
public:
	IDrawImplementor()=default;
	~IDrawImplementor()=default;

	virtual void drawSquare() = 0;	
};

class DrawSquare_Star :public IDrawImplementor
{
public:
	DrawSquare_Star()=default;
	~DrawSquare_Star()=default;

	void drawSquare()
	{
		cout << "**" << endl;
		cout << "**" << endl;
	}	
};

class DrawSquare_Sharp :public IDrawImplementor
{
public:
	DrawSquare_Sharp()=default;
	~DrawSquare_Sharp()=default;

	void drawSquare()
	{
		cout << "##" << endl;
		cout << "##" << endl;
	}
	
};

#endif