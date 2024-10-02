#include "Scanner.h"

Scanner::Scanner()
{
    text = "empty";
}

void Scanner::setText(string text)
{
    this->text = text;
}

string Scanner::getText() const
{
    return text;
}

void Scanner::scanFile(string filename)
{
    ifstream file(filename);
    if (file.is_open()) {
        string tmp;
        text = "";
        while (!file.eof()) {
            getline(file,tmp);
            text += tmp + "\n";


        }
        file.close();
        cout << "text was scaned" << endl;
    
    }
    else {
        cout << "Error" << endl;

    }

}
