#include<iostream>

template < typename T >
void input(T array[8])
{
    std::cout << "Fill the array (8):";
    for (int i = 0; i < 8; ++i)
    {
        std::cin >> array[i];
    }
}

template < typename T1>
void arithmetic(T1 array[8])
{
    T1 sum=0;
    for (int i = 0; i < 8; ++i)
    {
        sum+=array[i];
    }
    std::cout<<"arithmetic mean : "<<sum / 8<<std::endl;
}

int main()
{
    double array[8];
    input(array);
    arithmetic(array);
}
