Aim: To study and implement Arrays and Strings in C++

#Program 1: Printing Array elements 
This program initializes an integer array with predefined values {10, 20, 30, 40, 50}. It calculates the size of the array and then prints each element using a for loop. The output displays all the array elements in a single line.

Algorithm:

- Step- 1: Start
- Step- 2: Declare and initialize the array with fixed elements.
- Step- 3: Calculate the size of the array using:
- size = sizeof(array) / sizeof(array[0])
- Step- 4: Use a loop from i = 0 to i < size to:
- Step- 5: Print each element array[i]
- Step- 6: End the loop.
- Step- 7: End

#Program 2: To find a given number in an array
This program searches for a number (entered by the user) in a predefined array using linear search. It compares each element of the array with the entered number and prints the index if found. If not found, it informs the user accordingly.

Algorithm:

Step- 1: Start
Step- 2: Declare and initialize an array.
Step- 3: Calculate the size of the array.
Step- 4: Prompt the user to enter a number (key) to search.
Step- 5: Set a flag variable found = false.
Step- 6: Use a loop from i = 0 to i < size:
Step- 7: If arr[i] == key:
Print the index i
Step- 8: Set found = true and break the loop.
Step- 9: After the loop, if found == false, print that
Step- 10: End

#Program 3: To find the sum and average of Array elements 
This program calculates the sum and average of the elements in a predefined array {10, 20, 30, 40, 50}. It uses a for loop to sum all the elements, then divides the total by the number of elements to find the average. Both the sum and average are displayed as output.

Algorithm:

- Step- 1: Start
- Step- 2: Declare and initialize the array with elements.
- Step- 3: Calculate the number of elements in the array:
- size = sizeof(arr) / sizeof(arr[0])
- Step- 4: Initialize sum = 0
- Step- 5: Loop from i = 0 to i < size:
- Step- 6: Add each element to sum
- Step- 1: After the loop, calculate the average:
- average = sum / size (typecast sum to float to avoid integer division)
- Step- 7: Display the sum and average
- Step- 8: End

#Program 4: To find the minimum and maximum in an Array
This program takes the array size and elements as input from the user. It then scans through the array to find the maximum and minimum values using a for loop. The final output displays both the highest and lowest values from the array.

Algorithm:

- Step- 1: Start
- Step- 2: Prompt the user to enter the size of the array.
- Step- 3: Declare an array of the given size.
- Step- 4: Use a loop to take input for all elements of the array.
- Step- 5: Initialize two variables:
- max = arr[0]
- min = arr[0]
- Step- 6: Loop from i = 1 to i < size:
- Step- 7: If arr[i] > max, set max = arr[i]
- Step- 8: If arr[i] < min, set min = arr[i]
- Step- 9: Print the values of max and min.
- Step- 10: End

#Program 5: Different ways to declare and initialize a string
This program firstly contains std::string str1;: This line declares a string object str1 using the default constructor. Initially, str1 is empty because no value is assigned when the object is created.Then it have std::getline(std::cin, str1);: This reads a full line of text from the user input (including spaces) and stores it in str1. std::cin reads input, and std::getline() is used to capture the entire line, even if it contains spaces and finally displays the value entered by the user for str1.

Algorithm:

- Step- 1: Declare an empty string (str1) using std::string:
- Step- 2: Declare str1 as an empty string.
- Step- 3: Prompt user to enter a string.
- Step- 4: Use std::getline() to take input and display str1.
- Step- 5: Declare and initialize a string (str2) with user input:
- Step- 6: Declare str2 as a std::string.
- Step- 7: Prompt user to enter a string for str2.
- Step- 8: Use std::getline() to get input and display str2.
- Step- 9: Declare and initialize another string (str3) with user input:
- Step- 10: Declare str3 as a std::string.
- Step- 11: Prompt user to enter a string for str3.
- Step- 12: Use std::getline() to take input and display str3.
- Step- 13: Create a string (str4) with repeated characters (*):
- Step- 14: Use std::string str4(repeatCount, '*') to create the string and display it.
- Step- 15: Create a copy of str2 into str5:
- Step- 16: Declare str5 as a copy of str2.
- Step- 17: Display str5.
- Step- 18: Declare and initialize a C-style string (cstr1) using std::cin.getline():
- Step- 19: Declare cstr1 as a character array of size 100.
- Step- 20: Prompt user for input and store it using std::cin.getline().
- Step- 21: Display cstr1.
- Step- 22: Declare and initialize another C-style string (cstr2) using std::cin.getline():
- Step- 23: Declare cstr2 as a character array of size 100.
- Step- 24: Prompt user for input and store it using std::cin.getline().
- Step- 25: Display cstr2.
- Step- 26: Initialize a constant pointer to a C-string literal (cstr3):
- Step- 27: Declare cstr3 as a pointer to a constant C-string.
- Step- 28: Display cstr3
- Step- 29: End.

