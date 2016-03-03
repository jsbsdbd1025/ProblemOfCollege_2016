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
	freopen("e.in", "w", stdout);
	int T = 1000, n, m;
	double a;
	printf("%d\n", T);
	printf("2\n1 1\n");
	printf("3\n1 0 1\n");
	printf("3\n0 0 1\n");
	
	

	for (int i = 3; i < T; i++)
	{
		n = rand() % 10000 + 1;
		printf("%d\n", n);
		for (int j = 0; j < n; j++)
		{
			if (j != 0)
				printf(" ");
			printf("%d", rand() % 2);
		}
	}
	return 0;
}

