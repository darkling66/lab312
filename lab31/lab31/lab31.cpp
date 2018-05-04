// lab31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
int zero(int*, int);

int main() {
	int i;
	int a[] = { 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0 };
	for (i = 0; i < 19; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
	int n = sizeof(a) / sizeof(int);
	n = zero(a, n);
	for (i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int zero(int* a, int n) {
	int p, k, j, i = 0, m = n - 1;
	while (i < m) {
		if ((a[i] == 0) && (a[i] == a[i + 1])) {
			break;
		}
		++i;
	}

	for (m = n, j = i; j < n; a[i] = a[j]) {
		p = j;
		while ((p < n) && (a[p] == 0))
			++p;

		if ((k = (p - j)) > 2) {
			m -= k;
			k = (k & 1) ? 1 : 2;
			m += k;
			while (k-- > 0)
				a[i++] = a[j++];
			j = p;
			continue;
		}
		else
			++i;

		if (++j >= n) {
			break;
		}
	}
	return m;
}