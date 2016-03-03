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
	freopen("d.in", "w", stdout);
	int T = 200, n, m;
	double a;
	printf("%d\n", T);
	printf("1 1\n");
	printf("1 90\n");
	printf("10 17\n");
	
	

	for (int i = 3; i < T; i++)
	{
		n = rand() % 100 + 1;

		a = (rand() % 360 + 1);
		double t;
		while(1)
		{
			t = rand() % 10 + 1;
			if (a / t >= 1 && a / t <= 90)
			{
				a = a / t;
				break;
			}
			
		}
		printf("%d %lf\n", n,a);
	}
	return 0;
}

