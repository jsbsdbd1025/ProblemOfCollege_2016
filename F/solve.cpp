// F

#include"iostream"
#include"algorithm"
using namespace std;

int main()
{
	//freopen("f.in", "r", stdin);
	//freopen("f.out","w", stdout);
	int T;
	int n, i, j;
	int p = 0;
	scanf("%d", &T);
	while (T--)
	{
		if (p++)
		{
			puts("");
		}
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{

			for (j = 0; j <= 4 * n + i; j++)
			{
				if (j == n - i || j == n + i || j == 4 * n - i || j == 4 * n + i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		
			puts("");
		}
		for (j = 0; j <= 5 * n; j++)
		{
			if (j == 0 || j == 2 * n || j == n  || j == 4 * n - i || j == 4 * n || j == 4 * n + i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}

		puts("");
		for (i = n - 1; i >= 0; i--)
		{
			for (j = 0; j <= 4 * n + i; j++)
			{
				if (j == n - i || j == n + i || j == 4 * n - i || j == 4 * n + i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}

			puts("");
		}
	}
	return 0;
}