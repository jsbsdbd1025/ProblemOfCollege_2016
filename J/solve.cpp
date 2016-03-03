// J
//

#include"iostream"
using namespace std;
char a;
int main()
{

	//freopen("j.in", "r", stdin);
	//freopen("j.out","w", stdout);
	int T;
	int n, m;
	int i, j;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &n, &m);
		getchar();
		for (i = 0; i < n; i++)
		{
			a = getchar();
			if (i%m == 0 && i)
				puts("");
			printf("%c", a);
		}
		if (n%m)
		{
			puts("");
		}
	}
	return 0;
}