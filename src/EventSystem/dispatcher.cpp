#include "EventSystem/displatcher.h"


class Dispatcher_C
{
	Dispatcher_C() {

	}


	/**
	* subscribe to an observer
	* @param type type of the function to listen to
	* @param funct function of the observer
	*/
	void subscribe(T type, const SlotType& funct)
	{
		_observer[type].push_back(funct);
	}

	/**
	* send event to all observers
	* @param event event to post
	*/
	void post(Event<T>& event)
	{
		if (_observers.find(event.type) == _observers.end() {
			return;
		}

		for (auto&& observer : _observers.at(event.type()){
			if (!event.isHandled()){
				observer(event);
			}
		}

	}

};