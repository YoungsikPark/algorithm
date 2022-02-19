#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char arr[]) //����� ���ϵ��� �迭 ��������
{
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++) 
	{
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}

int main(void) 
{
	char A[10002] = { 0 }, B[10002] = { 0 }, res[10003] = { 0 };
	int carry = 0, i; //carry�� �޾ƿø�
	scanf("%s%s", A, B);
	reverse(A);
	reverse(B);
	//�� �� ������ ���� ����
	int len = strlen(A) > strlen(B) ? strlen(A) : strlen(B);
	for (i = 0; i < len; i++) {
		//���ڷ� ��ȯ�� �޾ƿø��� �Բ� ���Ѵ�
		int sum = A[i] - '0' + B[i] - '0' + carry;
		//A[i] �Ǵ� B[i]�� null�� ��� ���ʿ��� ������ �߻��ϹǷ�
		//0 �̻��� �� ������ ���� 0�� �ƽ�Ű �ڵ� ���� ���Ѵ�
		while (sum < 0) sum += '0';
		if (sum > 9) carry = 1; //�޾ƿø�
		else carry = 0;
		res[i] = sum % 10 + '0'; //�޾ƿø� �ϰ� ���� ���� �ڸ� ���� �ƽ�Ű�ڵ带 ����
	}

	if (carry == 1) res[len] = '1'; //���� ū �ڸ������� �޾ƿø��� �߻��ϸ� �迭�� �������� 1�� �߰�
	reverse(res); //������ �Ϸ�Ǿ����� �������� ������ ���ϴ� ������ ����
	printf("%s", res);
	return 0;
}

