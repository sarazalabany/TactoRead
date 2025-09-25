#include "EventSystem/Event.h"

Event_C(T type, const std::string& name = "")
	:_type(type)
	,_name(name)
{

}