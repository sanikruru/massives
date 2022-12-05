//сгенерировать массив со случайными числами в диапазоне [0;10]
#include <iostream>
#include <array>

int main()
{
	srand(0);
	std::array<int, 100>numbers;
	for (int n = 0; n < 100; n++)
		numbers[n] = rand() % 11;
	for (int n = 0; n < 1000; n++)
		std::cout << numbers[n] << std::endl;
}
