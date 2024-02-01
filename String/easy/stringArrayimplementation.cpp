#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Declare a vector of strings
    vector<string> stringsVector;

    // Store strings in the vector
    stringsVector.push_back("Hello");
    stringsVector.push_back("World");
    stringsVector.push_back("C++");
    stringsVector.push_back("Programming");
    stringsVector.push_back("Example");

    // Access and print strings from the vector
    for (const string& str : stringsVector) {
        cout << str << endl;
    }

    return 0;
}
/**
 * #include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare an array of strings
    string stringsArray[5];

    // Store strings in the array
    stringsArray[0] = "Hello";
    stringsArray[1] = "World";
    stringsArray[2] = "C++";
    stringsArray[3] = "Programming";
    stringsArray[4] = "Example";

    // Access and print strings from the array
    for (int i = 0; i < 5; ++i) {
        cout << stringsArray[i] << endl;
    }

    return 0;
}

 * 
 * 
 * 
 * 
 * 
*/