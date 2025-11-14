#include <iostream>

//method to checkOddEven
void checkOddEven(int num)
{
	//check if num is even
    if (num % 2 == 0) {
        std::cout << num << " is even." << std::endl;
    }
	//else it is odd
    else {
        std::cout << num << " is odd." << std::endl;
    }
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    checkOddEven(num);
    std::cout << "Program finished." << std::endl;
    return 0;
}