#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//��һ��1-100֮��������г��ֶ��ٴε�����9
int main(){
	int i = 1;
	int n = 0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9){
			n += 1;
		}
      if(i/10==9){
            n += 1;
      }
	}
	printf("�ܹ����� %d �ε�9", n);
	system("pause");
	return 0;
}
//���ƣ���һ��1-100֮��������г��ֶ��ٴε�����9
//int Ninecount(int x){
//	int count = 0;
//	if (x % 10 == 9){
//		count++;
//	}if (x / 10 == 9){
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	int result = 0;
//	for (int i = 1; i < 100; ++i){
//		result = result + Ninecount(i);
//	}
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//��һ�ַ���������1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main(){
//	int i = 1;
//	double sum = 0;
//	int flag = -1;
//	for (i = 1; i <= 100; i++){
//		sum = sum +pow(-1,i+1) / i;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//�ڶ��ַ�����
//int main(){
//	double sum = 0;
//	int i = 1;
//	for (i = 1; i < 101; ++i){
//		//�������Ļ�����Ϊ����
//		if (i % 2 == 1){
//			sum += 1.0 / i;
//		}
//		else{
//			sum -= 1.0 / i;
//		}
//	}
//	printf("sum=%lf\n", sum);
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
//���ƣ��������������е�ֵ�������С��ͬ
//int main(){
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 6, 7, 8, 9, 10 };
//	int i = 1;
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); ++i){
//		int tem = a[i];
//		a[i] = b[i];
//		b[i] = tem;
//	}
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); ++i){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); ++i){
//		printf("%d ", b[i]);
//	}
//	system("pause");
//	return 0;
//}