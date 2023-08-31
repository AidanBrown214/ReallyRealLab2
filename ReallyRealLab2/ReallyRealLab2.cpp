#include <iostream>
using namespace std;
int main() {
	cout << "I require, numbers\n";

	float A;
	float B;
	float X;

	cout << "Enter value for A: ";
	cin >> A;

	cout << "Now, I require B=";
	cin >> B;

	X = -B / A;

	cout << "Must solve, Ax+B=0 \n";

	cout << "The Answer: x = " << X << endl;

}