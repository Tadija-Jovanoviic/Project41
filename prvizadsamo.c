#include<stdio.h>
int main()
{
	int N, proizvodparnih, proizvodneparnih, cifra, k;
	printf("Unesite N: ");
	scanf_s("%d", &N);
	proizvodparnih = 1;
	proizvodneparnih = 1;
	k = N;
	while (k != 0) {
		cifra = k % 10;

		if (cifra % 2 == 0) {
			proizvodparnih = proizvodparnih * cifra;
		}
		else {
			proizvodneparnih = proizvodneparnih * cifra;
		}
		k = k / 10;
	}
	printf("Proizvod parnih cifara: %d\n", proizvodparnih);
	printf("Proizvod neparnih cifara: %d\n", proizvodneparnih);
int t;
t = 1;
while (t * t < proizvodneparnih)
{
	t++;
}
if (t * t == proizvodneparnih)
	printf("Neparni.\n");
else {
	t = 1;
}
	while (t * t < proizvodparnih) {
		t++;
	}

	if (t * t == proizvodparnih) {
		printf("Parni\n");
	}
	else {
		printf("Nema kvadrata\n");
	}
	return 0;
}