// E

#include"iostream"
#include"algorithm"
using namespace std;
int main()
{
	int T;
	int n,t,ans;
	//freopen("e.in", "r", stdin);
	//freopen("e.out", "w", stdout);
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		ans = 0;
		while (n--)
		{
			scanf("%d", &t);
			ans ^= t;
		}
		//1表示黑色，0表示白色
		//偶数个黑色为没有翻过
		if (ans)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}