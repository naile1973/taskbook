// Задание D. Сумма факториалов

#include <stdio.h>

int main()
{
	unsigned int N;
	unsigned long long int CurFact = 1;
	unsigned long long int SumFact = 1;
	int i;

	scanf("%d", &N);

	for (i = 2; i <= N; i++)
		{
			CurFact *= (unsigned long int)i;
			SumFact += CurFact;
		}

	printf("%lld\n", SumFact);

	return 0;
}