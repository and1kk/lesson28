#include "printer.h"

void printer::printFile(string text, string filename, int copy)
{
	for (int i = 0; i < copy; i++)
	{
		ofstream file("copy_" + to_string(i) + "_" + filename);
		if (file.is_open()) {
			file << text;
			file.close();
			cout << "Text was printed\n";
		}
		else {
			cerr << "error";
		}
	}
}
