#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
	char c;
	printf("��Ģ������ �ұ��?(y/n): ");
	scanf_s("%c", &c);
	rewind(stdin);
	if (c == 'y')
	{
		int num1, num2;
		char op = { 0 }; //������
		printf("������ �Է��ϼ���(ex 4 + 3): ");
		scanf_s("%d %c %d", &num1, &op, &num2);
		getchar();
		if (op == '+')
			printf("%d %c %d=%d", num1, op, num2, num1 + num2);
		else if (op == '-')
			printf("%d %c %d=%d", num1, op, num2, num1 - num2);
		else if (op == '*')
			printf("%d %c %d=%d", num1, op, num2, num1 * num2);
		else if (op == '/')
			printf("%d %c %d=%d", num1, op, num2, num1 / num2);
		else
			printf("�߸��� �Է��Դϴ�");

	}
	else if (c == 'n')
	{
		printf("���� �̱��� ����Դϴ�");
		return 0;
	}
}