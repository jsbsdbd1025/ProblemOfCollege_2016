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
	freopen("h.in", "w", stdout);
	int T = 100, n, m;
	double a;
	printf("%d\n", T);
	printf("3\n1 2 3\n");
	printf("3\n2 2 2\n");
	printf("3\n0 0 0\n");
	
	

	for (int i = 3; i < T; i++)
	{
		n = rand() % 10000 + 1;
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

