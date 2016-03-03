// H
//

#include"iostream"
using namespace std;
int a[100005];
int main()
{
//	freopen("h.in", "r", stdin);
//	freopen("h.out", "w", stdout);
	int T;
	int n;
	int ans;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		ans = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++)
		{
			ans += a[i];
			if (a[i] == 0)
			{
				a[i + 1]++;
			}
			else
			{
				a[i + 1] += (a[i] + 1) / 2;
			}
		}
		printf("%d\n",ans);
	}
    return 0;
}

