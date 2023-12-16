/*#include <iostream>
#include <utility>

int main()
{
	const int length(9);
	int array[length] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	while (true)
	{
		bool sorted = false;
		for (int startIndex = 0; startIndex < length; startIndex++)
		{

			for (int currentIndex = 0; currentIndex < length - 1 - startIndex; currentIndex++)
			{
				if (array[currentIndex] > array[currentIndex + 1])
				{
					std::swap(array[currentIndex], array[currentIndex + 1]);
					sorted = true;
				}
			}
			if (!sorted)
				break;
		}
		break;
	}

	return 0;
}*/