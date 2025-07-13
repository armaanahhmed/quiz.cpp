// This is the C++ Code.

#include <iostream>
#include <cctype>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

int score = 0;

void waitTime(int t){
    this_thread::sleep_for(seconds(t));
};

char x1;
char x2;
char x3;
char x4;
char x5;

int main(){

    cout << "\nWelcome To The Quiz!";
    waitTime(2);
    cout << "\nYou will be asked 5 Questions and Will Be Scored." << endl;
    waitTime(2);
    auto start = high_resolution_clock::now();
    for (volatile int i = 0; i < 100000000; ++i);

    // 1
    while (true){
    cout << "\n1) What is A CPU?" << endl << "\nA) Central Process Unit\nB) Central Processing Unit\nC) Computer Processing Unit\nD) None of these." << endl;
    waitTime(2);
    cout << "\nChoose The Correct Option: ";
    string i;
    cin >> i;
    waitTime(1);

    if (i.length() != 1 || !isalpha(i[0])){
        cout << "\nInvalid Option!" <<endl;
        waitTime(1);
        continue;
    }

    x1 = toupper(i[0]);
    waitTime(1);

    if (x1 == 'B'){
        cout << "\nCorrect!";
        score ++;
        break;
    }
    else if (x1 == 'A' || x1 == 'C' || x1 == 'D'){
        cout << "\nIncorrect!";
        waitTime(1);
        cout << "\nThe Correct Answer Was 'B'." << endl;
        break;
    }

}

    waitTime(1);
    // 2

    while (true){
    cout << "\n2) Which Device is used to Input Text into a Computer?" << endl << "\nA) Keyboard\nB) Mouse\nC) Printer\nD) Speaker" << endl;
    waitTime(2);
    cout << "\nChoose The Correct Option: ";
    string i;
    cin >> i;
    waitTime(1);

    if (i.length() != 1 || !isalpha(i[0])){
        cout << "\nInvalid Option!" <<endl;
        waitTime(1);
        continue;
    }

    x2 = toupper(i[0]);
    waitTime(1);

    if (x2 == 'A'){
        cout << "\nCorrect!";
        score ++;
        break;
    }
    else if (x2 == 'B' || x2 == 'C' || x2 == 'D'){
        cout << "\nIncorrect!";
        waitTime(1);
        cout << "\nThe Correct Answer Was 'A'.";
        break;
    }
}

    waitTime(1);
    // 3

    while(true){
    cout << "\n3) Which Component Connects The Processor To The Hardware of a Computer?" << endl << "\nA) System Bus\nB) CPU\nC) ALU\nD) GPU" << endl;
    waitTime(2);
    cout << "\nChoose The Correct Option: ";
    string i;
    cin >> i;
    waitTime(1);

    if (i.length() != 1 || !isalpha(i[0])){
        cout << "\nInvalid Option!" <<endl;
        waitTime(1);
        continue;
    }

    x3 = toupper(i[0]);
    waitTime(1);

    if (x3 == 'A'){
        cout << "\nCorrect!";
        score ++;
        break;
    }
    else if (x3 == 'B' || x3 == 'C' || x3 == 'D'){
        cout << "\nIncorrect!";
        waitTime(1);
        cout << "\nThe Correct Answer Was 'A'.";
        break;
    }
}

    waitTime(1);
    // 4

    while(true){
    cout << "\n4) Which of the following is an operating system?" << endl << "\nA) Google\nB) Microsoft Office\nC) Windows\nD) Intel." << endl;
    waitTime(2);
    cout << "\nChoose The Correct Option: ";
    string i;
    cin >> i;
    waitTime(1);

    if (i.length() != 1 || !isalpha(i[0])){
        cout << "\nInvalid Option!" <<endl;
        waitTime(1);
        continue;
    }

    x4 = toupper(i[0]);
    waitTime(1);

    if (x4 == 'C'){
        cout << "\nCorrect!";
        score ++;
        break;
    }
    else if (x1 == 'A' || x1 == 'B' || x1 == 'D'){
        cout << "\nIncorrect!";
        waitTime(1);
        cout << "\nThe Correct Answer Was 'C'.";
        break;
    }
}

    waitTime(1);
    // 5

    while (true){
    cout << "\n5) Main function of RAM in a Computer?" << endl << "\nA) Store Data Permanently\nB) Process Graphics\nC) Connect To The Internet\nD) Store Temporary Data." << endl;
    waitTime(2);
    cout << "\nChoose The Correct Option: ";
    string i;
    cin >> i;
    waitTime(1);

    if (i.length() != 1 || !isalpha(i[0])){
        cout << "\nInvalid Option!" <<endl;
        waitTime(1);
        continue;
    }

    x5 = toupper(i[0]);
    waitTime(1);

    if (x5 == 'D'){
        cout << "\nCorrect!";
        score ++;
        break;
    }
    else if (x1 == 'A' || x1 == 'B' || x1 == 'C'){
        cout << "\nIncorrect!";
        waitTime(1);
        cout << "\nThe Correct Answer Was 'D'.";
        break;
    }
}
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
    double result = duration.count() / 1000.0;
    waitTime(1);
    // result
    waitTime(3);
    cout << "\nCongratulations, You've Scored " << score << "/5!";
    waitTime(1);
    cout << "\nIt Took You " << result << " s To Do This Quiz.";

}
