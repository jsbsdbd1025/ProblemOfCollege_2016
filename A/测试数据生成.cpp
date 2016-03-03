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
	freopen("a.in", "w", stdout);
	int T = 10, n, m;
	int l, r;
	printf("%d\n", T);
	printf("3 2\n");
	printf("1 2 2\n");
	printf("1 2\n");
	printf("2 3\n");
	
	printf("5 3\n");
	printf("1 2 2 3 3\n");
	printf("1 1\n");
	printf("2 3\n");
	printf("1 5\n");
	
	

	for (int i = 0; i < 7; i++)
	{
		n = random();
		m = random();
		printf("%d %d\n", n, m);
		for (int i = 0; i < n; i++)
		{
			if (i != 0)
				printf(" ");
			printf("%d", rand() % 10);
		}
		puts("");
		for (int i = 0; i < m; i++)
		{
			while (1)
			{
				l = rand();
				r = l + rand()%5;
				if (r <= n && l>0 )
				{
					printf("%d %d\n", l, r);
					break;
				}
			}
		}
	
	}


	n = MOD;
	m = MOD;
	printf("%d %d\n", n, m);
	for (int i = 0; i < n; i++)
	{
		if (i != 0)
			printf(" ");
		printf("8");
	}
	puts("");
	for (int i = 0; i < m; i++)
	{
		while (1)
		{
			l = rand();
			r = rand();
			if (l <= r&&r <= n && l>0)
			{
				printf("%d %d\n", l, r);
				break;
			}
		}
	}
	return 0;
}

