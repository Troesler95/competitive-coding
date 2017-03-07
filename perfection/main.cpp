#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

int checkPerfect(int num) {
	std::vector<int> divisors;
	int divisor = 1;
	unsigned int sum = 0;

	divisor = (int)num/2;

	while(divisor != 0) {
		if(num % divisor == 0)
			divisors.push_back(divisor);
		--divisor;
	}

	for(const int &i: divisors) {
		sum += i;
	}

	if(sum == num)
		return 0;
	else if (sum < num)
		return -1;
	else
		return 1;
}

int main(void) {
	std::queue<int> inStack;
	int count = 0;
	int rValue = 0, cont = 0;

	while (std::cin >> cont) {
		if(cont == 0)
			break;
		else
			inStack.push(cont);
	}

	std::cout << "PERFECTION OUTPUT" << std::endl;
	while(!inStack.empty()) {
		cont = inStack.front();
		rValue = checkPerfect(cont);

		if(rValue==0)
			std::cout << setw(5) << right << cont << "  " << "PERFECT" << endl;
		else if(rValue == 1)
			std::cout << setw(5) << right << cont << "  " << "ABUNDANT" << endl;
		else
			std::cout << setw(5) << right << cont << "  " << "DEFICIENT" << endl;
		inStack.pop();
	}
	cout << "END OF OUTPUT\n";
	return 0;
}
