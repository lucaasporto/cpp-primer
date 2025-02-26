#include <iostream>

int main()
{
    int sum = 0;

    //read until the end-of-file or an error
    for(int i = 0; std::cin >> i; sum += i)
        ;

    std::cout << "The sum is: " << sum << std::endl;
}