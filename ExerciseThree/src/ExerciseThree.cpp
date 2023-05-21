#include <iostream>
using namespace std;

int main() {
	int N;
	int M;
	int totalM;
	int multiple;


	cin >> N;
	cin >> M;

	totalM = N / M;



	cout << "Total of multiples: " << totalM << endl;
	cout << "Multiples: " << endl;
	while(totalM > 0){
		multiple = totalM * M;
		cout << multiple << endl;
		totalM--;
	}

	return 0;
}

