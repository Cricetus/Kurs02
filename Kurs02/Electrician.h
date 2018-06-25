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
	bool JobApplication(Object* o);//������ ������ �� ������
	void ChangeObject(Object* o);//������ ������
	unsigned int GetStage()const;
	unsigned int GetRank()const;
	Object* GetObject();
	bool operator == (const Electrician& e); //�������� ���������
	friend bool operator == (const Electrician& e1, const Electrician& e2); //�������� ���������� ������� ������,������ ��� ������� 
																		//�������� ������
	void BeHired(const Object& o);//������,���������������� � ��������� ��������� ��� ����� �� ������ � ���������� �����. 
	void BeFired();
	virtual ~Electrician();
};



