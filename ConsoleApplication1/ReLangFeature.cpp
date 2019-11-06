#include "CodeByLinXu.h"
#include <cstdio>
#include <cmath>
LangFeature::LangFeature()
{
}

LangFeature::~LangFeature()
{
}
void LangFeature::testPrintf() {
	printf("%d\n", 1 + 2);
	printf("%lf\n", 8.0/ 5.0);
	printf("%.8lf\n", 1 + 2 * sqrt(3) / (5 - 0.1));
}
void LangFeature::variableAndscanf() {
	int x, y;
	printf("Please enter two numbers:\n");
	scanf_s("%d%d", &x, &y);
	printf("%d", x + y);
}
void LangFeature::areaOfCylinder() {
	const double pi = 4 * atan(1.0);
	double r, h, s1, s2, s;
	printf("Please enter r and h\n");
	scanf_s("%lf%lf", &r, &h);
	s1 = pi * r * r;
	s2 = 2 * pi * r * h;
	s = 2.0 * s1 + s2;
	printf("Area = %.3lf", s);

}