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
#define MOD 100000
using namespace std;
int random() {
	return ((LL)rand() * rand()) % MOD;
}
int main() {
	srand(time(NULL));
	freopen("g.in", "w", stdout);
	int T = 100, n, m;
	double a;
	printf("%d\n", T);
	printf("2\n0 10\n");
	printf("3\n1 3 6\n");
	printf("3\n3 3 3\n");


	for (int i = 3; i < T; i++)
	{
		n = rand() % 99 + 2;
		printf("%d\n", n);
		for (int j = 0; j < n; j++)
		{
			if (j != 0)
				printf(" ");
			printf("%d", rand() % 721);
		}
		puts("");
	}
	return 0;
}

