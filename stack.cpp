#include <iostream>
#include "stack.h"
#include <Windows.h>
#include "cat.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cat cat1("����", 1, "����������");
    cat cat2("����", 8, "��������");
    cat cat3("����", 13, "��������");
    cat cat4("�����", 4, "������� �������");

    Stack<cat> cats;

    cats.addEl(cat1);
    cats.addEl(cat2);
    cats.addEl(cat3);
    cats.addEl(cat4);

    
        cout << cats.returnEl();
        cats.deleteEl();
        cout << cats.returnEl();
        cats.deleteEl();
        cout << cats.returnEl();
        cats.deleteEl();
        cout << cats.returnEl();

    

}