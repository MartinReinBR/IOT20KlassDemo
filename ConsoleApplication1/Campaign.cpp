#include "Campaign.h"


Campaign::Campaign(std::string name)
{
	Namn = name;
	usage = 0;
}
void Campaign::AddUse()
{
	usage = usage + 1;
}