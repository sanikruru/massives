#include <iostream>
#include <array>

int main()
{
    std :: array <int,10> arr;

    for(int i = 0; i < 10 ; i++)
    {
        arr[i] = rand() % 20;
    }
    for(int i = 0; i< 10; i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr[i] += 3;
        }
        else
        {
            arr[i] *= 2;
        }
        std :: cout << arr[i] << std :: endl;
    }
    return 0;
}
