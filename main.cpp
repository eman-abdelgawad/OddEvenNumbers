#include <iostream>

void checkOddEven(int num)
{
    if (num % 2 == 0) {
        std::cout << num << " is even." << std::endl;
    }
    else {
        std::cout << num << " is odd." << std::endl;
    }
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    checkOddEven(num);
    return 0;
}