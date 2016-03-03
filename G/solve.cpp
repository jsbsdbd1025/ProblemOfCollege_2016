// G
//

#include"iostream"
#include"algorithm"
using namespace std;
#define INF 1000000
#define M 105
/*
struct Node
{
	int s, e;
	int d;
}edge[M*M];
int score[M];
int parent[M];
int n, t;

void init()
{
	int i;
	for (i = 1; i <= n; i++)
	{
		parent[i] = i;
	}
}
bool cmp(Node a, Node b)
{
	return a.d > b.d;
}
int find(int x)
{
	while (x != parent[x])
	{
		x = parent[x];
	}
	return x;
}
bool Union(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y)
		return false;

	if (x>y)
		parent[x] = y;
	else
		parent[y] = x;
	return true;
}
void kruskal()
{
	int sum = 0;
	int i, num;
	int ans = INF;
	init();
	for (i = 0; i<t; i++)
	{
		if (Union(edge[i].s, edge[i].e))
		{
			if (edge[i].d < ans)
				ans = edge[i].d;
			sum += edge[i].d;
		}
	}
	printf("%d\n", ans);
}
int main()
{
	//freopen("g.in", "r", stdin);
	//freopen("g.out", "w", stdout);
	int i, j, T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &score[i]);
		}
		t = 0;
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				edge[t].s = i;
				edge[t].e = j;									
				edge[t].d = abs(score[i] - score[j]);
				t++;
			}
		}
		sort(edge, edge + t, cmp);
		kruskal();
	}
	return 0;
}*/
int main()
{
	//freopen("g.in", "r", stdin);
	//freopen("g2.out", "w", stdout);
	int i, j, T;
	int n;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		int ans = INF;
		if (n == 2)
		{
			printf("%d\n", a[1] - a[0]);
		}
		else
		{
			for (i = 1; i < n - 1; i++)
			{
				ans = min(ans, max(a[i] - a[0], a[n - 1] - a[i]));
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}