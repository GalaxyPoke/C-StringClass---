#define _CRT_SECURE_NO_WARNINGS 1
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

//int main()
//{
//	string s1 = "GalaxyPokemon";
//	string s2 = "Pokemon";
//	int pos1 = s1.rfind(s2, string::npos);
//	cout << pos1 << endl;
//
//	int pos2 = s1.rfind("Pokemon", string::npos);
//	cout << pos2 << endl;
//
//	int pos3 = s1.rfind("xyPoke", string::npos,2);
//	cout << pos3 << endl;
//
//	int pos4 = s1.rfind('P', string::npos);
//	cout << pos4 << endl;
//
//	int pos5 = s1.rfind("ab", string::npos);
//	cout << pos5 << endl;
//
//	return 0;
//}

//int main()
//{
	//string s1 = "GalaxyPokemon";
	//string s2 = "koke";
	//int pos1 = s1.find_first_of(s2, 0);//先查找s2的首字符'k'是否在s1出现，如果出现就返回首次出现的位置。如果没有出现就依次查'o','k','e'.当都没有的话就返回npos
	//cout << pos1 << endl;
	//int pos2 = s1.find_first_of('x', 0);//从0位置开始查找x，找到就返回x的位置
	//cout << pos2 << endl;

	//int pos3 = s1.find_first_of("Poke", 0);//从0位置开始查找x，找到就返回x的位置
	//cout << pos3 << endl;

	//int pos4 = s1.find_first_of("haxy", 0, 3);//从0位置开始查找'h'，没有该字符，就开始找'a',找到就返回a的位置
	//cout << pos4 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1 = "GalaxyPokemon";
//	string s2 = "Poke";
//	int pos1 = s1.find_last_of(s2, string::npos); //s1从后往前数，首先匹配的o，所以返回o字符所在的位置
//	cout << pos1 << endl;
//	int pos2 = s1.find_last_of('x', string::npos); //从npos位置开始查找x，找到就返回x的位置
//	cout << pos2 << endl;
//
//	int pos3 = s1.find_last_of("oke", string::npos); //s1从后往前数，首先匹配的o，所以返回o字符所在的位置
//	cout << pos3 << endl;
//
//	int pos4 = s1.find_last_of("haxy", string::npos, 2); //从npos位置开始查找'h'，没有该字符，就开始找'a',虽然y的位置离尾端最近，但是有2的限制，所以说只去查找haxy中的ha
//	cout << pos4 << endl;
//	return 0;
//}

//int main()
//{
//	std::string s1 = "Hello, world!";
//	std::string t1 = s1.substr(0, 5); //从0位置开始提取前五个字符，t1的值为 "Hello"
//	cout << t1 << endl;
//	std::string t2 = s1.substr(7); // 从位置 7 开始直到末尾，t2的值为 "world!"
//	cout << t2 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1 = "GalaxyPokemon";
//	string s2 = "Poke";
//	int num1 = s1.compare(s2);
//	cout << num1 << endl;
//
//	int num2 = s1.compare(6,4,s2);
//	cout << num2 << endl;
//
//	int num3 = s1.compare(6,2,s2,0,2);
//	cout << num3 << endl;
//
//	int num4 = s1.compare("Poke");
//	cout << num4 << endl;
//
//	int num5 = s1.compare(6,4,"Poke");
//	cout << num5 << endl;
//
//	int num6 = s1.compare(6,4,"Poke",2);
	//cout << num6 << endl;
//
//	return 0;
//}

//int main()
//{
//	string str("look for non-alphabetic characters...");
//
//	size_t found = str.find_first_not_of("abcdefghijklmnopqrstuvwxyz ");
//
//	if (found != string::npos)
//	{
//		cout << "The first non-alphabetic character is " << str[found];
//		cout << " at position " << found << '\n';
//	}
//
//	return 0;
//}

//int main()
//{
//  string s1 = "GalaxyPokemon";
//	string::iterator it= s1.begin();
//	//cout << it << endl; //直接输出迭代器 it 是不合适的，因为 std::string::iterator 并没有重载 << 操作符以便直接输出其指向的值。如果尝试编译和运行这段代码，它可能会失败或者输出迭代器对象的内存地址
//	cout << *it << endl;
//	return 0;
//}

//int main()
//{
//	string s1("GalaxyPokemon");
//
//	string::iterator it = s1.end();
//	cout << *(it-1) << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("GalaxyPokemon");
//
//	string::reverse_iterator it = s1.rbegin();
//	cout << *it << endl;
//
//	return 0;
//}

int main()
{
	string s1("GalaxyPokemon");

	string::reverse_iterator it = s1.rend();
	cout << *(it-1) << endl;//这里不是+1，因为是从后往前开始的，所以rend虽然是s1首字符串的前一位，但是需要-1才能指向首字符串

	return 0;
}