#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{//배열과 포인터
	int aList[5] = { 40, 20 ,50, 30, 10 };//0x00F8F8EC
	//int* paList = aList+1; // aList[1]번을 뜻한다.
	//paList[0] = 100;
	//printf("%d\n", aList[1]);

	////paList 주소 0x00F8F8E0 = ec f8 f8 00


	////paList + 1;		//paList기준주소 + 정수(옵셋) -> 상대 주소를 계산하는것  =  (4byte만큼 늘어난다)
	////*(paList + 1);	//int형 변수로 지정된다.

	////*(paList + 1) = 5;//1
	////paList[1] = 5;//2
	//////1, 2 는 같은말이다.

	////printf("%p\n", aList);
	////printf("%p\n", aList+1);
	////printf("%p\n", &aList[1]);


	//aList싹다 더한다고 한다면
	char szBuffer[10] = { "HelloWorl" };
	int nTotal = 0;

	for (int i = 0; i < 5; i++)
	{
		nTotal += aList[i];
		printf("%d\n", nTotal);
	}


	nTotal = 0;
	int* pnData = aList;
	while (pnData < aList + 5)
	{
		nTotal += *pnData;
		pnData++;
	}
	printf("%d\n", nTotal);

	putchar('\n');
	putchar('\n');
	printf("Length : %d\n", strlen(szBuffer));
	return 0;
}