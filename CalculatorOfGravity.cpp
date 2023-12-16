/*#include <iostream>
#include "io.h"

int getHeight()
{
	std::cout << "Enter a height: ";
	int height;
	std::cin >> height;
	return height;
}


void writeHeight(int height)
{
	for (int i = 0; true; i++)
	{
		double solveheight = height - constants::gravity * ((i * i) / 2.0);
		if (i == 0)
			std::cout << "At " << i << " seconds, ball is on the height: " << height << std::endl;
		else if (solveheight < 0) {
			std::cout << "At " << i << " seconds, ball is on the ground" << std::endl;
			break;
		}
		else
			std::cout << "At " << i << " seconds, ball is on the height: " << solveheight << std::endl;
	}
}

int main()
{
	int height = getHeight();
	writeHeight(height);
}*/