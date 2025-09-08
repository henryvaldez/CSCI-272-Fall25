/*
 *      Author: MaksiKutrolli
 */

//This example demonstrates how to use functions to calculate the factorial of a number. 
//Using functions in this example promotes code reusability and modularity, allowing us to encapsulate specific tasks
//like calculating the factorial of a number

//This line includes the input/output stream library, which allows us to use functions like
//std::cin and std::cout for user input and output.
#include <iostream>

// Function to calculate the factorial of a number using iterative approach
// Factorial of a non-negative integer 'n' (denoted as n!) is the product
// of all positive integers less than or equal to 'n'.
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// This is the main function where the program execution starts.
int main() {
    int num;

    // Prompt user to input a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    // Calculate the factorial using the factorial function
    int result = factorial(num);

    // Display the result to the user
    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}
