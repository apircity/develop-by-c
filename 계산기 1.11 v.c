#include<stdio.h>
#include<math.h>
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
	printf("       menu\n");
	printf("---------------------\n");
	printf("1. ����\n2. �y��\n3. ����\n4. ������\n5. ������\n6. A�� B����\n7. ���� ������\n���ϴ� ������ �����ϼ���(1~7): ");
}
int main()
{
	double output = 0;
	int input, num1, num2; //input ���� �����ϴ� ����
	char set;
	while (1)
	{
		menu(); //�޴�ȭ�� �ҷ�����
		scanf_s("%d", &input);
		if (input == 7)
		{
			printf("���� 1���� �Է��ϼ���: ");
			scanf_s("%d", &num1);
		}
		else
		{
			printf("���� 2���� �Է��ϼ��� ex)4 10: ");
			scanf_s("%d %d", &num1, &num2);
		}
		if (input == 1)
		{
			output = add(num1, num2);
		}
		else if (input == 2)
		{
			output = sub(num1, num2);
		}
		else if (input == 3)
		{
			output = gob(num1, num2);
		}
		else if (input == 4)
		{
			output = div(num1, num2);
		}
		else if (input == 5)
		{
			output = namaji(num1, num2);
		}
		else if (input == 6)
		{
			output = pow(num1, num2);
		}
		else if (input == 7)
		{
			output = sqrt(num1);
		}
		else
		{
			printf("���� �̱��� ����Դϴ�.\n");
			continue;
		}
		printf("���� ���: %lf\n", output);

		printf("����ұ��?(y/n): ");
		getchar();
		scanf_s("%c", &set);
		if (set == 'n' || set == 'N')
			break;
		else if (set == 'y' || set == 'Y')
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