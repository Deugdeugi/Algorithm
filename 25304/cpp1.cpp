#include <cstdio>
int main() {
	int x, n, a, b;
	scanf("%d%d", &x, &n);
	while (n--) {
		scanf("%d%d", &a, &b);
		x -= a * b;
	}
	puts(x ? "No" : "Yes");
}
