
#include "Electrician.h"


Electrician::Electrician():object(nullptr),stage(0),rank(1)//создаем безработного выпускника уч. заведения
{
	
}

Electrician::Electrician(Object* o, int _stage, int _rank) : object(o),stage(_stage),rank(_rank)
{
}

bool Electrician::JobApplication(Object * o)
{
	return o->ReceiveCV(*this);//заставляем объект рассмотреть резюме
}

void Electrician::ChangeObject(Object * o)
{
	if (JobApplication(o)) { //подаем резюме на другой завод
		object->Fire(*this);//этого работника увольняют в случае одобренния
		o->Hire(*this);
	}    //P.S. Не будем уточнять реалии,мы делаем идеальный случай,
							   //в котором Большой Брат не следит за нами и менеджмент объкта
							   // не будет увальнять тех кто хотя бы попытается сделать намек на побег

}




unsigned int Electrician::GetStage() const
	{
		return stage;
	}

	unsigned int Electrician::GetRank() const
{
	return rank;
}

Object* Electrician::GetObject()
{
	return object;
}

bool Electrician::operator==(const Electrician& e) //Реализация унарного оператора сравнения
{
	return (this->firstName == e.firstName
		&& this->lastName == e.lastName
		&&this->age == e.age && this->height == e.height
		&& this->weight == e.weight && this->_gender == e._gender
		&& this->object == e.object && this->stage == e.stage
		&& this->rank == e.rank
		);

}

void Electrician::BeHired(const Object & o)
{
	*object = o;
}

void Electrician::BeFired()
{
	object = nullptr;
}

Electrician::~Electrician()
{
}
