#include"iostream"
#include"algorithm"
using namespace std;


int vis[15];
int ans;
void DFS(int low, int up, int flag, int cur)
{
	if (cur == 12)
	{
		ans = 1;
		return;
	}
	if (low - 1 >= 1 && vis[low - 1] ^ flag)
	{
		DFS(low - 1, up, !flag, cur + 1);
		if (ans)
			return;
	}

	if (up + 1 <= 13 && vis[up + 1] ^ flag)
	{
		DFS(low, up + 1, !flag, cur + 1);
		if (ans)
			return;
	}
}
int main()
{
	int T;
	int p;
	scanf("%d", &T);
	while (T--)
	{
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < 6; i++)
		{
			scanf("%d", &p);
			vis[p] = 1;
		}
		ans = 0;
		DFS(7, 7, 0, 0);
		if (ans)
			printf("Happy!\n");
		else
			printf("Unhappy!\n");

	}
	return 0;
}
