#include <iostream>
#include <string>

int main() {
    // 1. Using std::string default constructor (empty string)
    std::string str1;
    std::cout << "Enter a string for str1 (empty string): ";
    std::getline(std::cin, str1);  // Take input into str1
    std::cout << "str1: \"" << str1 << "\"" << std::endl;

    // 2. Using std::string with a C-string literal
    std::string str2;
    std::cout << "Enter a string for str2: ";
    std::getline(std::cin, str2);  // Take input into str2
    std::cout << "str2: " << str2 << std::endl;

    // 3. Using std::string constructor with a C-string
    std::string str3;
    std::cout << "Enter a string for str3: ";
    std::getline(std::cin, str3);  // Take input into str3
    std::cout << "str3: " << str3 << std::endl;

    // 4. Using std::string constructor with repeated characters
    int repeatCount;
    std::cout << "Enter a number of repetitions for '*' in str4: ";
    std::cin >> repeatCount;
    std::cin.ignore();  // Ignore the newline character left by std::cin
    std::string str4(repeatCount, '*');
    std::cout << "str4: " << str4 << std::endl;

    // 5. Using std::string copy constructor
    std::string str5(str2);
    std::cout << "str5 (copy of str2): " << str5 << std::endl;

    // 6. C-style string: char array initialized with string literal
    char cstr1[100];
    std::cout << "Enter a string for cstr1 (C-style): ";
    std::cin.getline(cstr1, 100);  // Take input into cstr1
    std::cout << "cstr1: " << cstr1 << std::endl;

    // 7. C-style string: char array initialized character by character
    char cstr2[100];
    std::cout << "Enter a string for cstr2 (character by character): ";
    std::cin.getline(cstr2, 100);  // Take input into cstr2
    std::cout << "cstr2: " << cstr2 << std::endl;

    // 8. Pointer to C-string literal
    const char* cstr3 = "Pointer to C-string literal";
    std::cout << "cstr3 (pointer to C-string): " << cstr3 << std::endl;

    return 0;
}

//Output:
//Enter a string for str1 (empty string): siddhi
//str1: "siddhi"
//Enter a string for str2: ziddi
//str2: ziddi
//Enter a string for str3: taylor
//str3: taylor
//Enter a number of repetitions for '*' in str4: 6
//str4: ******
//str5 (copy of str2): ziddi
//Enter a string for cstr1 (C-style): belly
//cstr1: belly
//Enter a string for cstr2 (character by character): conrad 
//cstr2: conrad
//cstr3 (pointer to C-string): Pointer to C-string literal
