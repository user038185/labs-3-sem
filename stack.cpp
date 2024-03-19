#include <iostream>
#include "stack.h"
#include <Windows.h>
#include "cat.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cat cat1("Мася", 1, "персидская");
    cat cat2("Кузя", 8, "сиамский");
    cat cat3("Вася", 13, "британец");
    cat cat4("Мурка", 4, "русская голубая");

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