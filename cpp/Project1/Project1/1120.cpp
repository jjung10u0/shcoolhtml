#include<iostream>
#include<iomanip>
using namespace std;

//int main() {
//	cout << 30 << endl;
//
//	cout.unsetf(ios::dec);
//	cout.setf(ios::hex);
//	cout << 30 << endl;
//
//	cout.setf(ios::showbase);
//	cout << 30 << endl;
//
//	cout.setf(ios::uppercase);
//	cout << 30 << endl;
//
//	cout.setf(ios::dec | ios::showpoint);
//
//	cout << 23.5 << endl;
//
//	cout.setf(ios::scientific);
//	cout << 23.5 << endl;
//
//	cout.setf(ios::showpos);
//	cout << 23.5;
//
//}

//void showidth() {
//	cout.width(10);
//	cout << "Hello" << endl;
//	cout.width(5);
//	cout << 12 << endl;
//	cout << "Lorea/" << "Seoul" << "City" << endl;
//}
//
//int main() {
//	showidth();
//	cout << endl;
//
//	cout.fill('^');
//	showidth();
//	cout << endl;
//
//	cout.precision(5);
//	cout << 11. / 3. << endl;
//}

//int main() {
//	cout << hex << showbase << 30 << endl;
//	cout << dec << showpos << 100 << endl;
//	cout << true << ' ' << false << endl;
//	cout << boolalpha << true << ' ' << false << endl;
//}

//int main() {
//	cout << showbase;
//
//	cout << setw(8) << "Number";
//	cout << setw(10) << "Octal";
//	cout << setw(10) << "Hexa" << endl;
//
//	for (int i = 0; i < 50; i += 5) {
//		cout << setw(8) << setfill(',') << dec << i;
//		cout << setw(10) << setfill(' ') << oct << i;
//		cout << setw(10) << setfill(' ') << hex << i << endl;
//	}
//}

//class Book {
//	string title;
//	string press;
//	string author;
//public:
//	Book(string title = "", string press = "", string author = ""){
//		this->title = title;
//		this->press = press;
//		this->author = author;
//	}
//	friend ostream& operator << (ostream& stream, Book b);
//};
//	
//ostream& operator << (ostream& stream, Book b) {
//	stream << b.title << "," << b.press << "," << b.author;
//	return stream;
//}
//int main() {
//	Book book("������ �����", "�ѱ����ǻ�", "����������");
//	cout << book;
//}

//class Point {
//	int x, y;
//public:
//	Point(int x = 0, int y = 0) {
//		this->x = x;
//		this->y = y;
//	}
//	friend istream& operator >> (istream& ins, Point& a); //���⸦ �߿��ϰ� ����
//	friend ostream& operator << (ostream& stream, Point a);
//};
//
//istream& operator >> (istream& ins, Point& a) {
//	cout << "x��ǥ>>";
//	ins >> a.x;
//	cout << "y��ǥ>>";
//	ins >> a.y;
//	return ins;
//}
//
//ostream& operator << (ostream& stream, Point a) {
//	stream << "(" << a.x << "," << a.y << ")";
//	return stream;
//}
//int main() {
//	Point p;
//	cin >> p;
//	cout << p;
//}

//ostream& fivestar(ostream& outs) {
//	return outs << "*****";
//}
//
//ostream& rigtharrow(ostream& outs) {
//	return outs << "---->";
//}
//ostream& beep(ostream& outs) {
//	return outs << '|a';
//}
//int main() {
//	cout << "���� �︳�ϴ�" << beep << endl;
//	cout << "c" << rigtharrow << "C++" << rigtharrow << "Java";
//	cout << "Visul" << fivestar << "C++" << endl;
//}

//istream& qusetion(istream& ins) {
//	cout << "";
//	return ins;
//}
//
//int main() {
//	string answer;
//	cin >> qusetion >> answer;
//	cout << "" << answer << "" << endl;
//}