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
	freopen("j.in", "w", stdout);
	int T = 100, n, m;
	double a;
	printf("%d\n", T);
	printf("5 3\nHello\n");
	printf("12 5\nHello world!\n");



	for (int i = 2; i < T; i++)
	{
		n = rand()%10000 + 1;
		m = rand();
		printf("%d %d\n", n,m);
		int flag;
		for (int j = 0; j < n; j++)
		{
			flag = rand() % 29;
			if (flag >= 1 && flag <= 26)
			{
				printf("%c", 'a' + flag - 1);
			}
			else if (flag == 0)
			{
				printf(" ");
			}
			else if (flag == 27)
			{
				printf(".");
			}
			else if (flag == 28)
			{
				printf(",");
			}

		}
		puts("");
	}
	return 0;
}

