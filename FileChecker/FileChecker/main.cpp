#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//��������, ���� �� ������
bool check(const string& inp) {
	for (int i = 0; i < inp.size(); ++i) {
		if (inp[i] != ' ') {
			return inp[i] == '-';
		}
	}
	return false;
}
int main() {
	setlocale(LC_ALL, "");
	ifstream in("in.txt");
	string line;//�����������
	stringstream ss;//��������� �����
	while (getline(in, line)) {//��������� �� �����������
							   //���� ������ ���������� � ����
		if (check(line)) {
			ss << line << '\n';
		}
	}
	cout << ss.str();
	in.close();//��������� ����			

	system("pause>>void");

}