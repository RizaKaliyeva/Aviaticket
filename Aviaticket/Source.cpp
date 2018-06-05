#include "Orders.h"
#include <fstream>

int main() {

	Orders OList;
	Order tmp;
	Date d(15,06,2018);
	ifstream in_file("Orders.txt");
	if (!in_file) {
		cerr << "file open error" << endl;
	}
	else {
		while (!in_file.eof()) {
			in_file >> tmp;
			OList.Add(tmp);
		}
	}
	//OList.Delete();
	OList.printAll();

	cout << endl;
	OList.printOrderByDate(d);
	system("pause");
	return 0;
}