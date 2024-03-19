#pragma once

#include<iostream>
#include <string>
using namespace std;

class cat {
private:
	string name;
	int age;
	string breed;

public:
	friend ostream& operator<<(ostream& stream, const cat& other) {
		stream << " Имя: " << other.name << endl << "Возраст: " << other.age << endl << "Порода: " << other.breed << endl;
		return stream;
	}
	cat() : name(" "), age(0), breed(" ") {}; 

	cat  (string name1, int age1, string breed1) : name(name1), age(age1), breed(breed1) {}

};