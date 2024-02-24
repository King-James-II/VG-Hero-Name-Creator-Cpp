#include <iostream>
#include <string>
#include <regex>
using namespace std;

// Function to validate input string
bool validateInput(const string& input) {
    regex pattern("[a-zA-Z]+"); // Regular expression pattern to match letters only
    return regex_match(input, pattern);
}

// Function to swap the first and last characters of a string
string swapFirstLast(const string& input) {
    if (input.length() < 2) {
        return input; // If string length is less than 2, no swapping needed
    }
    return input.back() + input.substr(1, input.length() - 2) + input.front();
}

int main() {
    cout << "=== HERO'S NAME CREATION ===" << endl;
    cout << "Welcome to the Hero's Quest! Please enter the name of your heroic character:" << endl;

    string heroName;
    getline(cin, heroName);

    // Validate input
    while (!validateInput(heroName)) {
        cout << "Invalid input. Your hero's name should contain only alphabetic characters. Please enter again: ";
        getline(cin, heroName);
    }

    // Transform hero's name
    string transformedName = swapFirstLast(heroName);

    cout << "\n=== HERO'S QUEST BEGINS ===" << endl;
    cout << "Behold, " << heroName << " the Mighty! Your adventure begins now!" << endl;
    cout << "Your journey awaits, brave " << transformedName << "! May victory be yours!\n" << endl;

    return 0;
}
