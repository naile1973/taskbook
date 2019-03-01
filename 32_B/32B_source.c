// Задание B.Число Фибоначчи

#include <stdio.h>

int main()
{
	int K;
	int Fib_prev1 = 1, Fib_prev2 = 1, Fib = 1;
	int i;


	scanf("%d", &K);

	if (K > 2)
		for (i = 3; i <= K; i++)
			{
				Fib_prev2 = Fib_prev1;
				Fib_prev1 = Fib;
				Fib = Fib_prev2 + Fib_prev1;
		}

	printf("%d\n", Fib);

	return 0;
}