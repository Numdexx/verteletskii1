#include "stdio.h"
#include <iostream>
using namespace std;
int main()
{
	float S ;
	float fuelconsumption;
	float fuelcost;
	cout << "Введіть відстань до дачі: ";
	cin >> S; 
	
	cout << "Введіть витрату бензину: ";
	cin >> fuelconsumption; 
	cout << "Введіть ціну бензину: ";
	cin >> fuelcost;
            
	
    int S_cost = (2*S*fuelconsumption)/100*fuelcost;
	
	cout << "Вартість поїздки: " << S_cost << "\tгривень";
	return 0;
}
