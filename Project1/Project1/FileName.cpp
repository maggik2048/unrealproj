#include <iostream>
#include <string>

// Dummy application to practice merge conflict resolution

int calculateSum(int a, int b) {

    // Version from feature branch
    std::cout << "Adding numbers with extra logging" << std::endl;
    int result = a + b;
    std::cout << "Result calculated successfully" << std::endl;
    return result;

}

int main() {

    std::string user = "Alice";
    std::cout << "Hello, " << user << "!" << std::endl;


    int x = 3;
    int y = 4;

    int sum = calculateSum(x, y);
    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}