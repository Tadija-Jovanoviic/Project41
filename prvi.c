#include <stdio.h>
int main()
{
	int broj, suma_cifara, br_el = 0, proizvod_fin = 1, pom, M;
	int cifra_najmanje_tez, cifra_najvece_tez, cifra = 0;
	scanf_s("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf_s("%d", &broj);
		cifra_najmanje_tez = broj % 10;
		pom = broj;
		suma_cifara = 0;
		while (pom != 0)
		{
			cifra = pom % 10;
			suma_cifara += cifra;
			pom = pom / 10;
		}
		cifra_najvece_tez = cifra;
		if (cifra_najmanje_tez == cifra_najvece_tez)
			proizvod_fin *= broj;
		if (suma_cifara != 0 && broj % suma_cifara == 0)
			br_el += 1;
	}
	printf("%d %d", proizvod_fin, br_el);
	return 0;
}