#pragma once
////////////////////////////////////////////////////////////////////////////////////////
//System includes
#include <stdio.h>
#include <iostream>
#include <functional>
#include <algorithm>
#include <map>
#include <vector> 

//Project includes

////////////////////////////////////////////////////////////////////////////////////////
// Subscriber_C
//
// Desc : 
// Auth : Sara Zalabany
// Date : 09 - 25
//
//
///////////////////////////////////////////////////////////////////////////////////////
template<typename T>
class Dispatcher_C
{
	using StlotType = std::function<void(const Event<T>&)>;

public: 
	/********************************************************
	*					Constructors
	*********************************************************/
	Dispatcher_C();



public:
	/********************************************************
	*					Public Methods
	*********************************************************/
	void subscribe(T type, const SlotType& funct);
	void post(Event<T>& event):


private:
	/********************************************************
	*					Provate Methods
	*********************************************************/



private:
	/********************************************************
	*					Attributes
	*********************************************************/
	std::map<T, std::vector<SlotType>> _observers;

};