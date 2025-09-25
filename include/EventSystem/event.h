#pragma once
////////////////////////////////////////////////////////////////////////////////////////
//System includes
#include <stdio.h>
#include <string>

//Project includes

////////////////////////////////////////////////////////////////////////////////////////
// Event_C
//
// Desc : Interface to be implemented by an event. Each  
// Auth : Sara Zalabany
// Date : 09 - 25
//
//
///////////////////////////////////////////////////////////////////////////////////////
template <typename T>
class Event_C
{

	public:
		/********************************************************
		*					Constructors
		*********************************************************/
		Event_C() = default;
		Event_C(T type, const std::string& name = "");

	public:
		/********************************************************
		*					Public Methods
		*********************************************************/
		T type() const { return _type; }
		const std::string& getName() const { return _name; }
		virtual bool IsHandled() { return _handled; }


	private:
		/********************************************************
		*					Provate Methods
		*********************************************************/



	private:
		/********************************************************
		*					Attributes
		*********************************************************/
		T _type;
		std::string _name;
		bool _handled = false;

};
