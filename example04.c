#include <stdio.h>

//�Լ��� �ڱ� �ڽ��� ����(����)�� ����
//�����͸� ���� �ޱ� ���� �Ű�����(parameter) �����ؾߵ�

int get_area(int width,int height) { //main �ȿ� �ִ� width, height�� �̸��� ��������. ���� ���� �ƴ�~! ���� �ѱ涩 �ڷ����� ���� �ϸ� ��
	int area;
	area = width * height;
	// ����� main���� �ǵ�����
	return area;
}

void main(void) {
	//�簢�� ���� ���ϱ�
	int width = 10;
	int height = 20;
	int area; //����

	// ������(�μ�)�� �Լ��� ����
	// �Լ� ȣ�� �� �ٽ� ���� ��������
	area=get_area(width, height);
	printf("�簢�� ���� : %d\n", area);

}