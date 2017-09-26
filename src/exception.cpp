//
// exception.cpp for  in /home/jeamme_t/Workplace/abstractVM_2016/src
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Thu Jul 20 22:07:52 2017 Tom Jeammet
// Last update Tue Sep 19 17:00:51 2017 Tom Jeammet
//

#include "../inc/exception.hpp"

//Ctor
Err::Err(std::string msg)
{
  this->set_msg(msg);
}

//Dtor
Err::~Err(void) throw ()
{
  
}

//Setter
void					Err::set_msg(std::string msg)
{
  this->_msg = msg;
}

//Getter
std::string				Err::get_msg(void)
{
  return (this->_msg);
}

//Member
void					Err::print_msg(void)
{
  if (this->_msg != "")
    std::cout << this->_msg << std::endl;
}
