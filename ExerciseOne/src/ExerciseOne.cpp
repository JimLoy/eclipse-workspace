#include <iostream>
using namespace std;

int main() {
	int totalZ = 0;
	int averageP = 0;
	int totalP = 0;
	int sumN = 0;
	int value;

	for(int i = 0;i < 10;i++){
		cin >> value;
		if(value == 0){
			totalZ++;
		}
		else if(value > 0){
			averageP = averageP + value;
			totalP++;
		}
		else {
			sumN = sumN + value;
		}
	}

	averageP = averageP / totalP;

	cout << "Total of zeros: " << totalZ << endl;
	cout << "Average of positives: " << averageP << endl;
	cout << "Sum of negatives: " << sumN << endl;
	return 0;
}
