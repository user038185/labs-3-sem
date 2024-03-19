#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    Node* root = nullptr;
    ifstream fin("worlds.txt");
    string word;
    if (fin.is_open()) {
        while (fin >> word) {
            root = insertNode(root, word);
        }
        fin.close();
        printList(root);
        printTree(root, 0);
    }
    else {
        cout << "Файл не открылся." << endl;
    }
}