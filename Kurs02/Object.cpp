
#include "Object.h"


Object::Object()
{
}

bool Object::IsPresentInCL(const Electrician& e)//ћетод,провер€ющий,есть ли 
{
	for (const auto& el : CL)
	{
		if(el == e) return true;
	}
	return false;
}

void Object::ProspectivesOverview() const //ћетод из задани€,выводит список тех рабочих,которые 
										 //прошли интервью.
{
	for (auto& e : CL){
		cout<<e.GetName() << endl;
	}
}

bool Object::ReceiveCV(const Electrician& e)
{
	if (e.GetStage() >= req_exp) {
		if (e.GetRank() >= req_rank) {
			if (!IsPresentInCL(e)) { //≈сли соответствует требовни€м 
				CL.push_back(e);					//и его еще нет в списке кандидатов,добавл€ем 
				return true;						//его туда 
			} return true;
			
		} else {
			cout << "Incefitient skills";
			return false;
		}
	} else {
		"Incefitient experience";
		return false;
	}
}

bool Object::Hire(const Electrician&  e) //ƒанные методы добавл€ют и удал€ют электриков из векторов рабочих,
													//при этом присваивают указатель на этот объект рабочему 
{	
	if (IsPresentInCL(e)) { //
		workers.push_back(e);
		e.BeHired(this);
		return true;
	}
	
	return false;
}

void Object::Fire(const Electrician & e)
{
	e.BeFired();
	for (auto el : workers)
	{
		if (el == e) workers.erase(std::find(workers.begin(), workers.end(), e));
	}
}


Object::~Object()
{
}
