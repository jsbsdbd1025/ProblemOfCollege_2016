// A
//
#include"iostream"
#include"algorithm"
using namespace std;

struct tree
{
	tree *lchild, *rchild;
	int minn,maxn;
	int left, right;
}*root;
void build(tree* s, int a, int b)
{
	tree*p = s;
	p->left = a;
	p->right = b;
	p->minn = 0;
	p->maxn = 0;
	if (a == b)
	{
		scanf("%d", &(p->minn));
		p->maxn = p->minn;
		return;
	}
	p->lchild = new tree;
	memset(p->lchild, 0, sizeof(tree));
	p->rchild = new tree;
	memset(p->rchild, 0, sizeof(tree));
	build(p->lchild, a, (a + b) / 2);
	build(p->rchild, (a + b) / 2 + 1, b);
	p->maxn = max(p->lchild->maxn, p->rchild->maxn);
	p->minn = min(p->lchild->minn, p->rchild->minn);
}

__int64 query(tree*s, int l, int r)
{
	int mid, ans, a, b;
	mid = (s->left + s->right) >> 1;
	if (s->left == l && s->right == r)
	{
		return s->maxn*1000000+s->minn;
	}
	else if (r <= mid)
		ans = query(s->lchild, l, r);
	else if (l >= mid + 1)
		ans = query(s->rchild, l, r);
	else
	{
		a = query(s->lchild, l, mid);
		b = query(s->rchild, mid + 1, r);
		ans = max(a / 1000000, b / 1000000) * 1000000 + min(a % 1000000, b % 1000000);
	}
	return ans;
}


int queryMax(tree*s, int l, int r)
{
	int mid, ans, a, b;
	mid = (s->left + s->right) >> 1;
	if (s->left == l&&s->right == r)
	{
		return s->maxn;
	}
	else if (r <= mid)
		ans = queryMax(s->lchild, l, r);
	else if (l >= mid + 1)
		ans = queryMax(s->rchild, l, r);
	else
	{
		a = queryMax(s->lchild, l, mid);
		b = queryMax(s->rchild, mid + 1, r);
		ans = max(a, b);
	}
	return ans;
}
int queryMin(tree*s, int l, int r)
{
	int mid, ans, a, b;
	mid = (s->left + s->right) >> 1;
	if (s->left == l&&s->right == r)
	{
		return s->minn;
	}
	else if (r <= mid)
		ans = queryMin(s->lchild, l, r);
	else if (l >= mid + 1)
		ans = queryMin(s->rchild, l, r);
	else
	{
		a = queryMin(s->lchild, l, mid);
		b = queryMin(s->rchild, mid + 1, r);
		ans = min(a, b);
	}
	return ans;
}
void freedom(tree* p)
{
	if (p->lchild != NULL)
		freedom(p->lchild);
	if (p->rchild != NULL)
		freedom(p->rchild);
	delete p;
}
int main()
{

	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	int T, n, m;
	int l, r;
	int num;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &n, &m);
		root = new tree;
		memset(root, 0, sizeof(tree));
		build(root, 1, n);
		num = 0;
		for (int i = 0; i < m; i++)
		{
			scanf("%d%d", &l, &r);
			if (l == r)
			{
				num++;
				continue;
			}

			//if (queryMax(root, l, r) == queryMin(root, l, r))
			__int64 temp=query(root,l,r);
			if(temp/1000000==temp%1000000)
			{
				num++;
			}
		}
		printf("%d\n", num);

		freedom(root);
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}