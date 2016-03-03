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
	freopen("c.in", "w", stdout);
	int T = 100000, n, m;
	int l, r;
	printf("%d\n", T);
	printf("1\n6\n5\n1000000\n");
	
	

	for (int i = 4; i < T; i++)
	{
		n = random() % (i*10);
		while (n == 0)
		{
			n = random() % (i*10);
		}
		printf("%d\n", n);
	}
	return 0;
}

