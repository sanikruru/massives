#include <iostream>
#include <array>

int main()
{
    std :: array <int,10> arr;
    int sum_for_5 = 0;
    int sum_for_7 = 0;
    int sum_for_3 = 0;

    for(int i = 0; i < 10 ; i++)
    {
        arr[i] = rand() % 10;
    }

    for(int i=0;i<10;i++){
        if(arr[i]>5)
        {
            sum_for_5 += arr[i];
        }
    }
    std :: cout << ">5 :" << sum_for_5 << std :: endl;

    for(int i=0;i<10;i++){
        if(arr[i]<7)
        {
            sum_for_7 += arr[i];
        }
    }
    std :: cout << "<7 :" << sum_for_7 << std :: endl;

    for(int i=0;i<10;i++){
        if(arr[i]>3)
        {
            sum_for_3 += arr[i];
        }
    }
    std :: cout << ">3 :" <<sum_for_3 << std :: endl;
    return 0;
}
