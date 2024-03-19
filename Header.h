#pragma once
#include<string>
struct Node {
    std::string word;
    int freq;
    Node* left;
    Node* right;
};
Node* createNode(std::string word);
Node* insertNode(Node* root, std::string word);
void printList(Node* root);
void printTree(Node* root, int level);