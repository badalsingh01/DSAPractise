#include<iostream>
using namespace std;

int main() {

	int lCount = 0; // count lowercase char 
	int uCount = 0; // count lowercase char
	int dCount = 0; // count digits 
	int sCount = 0; // count special char
	int wCount = 0; // count White spaces

	char ch;

	while (true) {
		ch = cin.get();

		if(ch == '$') {
			break;
		}

		if (ch >= 'A' and ch <= 'Z') {
			uCount++;
		} else if (ch >= 'a' and ch <= 'z') {
			lCount++;
		} else if (ch >= '0' and ch <= '9') {
			dCount++;
		}else if (ch == ' ' or ch == '\n' or ch == '\t') {
			sCount++;
		} else {
			wCount++;
		}
	}

	cout << lCount << " " << uCount << " " << dCount << " " << wCount << " " << sCount << endl;

	return 0;
}
