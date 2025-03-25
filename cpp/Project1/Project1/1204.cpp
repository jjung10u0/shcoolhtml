#include <iostream>
#include <fstream>
using namespace std;

//void showStreamState(ios& stream) {
//	cout << "eof()" << stream.eof() << endl;
//	cout << "fuil()" << stream.fail() << endl;
//	cout << "bad()" << stream.bad() << endl;
//	cout << "good()" << stream.good() << endl;
//}
//
//int main() {
//	const char* noExisFile = "c:||temp"
//}

//long getFileSize(ifstream& fin) {
//	fin.seekg(0, ios::end);
//	long length = fin.tellg();
//	return length;
//}
//
//int main() {
//	const char* file = "c:||windows||system.ini";
//
//	ifstream fin(file);
//	if (!fin) {
//		cout << file << "열기오류" << endl;
//		return 0;
//	}
//	cout << file << "의 크기는" << getFileSize(fin);
//	fin.close();
//}

//int getExp(int base, int exp) {
//	int value = 1;
//	for (int n = 0; n < exp; n++)
//		value = value * base;
//	return value;
//}
//int main() {
//	int v = getExp(2, 3);
//	cout << "2의 3승은 " << v << "입니다." << endl;
//	int e = getExp(2, 3);
//	cout << "2의 3승은 " << e << "입니다." << endl;
//}

//bool getExp(int base, int exp, int& ret) {
//	if (base <= 0 || exp <= 0) {
//		return false;
//	}
//	int value = 1;
//	for (int n = 0; n < exp; n++)
//		value = value * base;
//	ret = value;
//	return value;
//}
//
//int main() {
//	int v = getExp(2, 3, v);
//	cout << "2의 3승은 " << v << "입니다." << endl;
//	int e = getExp(2, 3, e);
//	cout << "2의 3승은 " << e << "입니다." << endl;
//}

//int main() {
//	int n, sum, average;
//	while (true) {
//		cout << "합을 입력하세요";
//		cin >> sum;
//		cout << "인원수를 입력하세요>>";
//		cin >> n;
//		try {
//			if (n <= 0)
//				throw n;
//			else
//				average = sum / n;
//		}
//		catch(int x) {
//			cout << "예외 발생!" << x << "으로 나눌 수 없음" << endl;
//			average = 0;
//			cout << endl;
//			continue;
//		}
//		cout << "평균=" << average << endl << endl;
//	}
//
//}