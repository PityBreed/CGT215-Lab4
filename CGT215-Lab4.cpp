#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial() {
	int X;
	cout << "Factorial selected.";
	cout << "Enter a number please: ";
	cin >> X;
	if (X < 0) {
		cout << "Please enter a positive number: ";
		cin >> X;
		if (X < 0) {
			cout << "Very funny, give me a POSITIVE number: ";
			cin >> X;
			if (X < 0) {
				cout << "I give up." << endl;
			}
			else {
				long long int N = 1;
				cout << X << "! = 1";
				for (int i = 2; i <= X; i = i + 1) {
					cout << " * " << i;
					N = N * i;
				}
				cout << " = " << N << endl;
			}
		}
		else {
			long long int N = 1;
			cout << X << "! = 1";
			for (int i = 2; i <= X; i = i + 1) {
				cout << " * " << i;
				N = N * i;
			}
			cout << " = " << N << endl;
		}
	}
	else {
		long long int N = 1;
		cout << X << "! = 1";
		for (int i = 2; i <= X; i = i + 1) {
			cout << " * " << i ;
			N = N * i;
		}
		cout << " = " << N << endl;
	}
}

void arithmetic() {
	int I;
	int D = 0;
	int N;
	long long int S = 0;

	cout << "Arithmetic Series selected." << endl;
	cout << "Enter a number to start at: ";
	cin >> I;
	cout << "Enter a number to add each time: ";
	cin >> D;
	cout << "Enter the number of elements in the series: ";
	cin >> N;
	
	if (N < 0) {
		cout << "Please enter a positive number of elements: ";
		cin >> N;
		if (N < 0) {
			cout << "A POSITIVE number, you can't have a negative number of elements in a series: ";
				cin >> N;
			if (N < 0) {
				cout << "That'll do it, I'm outta here." << endl;
			}
			else {
				cout << I;
				S = I;
				for (int i = 1; i <= (N - 1); i = i + 1) {
					cout << " + " << I + (D * i);
					S = S + I + (D * i);
				}
				cout << " = " << S << endl;
			}
		}
		else {
			cout << I;
			S = I;
			for (int i = 1; i <= (N - 1); i = i + 1) {
				cout << " + " << I + (D * i);
				S = S + I + (D * i);
			}
			cout << " = " << S << endl;
		}
	}
	else {
		cout << I;
		S = I;
		for (int i = 1; i <= (N - 1); i = i + 1) {
			cout << " + " << I + (D * i);
			S = S + I + (D*i);
		}
		cout << " = " << S << endl;
	}
}

void geometric() {
	int I;
	int M = 1;
	int N;
	long long int S = 0;

	cout << "Geometric Series selected." << endl;
	cout << "Enter a number to start at: ";
	cin >> I;
	cout << "Enter a number to multiply each time: ";
	cin >> M;
	cout << "Enter the number of elements in the series: ";
	cin >> N;

	if (N < 0) {
		cout << "Please enter a positive number of elements: ";
		cin >> N;
		if (N < 0) {
			cout << "A POSITIVE number, you can't have a negative number of elements in a series: ";
			cin >> N;
			if (N < 0) {
				cout << "That'll do it, I'm outta here." << endl;
			}
			else {
				cout << I;
				for (int i = 1; i <= (N - 1); i = i + 1) {
					cout << " + " << I * (pow(M, i));
					S = S + (I * (pow(M, i)));

				}
				S = S + I;
				cout << " = " << S << endl;
			}
		}
		else {
			cout << I;
			for (int i = 1; i <= (N - 1); i = i + 1) {
				cout << " + " << I * (pow(M, i));
				S = S + (I * (pow(M, i)));

			}
			S = S + I;
			cout << " = " << S << endl;
		}
}
	else {
		cout << I;
		for(int i = 1; i <= (N - 1); i = i + 1){
			cout << " + " << I * (pow(M, i));
			S = S + (I * (pow(M, i)));
			
		}
		S = S + I;
		cout << " = " << S << endl;
	}
}


int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}