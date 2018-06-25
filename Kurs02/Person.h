#pragma once

#include <iostream>
#include <string>
#include "gender.h"
using namespace std;
using std::cin;
using std::cout;
using std::string;


class Person
{	protected:
	string firstName;
	string lastName;
	unsigned int age;
	unsigned int height;
	unsigned int weight;
	gender _gender;
	
public:
	Person();
	Person(const string& firstName0, const string& lastName0, int age0, int height0,
		int weight0, gender gender0);
	bool IsAdult();//Методы из варианта
	bool IsLean();//....
	string GetName()const;
	unsigned int GetAge() const;
	unsigned int GetWeight() const;
	unsigned int GetHeight() const;
	gender GetGender() const;
	virtual ~Person();
};

