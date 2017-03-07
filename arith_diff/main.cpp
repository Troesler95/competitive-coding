#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(void) {
	int x=0, count=0, cont1=0, cont2=0;
	int i=0,j=0;
	int num1[10]={0}, num2[10] = {0};
	ifstream inFile;
	string line="", scont1=" ", scont2=" ";

	inFile.open("input.in");
	if(!inFile.is_open())
		cout << "Unable to open file." << endl;

	while(getline(inFile, line)) {
		istringstream iss(line);
		iss >> scont1;
		iss >> scont2;

		if(scont1 == "0" && scont2 == "0")
			break;

		i = scont1.length();
		j = scont2.length();

		for(int k=0; k < scont1.length(); ++k, --i)
			num1[k] = ((int)scont1[i-1])-48;
		for(int k=0; k < scont2.length(); ++k, --j)
			num2[k] = ((int)scont2[j-1]) - 48;


		for(int k = 0; k < max(scont1.length(), scont2.length()); k++) {
			if(num1[k] + num2[k] >= 10) {
				++count;
				num1[k+1]+=1;
			}
		}

		if (count == 0)
			printf("No carry operations.\n");
		else
			printf("%d carry operations.\n", count);

		for(int i=0; i<10; ++i) {
			num1[i]=0;
			num2[i]=0;
		}
		count = 0;
	}


	return 0;
}
