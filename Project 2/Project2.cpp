#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4 };

// Function Declarations
enQuestionLevel getQuestionLevel();
enOperationType getOperationType();
void PlayGame(int NumberOfQuestion);
bool playAgain();

int main() {
	srand(time(0)); // Initialize random seed

	while (true) {
		system("cls");
		int NumberOfQuestion;
		cout << "How many Questions do you want to answer: ";
		cin >> NumberOfQuestion;
		PlayGame(NumberOfQuestion);

		if (!playAgain()) {
			break;
		}
	}
	return 0;
}

void PlayGame(int NumberOfQuestion) {
	enQuestionLevel LevelOfQuestion = getQuestionLevel();
	enOperationType TypeOfOperation = getOperationType();

	int num1, num2, result, ResultOfUser;
	int NumberOfRightAnswer = 0, NumberOfWrongAnswer = 0;

	for (int i = 1; i <= NumberOfQuestion; i++) {
		switch (LevelOfQuestion) {
		case Easy:
			num1 = rand() % 11;
			num2 = rand() % 11;
			break;
		case Med:
			num1 = rand() % 51;
			num2 = rand() % 51;
			break;
		case Hard:
			num1 = rand() % 101;
			num2 = rand() % 101;
			break;
		default:
			cout << "ERROR\n";
		}

		switch (TypeOfOperation) {
		case Add:
			result = num1 + num2;
			break;
		case Sub:
			result = num1 - num2;
			break;
		case Mul:
			result = num1 * num2;
			break;
		case Div:
			do {
				num2 = rand() % 11;
			} while (num2 == 0);
			result = num1 / num2;
			break;
		default:
			cout << "ERROR\n";
		}

		cout << "Question [" << i << "/" << NumberOfQuestion << "] \n";
		cout << endl << num1;
		switch (TypeOfOperation) {
		case Add: cout << "+"; break;
		case Sub: cout << "-"; break;
		case Mul: cout << "*"; break;
		case Div: cout << "//"; break;
		default: continue;
		}
		cout << num2 << "\n_______\n";
		cin >> ResultOfUser;

		if (result == ResultOfUser) {
			cout << "Right Answer\n";
			NumberOfRightAnswer++;
			system("color 2F");
			system("pause");
			system("color 07");
		}
		else {
			cout << "Wrong Answer\n";
			cout << "The Right Answer is: " << result << endl;
			NumberOfWrongAnswer++;
			system("color 4F");
			system("pause");
			system("color 07");
		}
	}

	cout << "_____________________\nFinal Result: ";
	if (NumberOfRightAnswer > NumberOfWrongAnswer) {
		cout << "Success\n";
	}
	else {
		cout << "Fail\n";
	}

	cout << "_____________________\n";
	cout << "Number Of Questions: " << NumberOfQuestion << endl;

	switch (LevelOfQuestion) {
	case Easy: cout << "Question Level: Easy\n"; break;
	case Med: cout << "Question Level: Med\n"; break;
	case Hard: cout << "Question Level: Hard\n"; break;
	default: cout << "Question Level: .....\n";
	}

	switch (TypeOfOperation) {
	case Add: cout << "Operation Type: +\n"; break;
	case Sub: cout << "Operation Type: -\n"; break;
	case Mul: cout << "Operation Type: *\n"; break;
	case Div: cout << "Operation Type: //\n"; break;
	default: cout << "Operation Type: ....\n";
	}

	cout << "Number Of Right Answers: " << NumberOfRightAnswer << endl;
	cout << "Number Of Wrong Answers: " << NumberOfWrongAnswer << endl;
}

enQuestionLevel getQuestionLevel() {
	int ChoiceQuestionLevel;
	cout << "[1] Easy, [2] Med, [3] Hard: ";
	cin >> ChoiceQuestionLevel;
	return static_cast<enQuestionLevel>(ChoiceQuestionLevel);
}

enOperationType getOperationType() {
	int ChoiceOperationType;
	cout << "Enter Operation Type: [1] +, [2] -, [3] *, [4] / \n";
	cin >> ChoiceOperationType;
	return static_cast<enOperationType>(ChoiceOperationType);
}

bool playAgain() {
	char choice;
	cout << "\nDo you want to play again? (y/n): ";
	cin >> choice;
	return (choice == 'y' || choice == 'Y');
}
