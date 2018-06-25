
#include "Person.h"



Person::Person() :firstName("Rashkov"),
lastName("George"),
age(18),
height(180),
weight(65),
_gender(male)
{}
Person::Person(const string& firstName0, const string& lastName0, int age0, int height0,
	int weight0,gender gender0)
{
	firstName = firstName0;
	lastName = lastName0;
	age = age0;
	_gender = gender0;
	if (height0 <= 0)
		throw "Error";
	else
		height = height0;
	if (weight0 < 0)
		throw "Error";
	else
		weight = weight0;
	if (age0 < 0)
		throw "Error";
	else
		age = age0;
}
bool Person::IsAdult()
{
	return ((age > 18) ? true:false);
}

bool Person::IsLean()
{
	return ((weight < 50) ? true : false);
}

string Person::GetName() const
{
	return firstName + " " +lastName;
}
unsigned int Person::GetAge() const
{
	return age;
}
unsigned int Person::GetWeight() const
{
	return weight;
}
unsigned int Person::GetHeight() const
{
	return height;
}
gender Person::GetGender() const
{
	return _gender;
}
string Person::GetName() const
{
	return (firstName + " " + lastName);
}

Person::~Person()
{
}
