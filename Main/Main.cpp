#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <fstream>

using namespace std;

struct Time
{
	int Hour;
	int Minute;
	int Second;
};

struct Data
{
	int Day;
	int Month;
	int Year;
	Time planTime;
};

struct list
{
	string Name;
	string priority;
	string description;
	Data DateAndTime;
	void createSpysok()
	{
		cout << "Print name list: ";
		cin >> Name;
		cout << "\n";
		cout << "Print priority list: ";
		cin >> priority;
		cout << "\n";
		cout << "Print description list: ";	
		cin >> description;
		cout << "\n";
		cout << "Print Day in Data: ";
		cin >> DateAndTime.Day;
		cout << "\n";
		cout << "Print Month in Data: ";
		cin >> DateAndTime.Month;
		cout << "\n";
		cout << "Print Year in Data: ";
		cin >> DateAndTime.Year;
		cout << "\n";
		cout << "Print Hour: ";
		cin >> DateAndTime.planTime.Hour;
		cout << "\n-----------------------\n";
		cout << "Print Minute: ";
		cin >> DateAndTime.planTime.Minute;
		cout << "\n-----------------------\n";
		cout << "Print Second: ";
		cin >> DateAndTime.planTime.Second;
		cout << "\n-----------------------\n";
	}
	void deleteSpysok()
	{
		for (int i = 0; i < Name.length(); i++)
		{
			Name.erase(i);
		}
		for (int i = 0; i < priority.length(); i++)
		{
			priority.erase(i);
		}
		for (int i = 0; i < description.length(); i++)
		{
			description.erase(i);
		}
	}
	void SearchInSpysok()
	{
		int Vibor;
		string ViborInSwitch;
		cout << "По какому из элементов списка вы хотите искать?\n Have 4 Variants:\n 1.In name; \n 2. In priority; \n 3.По описанию;\n 4.По дате.\n Введите номер варианта." << endl;
		cin >> Vibor;
		switch (Vibor)
		{
		case 1:
			cout << "Print name list: ";
			cin >> ViborInSwitch;
			if (ViborInSwitch == Name)
			{
				cout <<"Name: " << Name << endl;
				cout << "Priority: " << priority <<endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << DateAndTime.Day <<"." << DateAndTime.Month << "." << DateAndTime.Year << "." << endl;
				cout << "Time: " << DateAndTime.planTime.Hour << ":" << DateAndTime.planTime.Minute << ":" <<DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		case 2:
			cout << "Print Priority list: ";
			cin >> ViborInSwitch;
			if (ViborInSwitch == priority)
			{
				cout << "Name: " << Name << endl;
				cout << "Priority: " << priority << endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << DateAndTime.Day << "." << DateAndTime.Month << "." << DateAndTime.Year << "." << endl;
				cout << "Time: " << DateAndTime.planTime.Hour << ":" << DateAndTime.planTime.Minute << ":" << DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		case 3:
			cout << "Print Description list: ";
			cin >> ViborInSwitch;
			if (ViborInSwitch == description)
			{
				cout << "Name: " << Name << endl;
				cout << "Priority: " << priority << endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << DateAndTime.Day << "." << DateAndTime.Month << "." << DateAndTime.Year << "." << endl;
				cout << "Time: " << DateAndTime.planTime.Hour << ":" << DateAndTime.planTime.Minute << ":" << DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		case 4:
			int ViborrDay = 0;
			int ViborrMonth = 0;
			int ViborrYear = 0;
			cout << "Print Day list: ";
			cin >> ViborrDay;
			if (Viborr == Date)
			{
				cout << "Name: " << Name << endl;
				cout << "Priority: " << priority << endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << DateAndTime.Day << "." << DateAndTime.Month << "." << DateAndTime.Year << "." << endl;
				cout << "Time: " << DateAndTime.planTime.Hour << ":" << DateAndTime.planTime.Minute << ":" << DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		default:
			break;
		}
	}
	void listOnDayOrWeekOrMonth()
	{
		int Vibor;
		cout << "Write on what day or days you want to see the case(1, 2 - 7 or 8 - 31)";
		cin >> Vibor;
		if (Vibor == DateNow)
		{
			if (Date == DateNow)
			{
				cout << "Name: " << Name << endl;
				cout << "Priority: " << priority << endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << Date << endl;
				cout << "Time: " << Time << endl;
			}
		}
		else if (Vibor > DateNow && Vibor <= DateNow + 7)
		{
			if (Date <= DateNow + 7)
			{
				cout << "Name: " << Name << endl;
				cout << "Priority: " << priority << endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << Date << endl;
				cout << "Time: " << Time << endl;
			}
		}
		else if (Vibor > DateNow && Vibor <= DateNow + 31)
		{
			if (Date <= DateNow + 31)
			{
				cout << "Name: " << Name << endl;
				cout << "Priority: " << priority << endl;
				cout << "Description: " << description << endl;
				cout << "Date: " << Date << endl;
				cout << "Time: " << Time << endl;
			}
		}
		else
		{
			cout << "You haven`t plan on this Date" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	


	system("pause");
	return 0;
}