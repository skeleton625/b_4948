#include <cstdio>
#include <algorithm>

bool n[246913] = { 1, 1 };
int pr[21787];
int i1, c, t;
int main() {
	for (int i = 2; i <= 246912; i++) {
		if (!n[i]) {
			pr[t++] = i;
			for (long long j = (long long)i*i; j <= 246912; j += i) n[j] = true;
		}
	}
	while (scanf_s("%d", &i1) && i1) {
		printf("%d\n", std::lower_bound(pr, pr+21787, 2*i1+1) - std::upper_bound(pr, pr+21787, i1));
		c = 0;
	}
	return 0;
}