#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

int main(void) {
	int n=0, k=0;
	ifstream in_file;
	string cont;

	if(!in_file.open("input.in"))
		printf("Unable to open file.\n");

	while(getline(in_file, cont)) {
		stringstream(cont) >> n;
		stringstream(cont) >> k;

	return 0;
}
