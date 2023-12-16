/**#include <iostream>
#include <utility>

int main()
{
    const int length = 10;
    int array[length] = { 20, 40, 30, 35, 10, 45, 55, 65, 75, 54 };

    for (int startIndex = 0; startIndex < length; startIndex++)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex; currentIndex < length; currentIndex++)
        {
            if (array[currentIndex] > array[smallestIndex])
            {
                smallestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }
    return 0;
}*/