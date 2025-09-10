#pragma once

#include <stdio.h>
#include <string>
/******************************************************
* Event_C
*
* This is a class that implements Event_C
*********************************************************/
template<typename T>
class Event_C
{
	/********************************************************
	*					Constructors
	*********************************************************/
public:
	Event_C() = default;
	Event_C(T type, const std::string& name = "");
	const T type() const { return _type; };




	/********************************************************
	*					Public Methods
	*********************************************************/
public:


	/********************************************************
	*					Provate Methods
	*********************************************************/
private:


	/********************************************************
	*					Attributes
	*********************************************************/
private:
	T _type;
	std::string _name;
	bool _handled = false;

};