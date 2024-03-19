#include <iostream>
#include <string>
#include"Header.h"
using namespace std;

Node* createNode(string word) {
    Node* newNode = new Node;
    newNode->word = word;
    newNode->freq = 1;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, string word) {
    if (root == nullptr) {
        return createNode(word);
    }

    if (word < root->word) {
        root->left = insertNode(root->left, word);
    }
    else if (word > root->word) {
        root->right = insertNode(root->right, word);
    }
    else {
        root->freq++;
    }

    return root;
}

void printList(Node* root) {
    if (root != nullptr) {
        printList(root->left);
        cout << root->word << ": \t" << root->freq <<endl;
        printList(root->right);
    }
}

void printTree(Node* root, int level) {
    if (root == nullptr) {
        return;
    }

    printTree(root->left, level + 1);

    for (int i = 0; i < level; i++) {
        cout << "\t";
    }

    cout << root->word << endl;

    printTree(root->right, level + 1);
}