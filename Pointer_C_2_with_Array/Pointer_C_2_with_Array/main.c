#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{//�迭�� ������
	int aList[5] = { 40, 20 ,50, 30, 10 };//0x00F8F8EC
	//int* paList = aList+1; // aList[1]���� ���Ѵ�.
	//paList[0] = 100;
	//printf("%d\n", aList[1]);

	////paList �ּ� 0x00F8F8E0 = ec f8 f8 00


	////paList + 1;		//paList�����ּ� + ����(�ɼ�) -> ��� �ּҸ� ����ϴ°�  =  (4byte��ŭ �þ��)
	////*(paList + 1);	//int�� ������ �����ȴ�.

	////*(paList + 1) = 5;//1
	////paList[1] = 5;//2
	//////1, 2 �� �������̴�.

	////printf("%p\n", aList);
	////printf("%p\n", aList+1);
	////printf("%p\n", &aList[1]);


	//aList�ϴ� ���Ѵٰ� �Ѵٸ�
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