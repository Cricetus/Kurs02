#pragma once
#include "Person.h"
#include "Job.h"
class Worker : public Person
{
	string factory;
	string level;
	int payment;
public:
	Worker();
	Worker(string &zavod0, string &level0, int payment0);
	void Print();
	void Enter();
	void ChangeJob();
	void ChooseZavod();
	void ChangePayment(char c);
	virtual ~Worker();
	void ChangeStandartPay();
};




/*public:
	Person() :
		
}
	
	//correct
	void Enter()
	{
		cout << "Введите ваше имя :" << endl;
		cin >> firstName;
		cout << "Введите вашу фамилию:" << endl;
		cin >> lastName;
		cout << "Введите ваш возраст:" << endl;
		cin >> age;
		cout << "Введите ваш рост:" << endl;
		cin >> height;
		cout << "Введите ваш вес:" << endl;
		cin >> weight;
		cout << "Введите ваш пол:" << endl;
		cin >> gender;
		cout << "Введите место работы: " << endl;
		cin >> zavod;
		cout << "Введите должность: " << endl;
		cin >> level;
		cout << "Введите зарплату: " << endl;
		cin >> payment;
		cout << '\n';
	}
	//correct
	void Print()
	{
		cout << "Имя: " << firstName << endl;
		cout << "Фамилия: " << lastName << endl;
		cout << "Возраст: " << age << endl;
		cout << "Рост: " << height << endl;
		cout << "Вес: " << weight << endl;
		cout << "Пол: " << gender << endl;
		cout << "Завод: " << zavod << endl;
		cout << "Должность: " << level << endl;
		cout << "Зарплата: " << payment << endl;
	}
	//correct
	void ChoiceRabota()
	{
		if (Choice() == 1)
			RabotaY();
		else
			RabotaN();
	}
	//correct
	void RabotaY()
	{
		ChooseZavod();
		cout << "Хотите сменить работу?" << endl;
		if (Choice() == 1)
			RabotaD();
		else
			ChoiseAbPay();

	}

	//correct
	void RabotaD()
	{
		ChangeJob();
		cout << "Хотите сменить зарплату?" << endl;
		if (Choice() == 1)
			Check1();
		else
			Print();
	}
	//correct
	void ChangeJob()
	{
		Job j;
		int choose;
		cout << "Выберите работу: " << endl;
		cin >> choose;

		if (choose == 1)
		{
			level = "assistant ";
			cout << level << endl;
		}
		else if (choose == 2)
		{
			level = "worker ";
			cout << level << endl;
		}
		else if (choose == 3)
		{
			level = "manager ";
			cout << level << endl;
		}
		else if (choose == 4)
		{
			level = "PreDirector ";
			cout << level << endl;
		}
		else if (choose == 5)
		{
			level = "Director ";
			cout << level << endl;
		}
		else
		{
			cout << "Try again: ";
			cin >> choose;
			cout << endl;
		}
	}
	//correct
	void Check1()
	{
		cout << "Хотите оставить стандартизированной?" << endl;
		if (Choice() == 1) {
			ChangeStandartPay();
			Print();
		}
		else
			Choice1();
	}
	//correct
	void ChangeStandartPay()
	{
	

		if (level == "Assistant" || level == "assistant")
		{
			payment = 5000;

		}

		else if (level == "Worker" || level == "worker")
		{
			payment = 7500;
		}

		else if (level == "Manager" || level == "manager")
		{
			payment = 10000;
		}

		else if (level == "PreDirector")
		{
			payment = 15000;
		}

		else if (level == "Director")
		{
			payment = 20000;
		}
	}
	//correct
	void Choice1()
	{
		cout << "Вы хотите увеличить?" << endl;
		if (Choice() == 1)
		{
			RisePayment();
			Print();
			cout << endl;
		}
		else
		{
			DecreasePayment();
			Print();
			cout << endl;
		}
	}
	//correct
	int  Choice()
	{
		int choice;
		cin >> choice;
		return choice;
	}
	//correct
	void ChooseZavod()
	{
		int vibor;
		cout << "Выберите завод: " << endl;
		cin >> vibor;
		if (vibor == 1)
		{
			zavod = "GMZ ";
			cout << zavod;
		}
		else if (vibor == 2)
		{
			zavod = "TSMC ";
			cout << zavod;
		}
		else if (vibor == 3)
		{
			zavod = "Foxcon ";
			cout << zavod;
		}
		else if (vibor == 4)
		{
			zavod = "Pegatron ";
			cout << zavod;
		}
		else if (vibor == 5)
		{
			zavod = "ODM ";
			cout << zavod;
		}
		else
		{
			cout << "Try again: ";
			cin >> vibor;
			cout << endl;
		}
	}
	//correct
	void RisePayment()
	{
		int difference;
		cout << "Введите разницу: ";
		cin >> difference;
		payment += difference;
		cout << endl;
	}
	//correct
	void DecreasePayment()
	{
		int difference;
		cout << "Введите разницу: ";
		cin >> difference;
		payment -= difference;
		cout << endl;
	}
	//correct
	void ChoiseAbPayWork()
	{
		cout << "Хотите сменить зарплату?" << endl;
		if (Choice() == 1)
			Choice1();
		else
			Print();
	}
	//correct
	void ChoiseAbPay()
	{
		cout << "Хотите сменить зарплату?" << endl;
		if (Choice() == 1)
			Choice1();
		else
			Print();
	}
};




int main()
{
	Person C;
	C.Enter();
	C.Print();
	cout << endl;
	cout << "Хотите поменять место работы?" << endl;
	C.ChoiceRabota();

	return 0;
}*/