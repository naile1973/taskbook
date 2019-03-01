// Задание E. Сумма ряда

#include <stdio.h>
#define cnINVERT_SIGN -1.0
#define cnINC_VALUE 1.0

int main()
{
	unsigned int N;
	int K, X;
	double CurSign = 1.0;
	double Nominator = 1.0;
	double Denominator = 2.0;
	double PowerX = 1.0;
	double Sum = 0.0;
	double Term;

	int i;

	scanf("%d %d", &K, &X);


	for (i = 1; i <= K; i++)
	{
		PowerX *= (double)X;
		Nominator += cnINC_VALUE;
		Denominator += cnINC_VALUE;
		CurSign *= cnINVERT_SIGN;
		Term = CurSign * Nominator / Denominator * PowerX;
		Sum += Term;
	}

	printf("%g\n", Sum);  // формат и точность вывода (знаков после запятой) определяется библиотечной функцией

	return 0;
}