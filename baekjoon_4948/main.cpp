#include <cstdio>
#include <string.h>

bool n[250001];
int i1, c;
int main() {
	memset(n, 1, 250000);
	n[0] = false; n[1] = false;
	for (int i = 2; i*i <= 250000; i++) {
		if (n[i]) {
			for (int j = i * i; j <= 250000; j += i) n[j] = false;
		}
	}
	while (scanf_s("%d", &i1) && i1) {
		for (int i = i1+1; i <= i1*2; i++) if (n[i]) c++;
		printf("%d\n", c);
		c = 0;
	}
	return 0;
}