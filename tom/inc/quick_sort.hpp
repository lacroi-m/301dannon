//
// quick_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:31:38 2017 Tom Jeammet
// Last update Wed Sep 20 00:32:19 2017 Tom Jeammet
//

#ifndef __QUICK_SORT_HPP__
# define __QUICK_SORT_HPP__

# include <vector>

class                                   Quick
{
private:
  int                                   it;

public:
  //Ctor
  Quick(int);
  //Dtor
  ~Quick(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int                                   get_it(void);
  //Member
  void                                  sort(std::vector<float>);
};

#endif /* ! __QUICK_SORT_HPP__ */
