#include <stdio.h>

int strChar(char s[], char x) {
	for (int i = 0; s[i] != '\0'; i++) { 
		if (x == s[i]) {
			putchar('1' + i);
			break;
		}
	}
}


int main() {
	
	char s[] = "012345678490";
	char x = '4';
	strChar(s, x);
}
