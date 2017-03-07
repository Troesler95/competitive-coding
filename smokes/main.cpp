#include <fstream>
#include <iostream>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

int main(void) {
	int n=0, k=0, a=0, b=0;
	ifstream in_file;
	string line;

	in_file.open("input.in");

	if(!in_file.is_open())
		cout << "Unable to open file." << endl;

	while(getline(in_file, line)) {
		istringstream iss(line);
		iss >> n;
		iss >> k;

		a = floor(n/k);
		b = floor((n/k)/k);

		cout << n+a+b << endl;
	}

	return 0;
}
