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
		cout << "priority Hight: ";
		cout << "priority Medium: ";
		cout << "priority Low: ";
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
	void ChangeList()
	{
		string choiselist;
		string choiseInIf;
		cout << "What you want Change in list.(Name, Priority, Description, Date)" << endl;
		cin >> choiselist;
		for (int i = 0; i < 10; i++)
		{
			if (choiselist == "Name")
			{
				cout << "Print name" << endl;
				cin >> choiseInIf;
				if (choiseInIf = Name)
				{
					for (int i = 0; i < Name.length(); i++)
					{
						Name.erase(i);
					}
					cout << "Change name" << endl;
					cin >> Name;
				}
			}
			else if (choiselist == "Priority")
			{
				cout << "Print name" << endl;
				if (choiseInIf = Name)
				{
					for (int i = 0; i < priority.length(); i++)
					{
						Name.erase(i);
					}
					cout << "Change priority" << endl;
					cin >> priority;
				}
			}
			else if (choiselist == "Description")
			{
				cout << "Print name" << endl;
				if (choiseInIf = Name)
				{
					for (int i = 0; i < priority.length(); i++)
					{
						Name.erase(i);
					}
					cout << "Change Description" << endl;
					cin >> description;
				}
			}
			else if (choiselist == "Date")
			{
				cout << "Print name" << endl;
				if (choiseInIf = Name)
				{
					DateAndTime.Day = 0;
					DateAndTime.Month = 0;
					DateAndTime.Year = 0;
					DateAndTime.planTime.Hour = 0;
					DateAndTime.planTime.Minute = 0;
					DateAndTime.planTime.Second = 0;
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
			}
			else
			{
				cout << "or you print whith problem or you want exit." << endl;
			}
		}
	}
	void deleteList()
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
		DateAndTime.Day = 0;
		DateAndTime.Month = 0;
		DateAndTime.Year = 0;
		DateAndTime.planTime.Hour = 0;
		DateAndTime.planTime.Minute = 0;
		DateAndTime.planTime.Second = 0;
	}
};
void SearchInList(list alls[])
{
	int Vibor;
	string ViborInSwitch;
	int ViborrDay;
	int ViborrMonth;
	int ViborrYear;
	cout << "Which item in the list do you want to search for?\n Have 4 Variants:\n 1.In name; \n 2. In priority; \n 3.In description;\n 4.In Date.\n Print number Variant." << endl;
	cin >> Vibor;
	for (int i = 0; i < 10; i++)
	{
		switch (Vibor)
		{
		case 1:
			cout << "Print name list: ";
			cin >> ViborInSwitch;
			if (ViborInSwitch == alls[i].Name)
			{
				cout << "Name: " << alls[i].Name << endl;
				cout << "Priority: " << alls[i].priority << endl;
				cout << "Description: " << alls[i].description << endl;
				cout << "Date: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << "." << endl;
				cout << "Time: " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Minute << ":" << alls[i].DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		case 2:
			cout << "Print Priority list: ";
			cin >> ViborInSwitch;
			if (ViborInSwitch == alls[i].priority)
			{
				cout << "Name: " << alls[i].Name << endl;
				cout << "Priority: " << alls[i].priority << endl;
				cout << "Description: " << alls[i].description << endl;
				cout << "Date: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << "." << endl;
				cout << "Time: " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Minute << ":" << alls[i].DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		case 3:
			cout << "Print Description list: ";
			cin >> ViborInSwitch;
			if (ViborInSwitch == alls[i].description)
			{
				cout << "Name: " << alls[i].Name << endl;
				cout << "Priority: " << alls[i].priority << endl;
				cout << "Description: " << alls[i].description << endl;
				cout << "Date: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << "." << endl;
				cout << "Time: " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Minute << ":" << alls[i].DateAndTime.planTime.Second << endl;
				break;
			}
			else
			{
				break;
			}
		case 4:
			cout << "Print Day list: ";
			cin >> ViborrDay;
			cout << "Print Month list: ";
			cin >> ViborrMonth;
			cout << "Print Year list: ";
			cin >> ViborrYear;
			if ((ViborrDay == alls[i].DateAndTime.Day) && (ViborrMonth == alls[i].DateAndTime.Month) && (ViborrYear == alls[i].DateAndTime.Year))
			{
				cout << "Name: " << alls[i].Name << endl;
				cout << "Priority: " << alls[i].priority << endl;
				cout << "Description: " << alls[i].description << endl;
				cout << "Date: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << "." << endl;
				cout << "Time: " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Minute << ":" << alls[i].DateAndTime.planTime.Second << endl;
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
}
void listOnDayOrWeekOrMonth(Data DataNow, list alls[])
{
	for (int i = 0; i < 10; i++)
	{
		if (alls[i].DateAndTime.Day == DataNow.Day && alls[i].DateAndTime.Month == DataNow.Month && alls[i].DateAndTime.Year == DataNow.Year)
		{
			cout << "Name: " << alls[i].Name << endl;
			cout << "Priority: " << alls[i].priority << endl;
			cout << "Description: " << alls[i].description << endl;
			cout << "Date, Day.Month.Year: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << endl;
			cout << "Time, Hours:Minute:Second  " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Hour << "." << alls[i].DateAndTime.Year << endl;
		}
		else if (alls[i].DateAndTime.Day <= DataNow.Day + 7 && alls[i].DateAndTime.Month == DataNow.Month && alls[i].DateAndTime.Year == DataNow.Year)
		{
			cout << "Name: " << alls[i].Name << endl;
			cout << "Priority: " << alls[i].priority << endl;
			cout << "Description: " << alls[i].description << endl;
			cout << "Date, Day.Month.Year: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << endl;
			cout << "Time, Hours:Minute:Second  " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Hour << "." << alls[i].DateAndTime.Year << endl;
		}
		else if (alls[i].DateAndTime.Day <= DataNow.Day + 31 && alls[i].DateAndTime.Month == DataNow.Month && alls[i].DateAndTime.Year == DataNow.Year)
		{
			cout << "Name: " << alls[i].Name << endl;
			cout << "Priority: " << alls[i].priority << endl;
			cout << "Description: " << alls[i].description << endl;
			cout << "Date, Day.Month.Year: " << alls[i].DateAndTime.Day << "." << alls[i].DateAndTime.Month << "." << alls[i].DateAndTime.Year << endl;
			cout << "Time, Hours:Minute:Second  " << alls[i].DateAndTime.planTime.Hour << ":" << alls[i].DateAndTime.planTime.Hour << "." << alls[i].DateAndTime.Year << endl;
		}
		else
		{
			cout << "You haven`t plan on this Date" << endl;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Data YourDay;
	list firstList;
	list secondList;
	list thirtList;
	list fourthList;
	list fivethList;
	list sixthList;
	list seventhList;
	list eigthList;
	list ninethList;
	list tenthList;
	list tenList[10]{ firstList ,secondList,thirtList,fourthList,fivethList,sixthList,seventhList,eigthList,ninethList,tenthList };
	system("pause");
	return 0;
}