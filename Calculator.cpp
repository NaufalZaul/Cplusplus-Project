#include <iostream>
#include <cmath>

using namespace std;

int main() {

	char operation;
	double x, y, result;

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\tCALCULATOR" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	cout << "input value : ";
	cin >> x;

	cout << "operation   :";
	cin >> operation;
	
	cout << "input value : ";
	cin >> y;
	
switch(operation) {
	case '+' : 
			result = x + y;
			cout << "The result is " << result << endl;
		break;

	case '-' :
			result = x - y;
			cout << "The result is " << result << endl;
		break;

	case '*' :
			result = x * y;
			cout << "The result is " << result << endl;
		break;

	case '/' :
			result = x / y;
			cout << "The result is " << result << endl;
		break;

	default : cout << "THE RESULT IS UNDEFINED!!" << endl;

}

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	return 0;
}






