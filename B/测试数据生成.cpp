#include"iostream"
#include"algorithm"
using namespace std;

int main()
{
	int num = 0;
	freopen("b.in", "w", stdout);
	int a[15] = { 1,2,3,4,5,6,8,9,10,11,12,13 };
	int b[15];
	do
	{
		if (a[0] == 8)
			break;
		if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] && a[3] < a[4] && a[4] < a[5])
		{
			if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5])
			{
				continue;
			}
			num++;
			for (int i = 0; i < 6; i++)
			{
				if (i != 0)
					printf(" ");
				b[i] = a[i];
				printf("%d", a[i]);
			}
			puts("");
		}
		
	} while (next_permutation(a, a + 12)); 
	printf("8 9 10 11 12 13\n");
	printf("%d\n", num+1);
	fclose(stdout);

	return 0;
}