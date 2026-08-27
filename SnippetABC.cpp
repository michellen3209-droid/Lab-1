/* Snippet A */
#include <iostream>

using namespace std;

int snippetB() {
    cout << "Welcome to C++ Programming!" << endl;
    return 0;
}

/* Snippet B */
#include <iostream>
using namespace std;

int secondsnippet() {
    int firstScore = 95;
    double classAverage = 88.5;
    const double PI = 3.14159;

    // PI = 3.14; // This will cause a compile error since PI is const
    char studentGrade = 'A';

    cout << "First Score: " << firstScore << endl;
    return 0;
}

/* Snippet C */
#include <iostream>

int main() {
    bool isPassed = 1;
    int value = 12.85; 
    
    std::cout << "Is Passed: " << isPassed << std::endl;
    std::cout << "Total Value: " << value << std::endl;
    
    return 0;
}