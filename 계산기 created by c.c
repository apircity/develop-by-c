#include<stdio.h>
int add(int num1, int num2) //���� �Լ� ����
{
	return num1 + num2;
}
int sub(int num1, int num2) //�y��
{
	return num1 - num2;
}
int gob(int num1, int num2) //����
{
	return num1 * num2;
}
double div(double num1, double num2) //������
{
	return num1 / num2;
}
int namaji(int num1, int num2) //������ ����
{
	return num1 % num2;
}
void menu();
int add(int num1, int num2);
int sub(int num1, int num2);
int gob(int num1, int num2); 
double div(double num1, double num2);
int namaji(int num1, int num2);

void menu() //ù ���� ȭ��
{
	printf("---------------------\n");
	printf("menu\n");
	printf("---------------------\n");
	printf("1. ����\n2. �y��\n3. ����\n4. ������\n5. ������\n���ϴ� ������ �����ϼ���(1~5): ");
}
int main()
{
	int input, num1, num2; //input ���� �����ϴ� ����
	char set;
	while (1)
	{
		menu(); //�޴�ȭ�� �ҷ�����
		scanf_s("%d", &input);
		printf("���� 2���� �Է��ϼ��� ex)4 10: ");
		scanf_s("%d %d", &num1, &num2);

		if (input == 1)
		{
			printf("���� ���: %d\n", add(num1, num2));
		}
		else if (input == 2)
		{
			printf("���� ���: %d\n", sub(num1, num2));
		}
		else if (input == 3)
		{
			printf("���� ���: %d\n", gob(num1, num2));
		}
		else if (input == 4)
		{
			printf("���� ���: %f\n", div(num1, num2));
		}
		else if (input == 5)
		{
			printf("���� ���: %d\n", namaji(num1, num2));
		}
		else
			printf("���� �̱��� ����Դϴ�.\n");
		printf("����ұ��?(y/n): ");
		getchar();
		scanf_s("%c", &set);
		if (set == 'n')
			break;
		else if (set == 'y')
			continue;
		else
		{
			printf("�߸��� �Է��Դϴ�\n");
			printf("�ٽ� �Է��ϼ���\n");
			printf("����ұ��?(y/n): ");
			getchar();
			scanf_s("%c", &set);
		}
	}
	return 0;
}

