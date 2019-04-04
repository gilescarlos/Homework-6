// A positive integer greater than 1 is said to be prime if it has no divisors other than 1
// and itself. A positive integer greater than 1 is composite if it is not a prime. Write
// a program that asks the user to enter an integer greater than 1, then displays all of the
// prime numbers that are less than or equal to the number entered. The program should work
// as follows:
//      Once the user has entered a number, the program should populate a vector with all of
//          the integers from 2, up through the value entered.
//      The program should then use the STL’s for_each function to step through the vector.
//          The for_each function should pass each element to a function object that displays the
//          element if it is a prime number.

#include <iostream>
#include <vector>

void isPrime(int);

int main() {
    int userInput;

    std::cout << "Enter an integer greater than 1: ";
    std::cin >> userInput;

    std::vector<int> integerVector(2, userInput);

    std::cout << "\nElements of Vector Before Extracting Prime Numbers" << std::endl;
    for (int i = 2; i <= userInput; i++) {
        integerVector.push_back(i);
        std::cout << integerVector[i] << " ";
    }

    std::cout << "\n\nElements of Vector After Extracting Prime Numbers" << std::endl;
    std::for_each(integerVector.begin(), integerVector.end(), isPrime);
    return 0;
}

void isPrime(int aNumber) {
    int flag = 1;

    for (int i = 2; i <=  (aNumber / 2); i++) {
        // If a number is divisible by any number between 2 and n/2, it is not prime
        if (aNumber % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        std::cout << aNumber << " ";
}



