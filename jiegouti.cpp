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

struct teacher {
	int id;
	string name;
	int age;
	student stu;
};

//�ṹ���ֵ����
void printstudent(student s) {
	cout << s.age << s.name << endl;
}

//�ṹ��ĵ�ַ����
void printstudent2(student* s) {
	s->age = 22;
}

//�ṹ��ĵ�ַ���ݷ���
void printstudent3(student &s) {
	s.age = 123;
}

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

	/// <summary>
	/// �ṹ��Ƕ�׽ṹ��
	/// ��teacher�ṹ��
	/// </summary>
	/// <returns></returns>
	teacher t;
	t.id = 10000;
	t.stu.age = 10;
	teacher* p1 = &t;
	//����
	cout << p1->stu.age << endl;
	//��ֵ
	p1->stu.age = 20;
	cout << p1->stu.age << endl;

	/// <summary>
	/// �ṹ������������
	/// </summary>
	/// <returns></returns>
	student s7;
	s7.age = 11;
	printstudent(s7);
	printstudent2(&s7);
	cout << s7.age;
	cout << endl;
	printstudent3(s7);
	cout << s7.age;

	/// <summary>
	/// �ṹ����constʹ�ó���
	/// ����:��const����ֹ�����
	/// ֵ���ݻḴ�ƴ��������ݣ��ĳɵ�ַ����
	/// ���β��б�д�� const student* s,��ʱs�Ͳ���ı�ṹ�����������
	/// </summary>
	/// <returns></returns>
	return 0;
}