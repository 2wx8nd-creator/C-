#include <stdio.h>

int amin(void) {
	float f = 0.1f;
	double d = 1.0;
	double d2 = (double)f;

	printf("%d\n", 10.0==10.0f); 
	printf("%d\n", 0.1 == 0.1f);
	printf("%19.17f\n", f);
	printf("%19.17lf\n", d);
	printf("%19.17lf\n", d2);
	printf("%d\n", d==f);
	printf("%d\n", d==d2);
	printf("%d\n", d2==f);
	printf("%d\n", (float)d==f);

	return 0;

}