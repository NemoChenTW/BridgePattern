#include "Shape.h"


int main()
{
	DrawSquare_Star 	star;
	DrawSquare_Sharp 	shape;

	Square square_star(&star);
	Square square_share(&shape);

	square_star.draw();
	square_share.draw();

	return 0;
}