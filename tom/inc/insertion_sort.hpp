//
// insertion_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:25:57 2017 Tom Jeammet
// Last update Mon Sep 25 12:55:53 2017 Tom Jeammet
//

#ifndef __INSERTION_SORT_HPP__
# define __INSERTION_SORT_HPP__

# include <vector>

class					Insertion
{
 private:
  int					_it;

 public:
  //Ctor
  Insertion(void);
  //Dtor
  ~Insertion(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int                                   get_it(void);
  //Member
  void					incr_it(void);
  std::vector<float>			sort(std::vector<float>);
};

#endif /* ! __INSERTION_SORT_HPP__ */
