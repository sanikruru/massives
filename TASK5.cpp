#include <iostream>
#include <array>

int main()
{
    std :: array <int,10> arr;
    int max=0;
    int imax=0;
    int imin=0;
    int min=21;
    int i = 0;

    for( i = 0; i < 10 ; i++)
    {
        arr[i] = rand() % 20;
    }

    for( i = 0; i < 10 ; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            imax = i;
        }
    }
    std :: cout << "element max:" << max << "number:" << imax << std :: endl;
    for( i = 0; i < 10 ; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            imin = i;
        }

    }
    std :: cout << "element min:" << min << "number:" << imin << std :: endl;
    return 0;
}
