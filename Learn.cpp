#include <iostream>
#include <utility>

int main()
{
	const int numRow = 10;
	const int numCol = 10;
	int products[numRow][numCol] = { 0 };

	for (int row = 0; row < numRow; ++row)
	{
		for (int col = 0; col < numCol; ++col)
		{
			products[row][col] = row * col;
		}
	}


	for (int row = 1; row < numRow; ++row)
	{
		for (int col = 1; col < numCol; ++col)
		{
			std::cout << products[row][col] << "\t";
		}

		std::cout << '\n';
	}
	return 0;
}