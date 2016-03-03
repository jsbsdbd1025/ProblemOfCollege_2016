#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <time.h>
#include <assert.h>
typedef long long LL;
const int inf = 0x7FFFFFFF;
#define MOD 1000000
using namespace std;
int random() {
	return ((LL)rand() * rand()) % MOD;
}
int main() {
	srand(time(NULL));
	freopen("i.in", "w", stdout);
	int T = 1000, n, m;
	double a;
	printf("%d\n", T);
	printf("1\n10\n");
	printf("2\n1 2\n");
	printf("3\n1 3 5\n");



	for (int i = 3; i < T; i++)
	{
		n = rand() % 15 + 1;
		printf("%d\n", n);
		for (int j = 0; j < n; j++)
		{
			if (j != 0)
				printf(" ");
			printf("%d", rand() % 10 + 1);
		}
		puts("");
	}
	return 0;
}

