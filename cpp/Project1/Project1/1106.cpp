#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

//int main() {
//	vector<int> v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//
//	v[0] = 10;
//	int m = v[2];
//	v.at(2) = 5;
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//	cout << endl;
//}+ �ִ밪 ���ϱ�

//int main() {
//	vector<string> sv;
//	string name;
//
//	cout << "�̸��� 5�� �Է�" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << i + 1 << ">>";
//		getline(cin, name);
//		sv.push_back(name);
//	}
//	name = sv.at(0);
//	for (int i = 1; i < sv.size(); i++) {
//		if (name < sv[i])
//			name = sv[i];
//	}
//	cout << "�������� ���� �ڿ� ������ �̸���" << name << endl;
//}

//int main() {
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	vector<int>::iterator it;
//
//	for (it = v.begin(); it != v.end(); it++) {
//		int n = *it;
//		n = n * 2;
//		*it = n;
//	}
//	for (it = v.begin(); it != v.end(); it++)
//		cout << *it << ' ';
//	cout << endl;
//}

//int main() {
//	map<string, string>dic;
//
//	dic.insert(make_pair("love", "���"));
//	dic.insert(make_pair("apple", "���"));
//	dic["cherry"] = "����";
//
//	cout << "����� �ܾ� ����" << dic.size() << endl;
//	string eng;
//	while (true) {
//		cout << "ã�� ���� �ܾ�";
//		getline(cin, eng);
//		if (eng == "exit")
//			break;
//
//		if (dic.find(eng) == dic.end())
//			cout << "����" << endl;
//		else
//			cout << dic[eng] << endl;
//	}
//	cout << "�����մϴ�..." << endl;
//}

//int main() {
//	vector<int>v;
//
//	cout << "5���� ������ �Է��ϼ���>>";
//	for (int i = 0; i < 5; i++) {
//		int n;
//		cin >> n;
//		v.push_back(n);
//	}
//	sort(v.begin(), v.end());
//
//	vector<int>::iterator it;
//
//	for (it = v.begin(); it != v.end(); it++)
//		cout << *it << ' ';
//	cout << endl;
//}

//int square(int x) { return x * x; }
//
//int main() {
//	auto c = 'a';
//	auto pi = 3.14;
//	auto ten = 10;
//	auto* p = &ten;
//	cout << c << " " << pi << " " << ten << " " << *p << endl;
//
//	auto ret = square(3);
//	cout << *p << " " << ret << endl;
//
//	vector<int> v = { 1,2,3,4,5 };
//	vector<int>::iterator it;
//	for (it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//}

//int main() {
//	[](int x, int y) { cout << "����" << x + y; }(2, 3);
//}

//int main() {
//	auto love = [](string a, string b) {
//		cout << a << "����" << b << "�� ����" << endl;
//		};
//	love("��", "��");
//	love("�ø�", "����");
//
//}

