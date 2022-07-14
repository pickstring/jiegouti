#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

//语法：struct 结构体名 {结构体成员列表}
//通过结构体创建变量的方式三种
//法1、struct 结构体名 变量名
//法2、struct 结构体名 变量名 = {成员1值， 成员2值， 。。。}
//法3、定义结构体时顺便创造变量

struct student {
	string name;
	int age;
	int score;
};

//法3
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

//结构体的值传递
void printstudent(student s) {
	cout << s.age << s.name << endl;
}

//结构体的地址传递
void printstudent2(student* s) {
	s->age = 22;
}

//结构体的地址传递法二
void printstudent3(student &s) {
	s.age = 123;
}

int main() {
	//法1
	struct student s1;
	s1.name = "张三";
	s1.age = 20;
	s1.score = 100;
	cout << s1.score << endl;
	//法1.1
	student s2;
	s2.name = "张三";
	s2.age = 20;
	s2.score = 100;
	cout << s2.score << endl;
	//法2
	struct student s3 = { "张三", 20, 100 };
	//法2.1
	student s4 = { "张三", 20, 100 };
	cout << s3.name << s4.age << endl;

	/// <summary>
	/// 结构体数组
	/// 语法：struct 结构体名 数组名[元素个数] = {{}，{}，{}，...};
	/// </summary>
	/// <returns></returns>
	student arr[3] = {
		{"张三", 20, 100},
		{"李四", 30, 100},
		{"王五", 40, 100}
	};
	cout << arr[0].name << endl;
	//for循环访问

	/// <summary>
	/// 结构体指针
	/// </summary>
	/// <returns></returns>
	student s6 = { "张张", 18, 100 };
	student* p = &s6;
	cout << s6.name << endl;
	cout << p->name;

	/// <summary>
	/// 结构体嵌套结构体
	/// 见teacher结构体
	/// </summary>
	/// <returns></returns>
	teacher t;
	t.id = 10000;
	t.stu.age = 10;
	teacher* p1 = &t;
	//访问
	cout << p1->stu.age << endl;
	//赋值
	p1->stu.age = 20;
	cout << p1->stu.age << endl;

	/// <summary>
	/// 结构体做函数参数
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
	/// 结构体中const使用场景
	/// 作用:用const来防止误操作
	/// 值传递会复制大量的数据，改成地址传递
	/// 在形参列表写： const student* s,此时s就不会改变结构体里面的数据
	/// </summary>
	/// <returns></returns>
	return 0;
}