//TEMPLATE with function
//Templates allow us to tell compiler at compile time to generate the 
//function with the type specified. However we only write the code once
//No need for function overloading all types!!!
#include <iostream>
#include <string>
//using namespace std;

//T is a generic type that will be defined later
template <typename T>       //we could have more then 1 typename so the letter T is arbitray ex: ,typename X
T maxof(const T & a, const T & b) {
    return (a > b ? a : b);         //ternary operator
}

int main() {
    int a = 7;
    int b = 9;
                            //must define T,template parameter, it is set to int in this case
    std::cout << "max is " << maxof<int>(a, b) << std::endl;

    return 0;
}

//HOW IT WORKS COMPILER WILL GENERATE a specialization when it is called. Happens at compile time!
//Only the type specified in line 20 will be generated
int maxof(const int & a, const int & b) {
    return (a > b ? a : b);         //ternary operator
}
