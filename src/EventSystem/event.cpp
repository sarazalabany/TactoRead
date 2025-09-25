#include "EventSystem/Event.h"

template<typename T>
inline Event_C<T>::Event_C(T type, const std::string & name)
:_type(type)
, _name(name)
{
}
