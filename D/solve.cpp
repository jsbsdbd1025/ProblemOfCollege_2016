// D
//
#include"iostream"
#include"algorithm"
#include"cmath"
using namespace std;
const double eps = 1e-8;
const double PI = acos(-1.0);
double xx[1005], yy[1005];
struct Point
{
	double x, y;
	Point() {}
	Point(double _x, double _y)
	{
		x = _x; y = _y;
	}
	Point operator -(const Point &b)const
	{
		return Point(x - b.x, y - b.y);
	}
	//叉积
	double operator ^(const Point &b)const
	{
		return x*b.y - y*b.x;
	}
	//点积
	double operator *(const Point &b)const
	{
		return x*b.x + y*b.y;
	}
	//绕原点旋转角度B（弧度值），后x,y的变化
	void transXY(double B)
	{
		double tx = x, ty = y;
		x = tx*cos(B) - ty*sin(B);
		y = tx*sin(B) + ty*cos(B);
	}
};

double CalcArea(Point p[], int n)
{
	double res = 0;
	double t;
	for (int i = 0; i < n; i++)
	{
		t = (p[i] ^ p[(i + 1) % n]);
		res += (p[i] ^ p[(i + 1) % n]) / 2.0;
	}
	return fabs(res);
}
int main()
{
	//freopen("d.in", "r", stdin);
	//freopen("d.out", "w", stdout);
	int T;
	int n, i, j;
	double len, angle;
	double a[105], b[105];
	double s;
	scanf("%d", &T);
	Point p[200];
	while (T--)
	{
		scanf("%lf%lf", &len, &angle);
		p[0].x = len;
		p[0].y = 0;
		for (i = 1; i*angle<90; i++)
		{
			p[i] = p[i - 1];
			p[i].transXY(PI*angle / 180);
		}
		p[i].x = 0;
		p[i++].y = len;
		p[i].x = 0;
		p[i++].y = 0;
		printf("%.1lf\n", CalcArea(p, i));
	}
	return 0;
}