#include "Customer.h"

Customer::Customer(string name)
{
	Namn = name;
	Belopp = 0;
}
void Customer::SetBelopp(int newBelopp)
{
	this->Belopp = newBelopp;
}

void Customer::AddCampaign(Campaign c)
{
	this->campaigns.push_back(c);
}
