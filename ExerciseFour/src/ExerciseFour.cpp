#include <iostream>
using namespace std;

int main() {
	int A;
	int B;
	int product = 0;

	cin >> A;
	cin >> B;

	while(B > 0){
		product = product + A;
		B--;
	}

	cout << product  << endl;
	return 0;
}

