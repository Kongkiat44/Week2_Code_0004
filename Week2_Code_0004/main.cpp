#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int k=0, up = 0, low = 0;
	char letter[10001];
	scanf("%s", &letter);
	k = strlen(letter);
	for (int i = 0; i < k; i++) {
		if (isalpha(letter[i])) continue;
		else {
			printf("Please enter alphabetic characters (a-z,A-Z) only\n");
			return 0;
		}
	}
	for (int j = 0; j < k; j++) {
		if (islower(letter[j])) low++;
		else up++;
	}
	if (low == k) printf("All Small Letter\n");
	else if (up == k) printf("All Capital Letter\n");
	else printf("Mix\n");
	return 0;
}