#ifndef _CAMPAIGN_H
#define _CAMPAIGN_H
#include <string>

class Campaign
{
	std::string Namn;
	int usage;
public:
	Campaign(std::string name);
	void AddUse();
};


#endif
