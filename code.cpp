#include <iostream>
#include <string>

using namespace std;

void displayIntro() {
    cout << "Welcome to Anne's Adventure Game!\n";
    cout << "You find yourself at the entrance of a mysterious cave.\n";
}

void makeChoice(int choice) {
    if (choice == 1) {
        cout << "You enter the cave cautiously...\n";
        cout << "You discover a treasure chest! Congratulations!\n";
    } else if (choice == 2) {
        cout << "You decide not to enter the cave and head back.\n";
        cout << "A wise choice, you avoid potential danger.\n";
    } else {
        cout << "Invalid choice. Please choose 1 or 2.\n";
    }
}

int main() {
    displayIntro();

    cout << "What will you do?\n";
    cout << "1. Enter the cave\n";
    cout << "2. Turn back\n";

    int userChoice;
    cin >> userChoice;

    makeChoice(userChoice);

    return 0;
}
