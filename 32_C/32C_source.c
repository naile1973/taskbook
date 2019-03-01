// Задание C. Произведение чисел в диапазоне

#include <stdio.h>

int main()
{
	long long int Prod;
	int A, B;
	long long int LeftLimit, RightLimit;
	int i;


	scanf("%d %d", &A, &B);

	LeftLimit = (A < B) ? A : B;
	RightLimit = (A > B) ? A : B;

	if (A*B <= 0)
		Prod = 0;
	else
		{
			Prod = LeftLimit++;

			while (LeftLimit <= RightLimit)
				{
					Prod *= LeftLimit++;
				}
		}

	printf("%lld\n", Prod);

	return 0;
}