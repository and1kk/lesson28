#include "Scanner.h"

int main() {
	Scanner hp;
	cout << "text:" << hp.getText()<<endl;
	string user;
	cout << "input filename: ";
	cin >> user;
	hp.scanFile(user);
	cout << "text:" << hp.getText() << endl;

}
