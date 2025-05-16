#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, sum, avg, x[55], move, count = 1;

	while (scanf("%d", &n), n) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x[i]);
			sum += x[i];
		}
		avg = sum / n;
		move = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] > avg)
				move += x[i] - avg;
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", count++, move);
	}

	return 0;
}
