#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double getRandom(double min, double max);

int main() {

	int min = -1;
	int max = 1;	
	int count = 0;

	double r = 1;

	double x = 0;
	double y = 0;

	srand((unsigned int)time(NULL));

	for (int n = 0; n < 100000000; n++) {
		x = getRandom(min, max);
		y = getRandom(min, max);
		
		double f = (x * x) + (y * y) - (r * r);
		if (f < 0) {
			count++;
		}
		if (n == 10) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 100) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 1000) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 10000) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 100000) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 1000000) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 10000000) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
		else if (n == 100000000) {
			printf("������ ���� : %d        ����ī���� ������� ���� �� : %lf\n", n, ((double)count / (double)n) * (double)4);
		}
	}
	return 0;
}

double getRandom(double min, double max) {
	double num = (double)rand() / (double)RAND_MAX;
	num = min + (max - min) * num;
	return num;
}


