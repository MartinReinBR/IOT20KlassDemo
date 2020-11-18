#ifndef _CUSTOMER_H
#define _CUSTOMER_H
#include <vector>
using namespace  std;

#include "Campaign.h"

class Customer
{
	std::string Namn;
	int Belopp;

public:
	Customer(string name);
	void SetBelopp(int newBelopp);
	void AddCampaign(Campaign c);

private:
	std::vector<Campaign> campaigns;
};


#endif
