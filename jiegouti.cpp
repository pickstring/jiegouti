#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

//�﷨��struct �ṹ���� {�ṹ���Ա�б�}
//ͨ���ṹ�崴�������ķ�ʽ����
//��1��struct �ṹ���� ������
//��2��struct �ṹ���� ������ = {��Ա1ֵ�� ��Ա2ֵ�� ������}
//��3������ṹ��ʱ˳�㴴�����

struct student {
	string name;
	int age;
	int score;
};

//��3
struct student1 {
	string name;
	int age;
	int score;
} s5;

int main() {
	//��1
	struct student s1;
	s1.name = "����";
	s1.age = 20;
	s1.score = 100;
	cout << s1.score << endl;
	//��1.1
	student s2;
	s2.name = "����";
	s2.age = 20;
	s2.score = 100;
	cout << s2.score << endl;
	//��2
	struct student s3 = { "����", 20, 100 };
	//��2.1
	student s4 = { "����", 20, 100 };
	cout << s3.name << s4.age << endl;

	/// <summary>
	/// �ṹ������
	/// �﷨��struct �ṹ���� ������[Ԫ�ظ���] = {{}��{}��{}��...};
	/// </summary>
	/// <returns></returns>
	student arr[3] = {
		{"����", 20, 100},
		{"����", 30, 100},
		{"����", 40, 100}
	};
	cout << arr[0].name << endl;
	//forѭ������

	/// <summary>
	/// �ṹ��ָ��
	/// </summary>
	/// <returns></returns>
	student s6 = { "����", 18, 100 };
	student* p = &s6;
	cout << s6.name << endl;
	cout << p->name;
	return 0;
}