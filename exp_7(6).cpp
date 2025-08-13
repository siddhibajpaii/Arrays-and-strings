#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);  

    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);  

    std::string result = str1 + " " + str2;  
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}

//Output:
//Enter the first string: siddhi
//Enter the second string: ziddi
//Concatenated string: siddhi ziddi
