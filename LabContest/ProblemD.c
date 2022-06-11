#include<stdio.h>
int t, n, z;
int main() {
	scanf("%d", &t);
	while (t--) {
		int a[200001] = {}, e = -1;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &z);
			a[z]++;
			if (a[z] > 2)
				e = z;
		}
		printf("%d\n", e);
	}
}