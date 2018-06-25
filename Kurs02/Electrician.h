#pragma once
#include "Object.h"
#include "Person.h"
class Electrician : public Person
{
	
	unsigned int stage;
	unsigned int rank;
	Object* object;
public:
	Electrician();
	Electrician(Object* o,int stage, int rank);
	bool JobApplication(Object* o);//Подаем заявку на работу
	void ChangeObject(Object* o);//Меняем объект
	unsigned int GetStage()const;
	unsigned int GetRank()const;
	Object* GetObject();
	bool operator == (const Electrician& e); //оператор сравнения
	friend bool operator == (const Electrician& e1, const Electrician& e2); //пришлось опредедить снаружи класса,потому что вызвало 
																		//странную ошибку
	void BeHired(const Object& o);//Методы,инициализирующие и очищающие указатель при преме на работу и увольнении соотв. 
	void BeFired();
	virtual ~Electrician();
};



