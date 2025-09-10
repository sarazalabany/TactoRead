#include <stdio.h>
#include <iostream>
#include <functional>
#include <algorithm>
#include <map>
#include <vector> 

/********************************************************
* Dispatcher_C
*
* This is a class that implements a publisher 
*********************************************************/

template<typename T>
class Dispatcher_C
{
	using StlotType = std::function<void(const Event<T>&)>;
/********************************************************
*					Constructors
*********************************************************/
public: 
	Dispatcher_C();


/********************************************************
*					Public Methods
*********************************************************/
public:
	void subscribe(T type, const SlotType& funct);
	void post(Event<T>& event):

/********************************************************
*					Provate Methods
*********************************************************/
private:


/********************************************************
*					Attributes
*********************************************************/
private:
	std::map<T, std::vector<SlotType>> _observers;

};