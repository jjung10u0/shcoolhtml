#include <iostream>
#include <fstream>
using namespace std;

//int main() {
//	char name[10], dept[20];
//	int sid;
//
//	cout << "이름>>";
//	cin >> name;
//	cout << "학번(숫자로)>>";
//	cin >> sid;
//	cout << "학과>>";
//	cin >> dept;
//
//	ofstream fout("c:||temp||student.txt");
//	if (!fout) {
//		cout << "c:||temp||student.txt 파일을 찾을 수 없다";
//		return 0;
//	}
//
//	fout << name << endl;
//	fout << sid << endl;
//	fout << dept << endl;
//
//	fout.close();
//}

//int main() {
//	ifstream fin;
//	fin.open("c:||temp||student.txt");
//	if (!fin) {
//		cout << "파일을 열 수 없다.";
//		return 0;
//	}
//	char name[10], dept[20];
//	int sid;
//
//	fin >> name;
//	fin >> sid;
//	fin >> dept;
//
//	cout << name << endl;
//	cout << sid << endl;
//	cout << dept << endl;
//
//	fin.close();
//}

//int main() {
//	const char* file = "c:||windows||systrm.ini";
//	ifstream fin(file);
//	if (!fin) {
//		cout << file << "열기오류" << endl;
//		return 0;
//	}
//	int count = 0;
//	int c;
//	while ((c = fin.get()) != EOF) {
//		cout << (char)c;
//		count++;
//	}
//	cout << "읽은 바이트 수는" << count << endl;
//	fin.close();
//}

//int main() {
//	const char* firstFile = "c:||temp|||student.txt";
//	const char* seconFile = "c:||windows||system.ini";
//
//	fstream fout(firstFile, ios::out | ios::app);
//	if (!fout) {
//		cout << firstFile << "열기오류";
//		return 0;
//	}
//
//	fstream fin(seconFile, ios::in);
//	if (!fin) {
//		cout << seconFile << "열기 오류";
//		return 0;
//	}
//	int c;
//	while ((c = fin.get()) != EOF) {
//		fout.put(c);
//	}
//	fin.close();
//	fout.close();
//}

//int main() {
//	ifstream fin("c:||windows||system.ini");
//	if (!fin) {
//		cout << "c:||windows||system.ini 열기 실패" << endl;
//		return 0;
//	}
//	char buf[81];
//	while (fin.getline(buf, 81)) {
//		cout << buf << endl;
//	}
//	fin.close();
//}

//int main() {
//	const char* file = "c:||windows||system,ini";
//
//	ifstream fin;
//	fin.open(file, ios::in | ios::binary);
//	if (!fin) {
//		cout << "파일 열기 오류";
//		return 0;
//	}
//	int count = 0;
//	char s[32];
//	while (!fin.eof()) {
//		fin.read(s, 32);
//		int n = fin.gcount();
//		cout.write(s, n);
//		count += n;
//	}
//	cout << "읽은 바이트 수는" << count << endl;
//	fin.close();
//}

//int main() {
//	const char* file = "c:||temp||data.dat";
//
//	ofstream fout;
//	fout.open(file, ios::out | ios::binary);
//	if (!fout) {
//		cout << "파일 열기 오류";
//		return 0;
//	}
//	int n[] = { 0,1,2,3,4,5,6,7,8,9 };
//	double d = 3.15;
//	fout.write((char*)n, sizeof(n));
//	fout.write((char*)(&d), sizeof(d));
//	fout.close();
//
//	for (int i = 0; i < 10; i++) n[i] = 99;
//	d = 8.15;
//
//	ifstream fin(file, ios::in);
//	if (!fin) {
//		cout << "파일 열기 오류";
//		return 0;
//	}
//	fin.read((char*)n, sizeof(n));
//	fin.read((char*)(&d), sizeof(d));
//
//	for (int i = 0; i < 10; i++)
//		cout << n[i] << ' ';
//	cout << endl << d << endl;
//	fin.close();
//}