#Program 6: Concatenation of strings
This program demonstrates string concatenation in C++. It prompts the user to input two strings, and then it concatenates these two strings with a space between them. The concatenated result is displayed to the user. It declares two variables str1 and str2 of type std::string to store the user input. Then, the std::getline() function is used to take input from the user for both str1 and str2. The advantage of std::getline() is that it allows the input to include spaces, unlike std::cin which stops at the first whitespace.
The + operator is used to concatenate the strings str1 and str2, with a space " " in between them. The result is stored in the result string. Finally, the program prints the concatenated string using std::cout.

Algorithm:

- Step- 1: Declare two string variables:
str1, str2, and result.
- Step- 2: Take user input:
- Step- 3: Display "Enter the first string: ".
- Step- 4: Use std::getline(std::cin, str1) to read the first string.
- Step- 5: Display "Enter the second string: ".
- Step- 6: Use std::getline(std::cin, str2) to read the second string.
- Step- 7: Concatenate the strings:
- Step- 8: Concatenate str1 and str2 with a space in between and store the result in result.
- Step- 9: result = str1 + " " + str2;
- Step- 10: Display the concatenated string:
- Step- 11: Output the concatenated string using std::cout.
- Step- 12: End.

#Program 7: Printing strings in reverse 
This program takes a string input from the user and prints the reversed version of that string. It uses the std::string class to store the input and reads the entire line of input using std::getline(std::cin, input) to ensure spaces are included. The function std::reverse from the <algorithm> header is used to reverse the string in place by swapping characters from the beginning to the end. Finally, the reversed string is displayed using std::cout. This approach is efficient and simple because it utilizes the built-in std::reverse algorithm instead of manually reversing the string.

Algorithm:

- Step- 1: Start
- Step- 2: Declare a variable to store the input string:
- Step- 3: Create a variable input of type std::string to hold the string entered by the user.
- Step- 4: Prompt the user for input:
- Step- 5: Display a message asking the user to enter a string.
- Step- 6: Read the input string:
- Step- 7: Use std::getline(std::cin, input) to read the entire line of text typed by the user.
- Step- 8: This allows the input to contain spaces and stores it in the variable input.
- Step- 9: Reverse the string:
- Step- 10: Use the std::reverse function from the <algorithm> library.
- Step- 11: Pass two iterators: input.begin() (pointing to the first character) and input.end() (pointing past the last character).
- Step- 12: The std::reverse function will swap the characters in the string, effectively reversing it in place.
- Step- 13: Display the reversed string:
- Step- 14: Print the message "Reversed string: " followed by the reversed content of input.
- Step- 15: End. 

#Program 8: Program for palindrome checking
This program checks whether a given string is a palindrome — meaning the string reads the same forward and backward, ignoring case and spaces. It accepts input from the user as a full line (including spaces) using std::getline. It converts the entire input string to lowercase using std::transform and the standard library function ::tolower. This makes the palindrome check case-insensitive. It removes all spaces from the input using std::remove and erase, allowing phrases with spaces (e.g., "A man a plan a canal Panama") to be checked correctly. It creates a copy of the cleaned input string named reversed and reverses it using std::reverse. It then compares the cleaned input string to its reversed version. If both are equal, the program outputs that the string is a palindrome; otherwise, it outputs that it is not.

Algorithm:

- Step- 1: Start
- Step- 2: Declare two string variables:
- input for storing the user input.
- Step- 3: Reversed for storing the reversed version of the processed input.
- Step- 4: Prompt the user to enter a string.
- Step- 5: Read the full input line (including spaces) into the input string.
- Step- 6: Convert all characters of input to lowercase:
- Step- 7: Use std::transform with ::tolower to convert each character.
- Step- 8: Remove all spaces from the string:
- Step- 9: Use std::remove to move spaces to the end.
- Step- 10: Use erase to delete those trailing spaces.
- Step- 11: Copy the processed string into reversed.
- Step- 12: Reverse the string reversed using std::reverse.
- Step- 13: Compare input and reversed:
- Step- 14: If they are equal, the string is a palindrome.
- Otherwise, it is not.
- Step- 15: Display the result to the user.
- Step- 16: End.




