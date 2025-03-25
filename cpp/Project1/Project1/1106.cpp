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
//}+ 최대값 구하기

//int main() {
//	vector<string> sv;
//	string name;
//
//	cout << "이름을 5개 입력" << endl;
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
//	cout << "사전에서 가장 뒤에 나오는 이름은" << name << endl;
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
//	dic.insert(make_pair("love", "사랑"));
//	dic.insert(make_pair("apple", "사과"));
//	dic["cherry"] = "제리";
//
//	cout << "저장된 단어 개수" << dic.size() << endl;
//	string eng;
//	while (true) {
//		cout << "찾고 싶은 단어";
//		getline(cin, eng);
//		if (eng == "exit")
//			break;
//
//		if (dic.find(eng) == dic.end())
//			cout << "없음" << endl;
//		else
//			cout << dic[eng] << endl;
//	}
//	cout << "종료합니다..." << endl;
//}

//int main() {
//	vector<int>v;
//
//	cout << "5개의 정수를 입력하세요>>";
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
//	[](int x, int y) { cout << "합은" << x + y; }(2, 3);
//}

//int main() {
//	auto love = [](string a, string b) {
//		cout << a << "보다" << b << "가 좋아" << endl;
//		};
//	love("돈", "너");
//	love("냉면", "만두");
//
//}

