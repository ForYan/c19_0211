#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//��һ��1-100֮��������г��ֶ��ٴε�����9
//int main(){
//	int i = 1;
//	int n = 0;
//	for (i = 1; i <= 100; i++){
//		if ((i % 10 == 9) || (i / 10 == 9)){
//			n += 1;
//		}
//	}
//	printf("�ܹ����� %d �ε�9", n);
//	system("pause");
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main(){
//	int i = 1;
//	double sum = 0;
//	int flag = -1;
//	for (i = 1; i <= 100; i++){
//		sum = sum +pow(-1,i+1) / i;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}
//�������������е����ݣ�����һ����
//int main(){
//	int str1[] = { 1, 2, 3, 4, 5 };
//	int str2[] = { 6, 7, 8, 9, 10 };
//	int str3[5] = {0};
//	for (int i = 0; i < 5; i++){
//		str3[i] = str1[i];
//		str1[i] = str2[i];
//		str2[i] = str3[i];
//	}
//	for (int i = 0; i < 5; i++){
//		printf("%d ", str1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++){
//		printf("%d ", str2[i]);
//	}
//	system("pause");
//	return 0;
//}