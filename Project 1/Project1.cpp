#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

enum enGameChoice { Stone = 1, Paper, Scissors };

string getUserName();
int getRoundsNumber();
enGameChoice getUserChoice();
enGameChoice getComputerChoice();
string choiceToString(enGameChoice choice);
void playGame();
bool playAgain();

int main() {
    srand(time(0));

restart:
    system("cls"); // Clear screen before restarting
    playGame();

    if (playAgain()) {
        goto restart;
    }

    return 0;
}

void playGame() {
    string name = getUserName();
    int rounds = getRoundsNumber();
    int userScore = 0, computerScore = 0;
    vector<pair<int, int>> scoreBoard;

    cout << "\n===== Game Start =====\n";
    for (int i = 1; i <= rounds; i++) {
        cout << "\n===== Round " << i << " =====\n";
        enGameChoice userChoice = getUserChoice();
        enGameChoice computerChoice = getComputerChoice();

        cout << name << " chose: " << choiceToString(userChoice) << endl;
        cout << "Computer chose: " << choiceToString(computerChoice) << endl;

        if (userChoice == computerChoice) {
            system("color 6F"); // Yellow background, white text
            cout << "It's a draw!\n";
        }
        else if ((userChoice == Stone && computerChoice == Scissors) ||
            (userChoice == Scissors && computerChoice == Paper) ||
            (userChoice == Paper && computerChoice == Stone)) {
            system("color 2F"); // Green background, white text
            cout << name << " wins this round!\n";
            userScore++;
        }
        else {
            system("color 4F"); // Red background, white text
            cout << "Computer wins this round!\n";
            computerScore++;
        }
        scoreBoard.push_back({ userScore, computerScore });
        system("pause");
        system("color 07"); // Reset color to default
    }

    cout << "\n===== Final Results =====\n";
    cout << "Round Number | " << name << " | PC" << endl;
    cout << "_____________|_____________|___" << endl;
    for (int i = 0; i < rounds; i++) {
        cout << i + 1 << "              | " << scoreBoard[i].first << "                | " << scoreBoard[i].second << endl;
    }

    cout << "\n===== Game Summary =====\n";
    if (userScore > computerScore)
        cout << name << " wins the game!\n";
    else if (userScore < computerScore)
        cout << "Computer wins the game!\n";
    else
        cout << "It's a tie!\n";
}

string getUserName() {
    string name;
    cout << "Enter your name : ";
    cin >> name;
    return name;
}

int getRoundsNumber() {
    int rounds;
    do {
        cout << "Enter the number of rounds you want to play: ";
        cin >> rounds;
    } while (rounds <= 0);
    return rounds;
}

enGameChoice getUserChoice() {
    int choice;
    do {
        cout << "Choose: [1] Stone, [2] Paper, [3] Scissors: ";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    return static_cast<enGameChoice>(choice);
}

enGameChoice getComputerChoice() {
    return static_cast<enGameChoice>(rand() % 3 + 1);
}

string choiceToString(enGameChoice choice) {
    switch (choice) {
    case Stone: return "Stone";
    case Paper: return "Paper";
    case Scissors: return "Scissors";
    default: return "Unknown";
    }
}

bool playAgain() {
    char choice;
    cout << "\nDo you want to play again? (y/n): ";
    cin >> choice;
    return (choice == 'y' || choice == 'Y');
}
