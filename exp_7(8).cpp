#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string input, reversed;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());

    reversed = input; 
    std::reverse(reversed.begin(), reversed.end());

    if (input == reversed) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is NOT a palindrome." << std::endl;
    }

    return 0;
}

//Output:
//Enter a string: siddhi
//The string is NOT a palindrome.
