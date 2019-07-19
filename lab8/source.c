#include <stdio.h>
#include <math.h>

struct Point
{
	int x;
	int y;
};

double distance();
struct Point nearest();

int main()
{
	struct Point p1 = {1,2};
	struct Point p2 = {3,4};
	struct Point p3 = {8,9};
	printf("Distance: %f\n", distance(p1, p2));
	printf("Nearest: x->%d y->%d\n", (nearest(p1, p2, p3)).x, (nearest(p1, p2, p3)).y );
}

double distance(struct Point p1, struct Point p2)
{
	return sqrt( pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2) );
}

struct Point nearest(struct Point query, struct Point p1, struct Point p2) {
	return distance(query, p1) > distance(query, p2) ? p2 : p1;
}