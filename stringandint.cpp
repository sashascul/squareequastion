#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string a, b, c;
	int counter = 0, a1 = 0, b1 = 0, c1 = 0;
	cin >> a >> b >> c;
	
	for (int i = 0; i < a.length(); i++) {
		if ((int)a[i] < 48 || (int)a[i] > 57) {
			counter++;
		}
	}
	
	for (int i = 0; i < b.length(); i++) {
		if ((int)b[i] < 48 || (int)b[i] > 57) {
			counter++;
		}
	}
	
	for (int i = 0; i < c.length(); i++) {
		if ((int)c[i] < 48 || (int)c[i] > 57) {
			counter++;
		}
	}	
	
	if (counter == 0) {
		a1 = stoi(a);
		b1 = stoi(b);
		c1 = stoi(c);
	}
	
	else
		cout << "ERROR";
	
}
