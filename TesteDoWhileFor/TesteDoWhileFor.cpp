#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	setlocale(LC_ALL, "Portuguese");
	int i, j, n;

	cout << "************************************\n";
	cout << "****** BEM VINDOS AO PROGRAMA ******\n";
	cout << "******     TABUADA COM FOR    ******\n";
	cout << "************************************\n\n";

	cout << "Escreva o numero de tabuadas desejada: ";
	cin >> n;

	system("cls");

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 10; j++) {
			cout << i << " X " << j << " = " << i * j << "\n";
		}
		cout << "\n";
	}

	cout << "\n\n\n";
	cout << "Project by Penga\n";

	return 0;
}