#include <iostream>
#include <cstring>
using namespace std;

//int main() {
//	cout.put('H');
//	cout.put('i');
//	cout.put(33);
//	cout.put('\n');
//
//	cout.put('C').put('+').put('+').put(' ');
//
//	char str[] = "I love programing";
//	cout.write(str, 6);
//}

//void get1() {
//	cout << "cin.get()로 <Enter> 키까지 입략 받고 출력합니다.>>";
//	int ch;
//	while ((ch = cin.get()) != EOF){
//		cout.put(ch);
//	if (ch == '\n')
//		break;
//	}
//}
//void get2() {
//	cout << "cin.get(char&)로 <Enter> 키까지 입력받고 출력합니다.>>";
//	char ch;
//	while (true) {
//		cin.get(ch);
//		if (cin.eof()) break;
//		cout.put(ch);
//		if (ch == '\n')
//			break;
//	}
//}
//int main() {
//	get1();
//	get2();
//}

//int main() {
//	char cmd[80];
//	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
//	while (true) {
//		cout << "종료하려면 exit을 입력하세요>>";
//		cin.get(cmd, 80);
//		if (strcmp(cmd, "exit") == 0) {
//			cout << "프로그램을 종료합니다....";
//			return 0;
//		}
//		else
//			cin.ignore(1);
//	}
//}

//int main() {
//	char line[80];
//	cout << "cin.getline() 함수로 라인을 읽습니다." << endl;
//	cout << "exit을 입략하면 루프가 끝납니다." << endl;
//	int no = 1;
//	while (true) {
//		cout << "라인" << no << ">>";
//		cin.getline(line, 80);
//		if (strcmp(line, "exit") == 0)
//			break;
//		cout << "echo-->";
//		cout << line << endl;
//		no++;
//	}
//}

