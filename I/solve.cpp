// I
//

#include "iostream"
#include"algorithm"
using namespace std;

__int64 dp[1 << 15];
//ai = 1 -- 10
__int64 a[20];
int main()
{

	//freopen("i.in", "r", stdin);
	//freopen("i.out", "w", stdout);
	int T;
	scanf("%d", &T);
	int n;// <= 8
	int i, j, k;
	while (T--)
	{
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%I64d", &a[i]);
			dp[1 << i] = a[i];
		}

		//第i个数乘上即乘（ai - i + 1） 最少有1分
		for (i = 0; i < (1 << n); i++)
		{
			int num = 0;
			int t = i;
			while (t)
			{
				if (t & 1)
					num++;
				t >>= 1;
			}
			for (j = 0; j < n; j++)
			{
				t = 1 << j;
				if ( t & i )
				{
					if (a[j] - num + 1>0)
						dp[i] = max(dp[i], dp[i & (~t)] * (a[j] - num + 1));
					else
						dp[i] = max(dp[i], dp[i & (~t)]);
				}
			}
		}
		printf("%I64d\n", dp[(1 << n) - 1]);
	}
    return 0;
}

