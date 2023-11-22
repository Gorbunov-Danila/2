#include <iostream>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 1000000; i++) {
        sum += i;
        std::cout << "—умма чисел от 1 до " << i << ": " << sum << std::endl;
    }
    return 0;
}