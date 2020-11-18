#include <iostream>
#include <vector>
#include "Campaign.h"
#include "Customer.h"
using namespace std;



int main()
{
	
	//malloc, realloc
	vector<Customer> listaMedCustomers;

	Customer c("Harrys");
	c.SetBelopp(100);
	listaMedCustomers.push_back(c);

	
	Campaign ca("Låna hos oss");
	c.AddCampaign(ca);
	
	
	//listaMedTal.push_back(12);
	//listaMedTal.push_back(15);
	//listaMedTal.push_back(78);

	//for (int i = 0; i < listaMedTal.size(); i++)
	//{
	//	cout << listaMedTal[i] << endl;
	//}


	
	string namn = "Stefan";
	string efternamn;

	namn = namn + " the best ";

	int age = 12;
	cout << "Ange efternamn:";
	cin >> efternamn;
	//scanf("%s", efternamn);

	cout << "Ange age:";
	cin >> age;

	string ageResult;
	if (age < 18)
		ageResult = "Barnunge";
	else if (age < 49)
		ageResult = "Ungdom";
	else
		ageResult = "Gubbe";

	cout << "Men hej på dig " << namn << " " << efternamn << " du är en " << ageResult;


	
	return 0;
}
