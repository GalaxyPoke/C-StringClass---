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
	//int pos1 = s1.find_first_of(s2, 0);//�Ȳ���s2�����ַ�'k'�Ƿ���s1���֣�������־ͷ����״γ��ֵ�λ�á����û�г��־����β�'o','k','e'.����û�еĻ��ͷ���npos
	//cout << pos1 << endl;
	//int pos2 = s1.find_first_of('x', 0);//��0λ�ÿ�ʼ����x���ҵ��ͷ���x��λ��
	//cout << pos2 << endl;

	//int pos3 = s1.find_first_of("Poke", 0);//��0λ�ÿ�ʼ����x���ҵ��ͷ���x��λ��
	//cout << pos3 << endl;

	//int pos4 = s1.find_first_of("haxy", 0, 3);//��0λ�ÿ�ʼ����'h'��û�и��ַ����Ϳ�ʼ��'a',�ҵ��ͷ���a��λ��
	//cout << pos4 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1 = "GalaxyPokemon";
//	string s2 = "Poke";
//	int pos1 = s1.find_last_of(s2, string::npos); //s1�Ӻ���ǰ��������ƥ���o�����Է���o�ַ����ڵ�λ��
//	cout << pos1 << endl;
//	int pos2 = s1.find_last_of('x', string::npos); //��nposλ�ÿ�ʼ����x���ҵ��ͷ���x��λ��
//	cout << pos2 << endl;
//
//	int pos3 = s1.find_last_of("oke", string::npos); //s1�Ӻ���ǰ��������ƥ���o�����Է���o�ַ����ڵ�λ��
//	cout << pos3 << endl;
//
//	int pos4 = s1.find_last_of("haxy", string::npos, 2); //��nposλ�ÿ�ʼ����'h'��û�и��ַ����Ϳ�ʼ��'a',��Ȼy��λ����β�������������2�����ƣ�����˵ֻȥ����haxy�е�ha
//	cout << pos4 << endl;
//	return 0;
//}

//int main()
//{
//	std::string s1 = "Hello, world!";
//	std::string t1 = s1.substr(0, 5); //��0λ�ÿ�ʼ��ȡǰ����ַ���t1��ֵΪ "Hello"
//	cout << t1 << endl;
//	std::string t2 = s1.substr(7); // ��λ�� 7 ��ʼֱ��ĩβ��t2��ֵΪ "world!"
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
//	//cout << it << endl; //ֱ����������� it �ǲ����ʵģ���Ϊ std::string::iterator ��û������ << �������Ա�ֱ�������ָ���ֵ��������Ա����������δ��룬�����ܻ�ʧ�ܻ������������������ڴ��ַ
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
	cout << *(it-1) << endl;//���ﲻ��+1����Ϊ�ǴӺ���ǰ��ʼ�ģ�����rend��Ȼ��s1���ַ�����ǰһλ��������Ҫ-1����ָ�����ַ���

	return 0;
}