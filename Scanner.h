#pragma once
#include <iostream>
#include<string>
#include<fstream>

using namespace std;

class Scanner
{
protected:
	string text;

public:
	Scanner();
	void setText(string text);
	string getText()const;
	void scanFile(string filename);


};

