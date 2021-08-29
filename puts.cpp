#include <stdio.h>

void pUts(char s[]) {
	for (int i = 0; s[i] != '\0'; i++) { 
		putchar(s[i]);
	}
}


int main() {
	
	char s[] = "Hello, world";
	pUts(s);
	
}
