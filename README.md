페르마의 마지막 정리 C언어 에서 증명해 보기
==========================================
## 1.계획   
그냥 가볍게 유튜브를 보고있었는데 알고리즘에 페르마의 마지막 관련된 영상이 나와서 계획하게 됨
## 2.실행   
PC방에서 갑자기 코드가 생각나서 온라인 컴파일러로 코드 한 10분만에 짬.
근데 int 특성상 일정수 이상은 계산할수 없기 때문에 완벽하지는 않음
## 3.결론   
대략 십만 까지는 a^n+ b^n= c^n n은 3~10을 만족할수 없었다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int array[100000];
	int count = 0;
	int sum = 0;
	int max = -10000;
	
	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d", &array[i]);
	}

	int p, q;
	int r=0;
	for (p = 0; p < count; p++) {
		for (q = 0; q < (count-p); q++) {
			sum = sum + array[q+r];
			if (max < sum) max = sum;
		}
		sum = 0;
		r++;
	}

	printf("%d", max);









	//for (int i = 0; i < count; i++) {
	//	printf("%d", array[i]);
	//}
	//printf("%d", count);

	


}
