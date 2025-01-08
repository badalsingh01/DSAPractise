#include<iostream>
using namespace std;

int main() {
	int cnt = 0;
	char ch;

	while(true) {
		//cin >> ch; // cin >> ignore whitespaces
		ch = cin.get(); // cin.get() reads whitespaces as well

		if(ch == '$') {
			break;
		}
		cnt++;

	}

	cout << "cnt = " << cnt << endl;


	return 0;
}





