#include <iostream>
using namespace std;

struct Rect
{
	double x, y, w, h;
};
double min(double x, double y)
{
	if (x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
double max(double x, double y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

double overlap(Rect r1, Rect r2)
{
	double l1 = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x);
	double l2 = min(r1.y, r2.y) - max(r1.y - r1.h, r2.y - r2.h);
	double area;
	area = (l1 * l2);
	if (area<0)
	{
		return 0;
	}
	 
	return area;
}
int main()
{
	Rect R1 = {1, 1, 5, 5};
	Rect R2 = {7, 2, 3, 3};
	cout << overlap(R1, R2);
}