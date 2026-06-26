// wap to create quiz application 
#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "***** Welcome to the Quiz *****\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. Python\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 4
    cout << "\n4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 5
    cout << "\n5. 2 + 5 = ?\n";
    cout << "1. 6\n2. 7\n3. 8\n4. 9\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nYour Score = " << score << " out of 5" << endl;

    if (score == 5)
        cout << "Excellent!" << endl;
    else if (score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}