// C

#include"iostream"
#include"algorithm"
using namespace std;
/*
int main()
{
	//freopen("a.in", "r", stdin);
	freopen("c.out", "w", stdout);

	printf("100000\n");
	for (int i = 0; i < 100000; i++)
	{
		int r = rand();
		printf("%d\n", i * 10 + r % 10 + r % 2);
	}
	//fclose(stdin);

	fclose(stdout);

	return 0;
}*/

#define M 1000005
int prime[M];
__int64 isPrime[M];
int temp[M];
int ans[M];
int k,p;
void fun()
{

	int i, j;
	for (i = 2; i < M; i++)
	{
		if (!prime[i])
		{
			isPrime[k++] = i;
			for (j = i + i; j < M; j += i)
			{
				prime[j] = 1;
			}
		}
	}
	__int64 t;
	p = 0;
	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			t = isPrime[i] * isPrime[j];
			if (t < M)
			{
				temp[p++] = (int)t;
			}
			else
				break;
		}
	}
	sort(temp, temp + p);
	for (i = 1, j = 0; i < M; i++)
	{
		if (i == temp[j])
		{
			j++;
		}
		ans[i] = j;
	}
}


int main()
{

	int T;
	int i, j;
	int n;//n在int范围内的正整数
	//freopen("c.in", "r", stdin);
	//freopen("c.out", "w", stdout);
	k = 0;
	fun();
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
	//fclose(stdin);
//	fclose(stdout);
	return 0;
}

/*
//不预处理过不去

int main()
{

	//freopen("c.in", "r", stdin);
	//freopen("c.out2", "w", stdout);
	int T;
	int i, j;
	int n;//n在int范围内的正整数
	fun();
  	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);

		for (i = 0, j = 0; i < p; i++)
		{
			if (temp[i] <= n)
			{
				j++;
			}
			else
				break;
		}
		printf("%d\n", j);
	}
	//fclose(stdin);

	//fclose(stdout);
    return 0;
}*/

