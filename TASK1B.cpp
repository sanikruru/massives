#include <iostream>
#include <array>

int Random(int min, int max)
{
    return min + rand() % (max - min);
}

int main()
{
    std :: array <int,10> arr;

    for(int i = 0; i < 10 ; i++)
    {
        arr[i] = Random(10,20);
        std :: cout << arr[i] << std :: endl;
    }
    return 0;
}
