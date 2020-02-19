/**************************************************************************************************
   Name        : Wireless Phone Carrier
   Author      : James Gouveia
   Date        : 12.11.16
   Version     : 1.0
   Copyright   : Copyright (C). CS Department Foothill College 2016. All rights reserved.
   Program purpose: 
  
   Revisions history: (date/programmer/what changed)
   date:    programmer     changes
   
**************************************************************************************************/

#include <iostream>
#include <map> 
#include "Lab4.h"
#include "Lab4_functions.cpp"

using namespace std;

int main()
{
	SmartCarrier *p_carrier = NULL;

	p_carrier = new SmartCarrier("Foothill");

	p_carrier->Init();

	p_carrier->StartService();

	delete p_carrier;
}