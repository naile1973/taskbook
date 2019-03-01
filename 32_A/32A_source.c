// Задание A.Банковский процент

#include <stdio.h>
#include <math.h> 

#define cnPERCENT 100.0

int main()
{
	int X, P, N;
	int CurSumma;
	int X2, P2, N2;
	int CurSumma2;
	int i;


	scanf("%d %d %d", &X, &P, &N);
	CurSumma = X;

	X2 = X; P2 = P; N2 = N;
	CurSumma2 = CurSumma;

	for (i = 0; i < N; i++)
		{
			CurSumma += round((float)CurSumma * (float)P / cnPERCENT);
			printf("%d  ", CurSumma);
			CurSumma2 += (CurSumma2 * P2 / 100);
			printf("%d\n", CurSumma2);
	}
	printf("%d  ", CurSumma);
	printf("%d\n", CurSumma2);
	return 0;
}