#include<stdio.h>

int main()
{
	int i = 0;
	char passard[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", passard);
		if ((strcmp(passard, "123456")) == 0)
		{
			printf("µÇÂ¼³É¹¦\n\n");
			break;
		}
		else
			printf("ÃÜÂë´íÎó\n\n");
	}
	if (3 == i)
		printf("µÇÂ½Ê§°Ü,ÍË³ö³ÌĞò\n\n");

	return 0;
}