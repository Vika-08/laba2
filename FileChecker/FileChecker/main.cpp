#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//провряем, есть ли пробел
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
	string line;//предложение
	stringstream ss;//строковый поток

	try
	{

		if (in.is_open())
		{
			while (getline(in, line)) {//считываем по предложению
									   //если строка начинается с тире
				if (check(line)) {
					ss << line << '\n';
				}
			}
		}
		else throw exception("Не удалось открыть файл!");

		cout << ss.str();
	}

	catch (const exception &err)
	{
		cerr << err.what() << endl;
	}

	in.close();//закрываем файл			

	system("pause>>void");

}