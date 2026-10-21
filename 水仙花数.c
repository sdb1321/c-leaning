#include<stdio.h>
int main()
{
	int n;
	int p;
	scanf_s("%d", &n);
	int i=1;
	int first = 1;
	int t;
	while (i <n) {
		first *= 10;
		i++;
	}
	i = first;
	while (i < first * 10) {
		int sum = 0;
		int m = i;
		while(m>0) {
			t = m % 10;
			m /= 10;
			 p = 1;
			int cut = 0;
			while (cut < n) {
				p = p * t;
				cut++;
			}
			sum += p;
		}
		if (sum == i) {
			printf("%d", i);
			printf("\n");
		}
		i++;

	}
return 0;
}