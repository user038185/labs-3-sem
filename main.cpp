#include <iostream>  
#include <fstream>
#include<string>
#include <cctype>
#include"Header.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    ifstream fin("Text.txt");
    string s;
    getline(fin,s);
    //cout << s << endl;
    fin.close();
    string str = read_s(s);
    //cout << str<<endl;
    char* chars = new char[str.length()];
    str.copy(chars, str.length());
    //for (int i = 0; i < str.length(); i++) {
   //     cout << chars[i];
  //  }
  //  cout << endl;
    if (str.length() % 2 != 0) {
        stack a(chars, ((str.length() + 1) / 2 - 1));
        reverse(chars, str.length());
        //a.print();
        stack b(chars, ((str.length() + 1) / 2 - 1));
        //b.print();
        cout << a.is_symmetric(b) << endl;
    }
    else {
        
        stack a(chars, (str.length() / 2));
        
        reverse(chars, str.length());
        stack b(chars, str.length() / 2);
        
        cout << a.is_symmetric(b) << endl;
    }
    delete[] chars;
}
    