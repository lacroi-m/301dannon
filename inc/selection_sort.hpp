//
// selection_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:23:31 2017 Tom Jeammet
// Last update Mon Sep 25 12:54:29 2017 Tom Jeammet
//

#ifndef __SELECTION_SORT_HPP__
# define __SELECTION_SORT_HPP__

# include <vector>

class                                   Selection
{
private:
  int					_it;

public:
  //Ctor
  Selection(void);
  //Dtor
  ~Selection(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int					get_it(void);
  //Member
  void					incr_it(void);
  std::vector<float>			sort(std::vector<float>);
};

#endif /* ! __SELECTION_SORT_HPP__ */