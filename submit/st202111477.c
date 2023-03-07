#include "week_1"
void func() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - i; j++)
			printf("*");
		printf("\n");
	}
}