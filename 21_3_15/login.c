#include<stdio.h>

int main()
{
	int i = 0;
	char passard[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf("%s", passard);
		if ((strcmp(passard, "123456")) == 0)
		{
			printf("��¼�ɹ�\n\n");
			break;
		}
		else
			printf("�������\n\n");
	}
	if (3 == i)
		printf("��½ʧ��,�˳�����\n\n");

	return 0;
}