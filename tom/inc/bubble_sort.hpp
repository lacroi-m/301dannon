//
// bubble_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:28:20 2017 Tom Jeammet
// Last update Sat Sep 23 10:17:47 2017 Tom Jeammet
//

#ifndef __BUBBLE_SORT_HPP__
# define __BUBBLE_SORT_HPP__

# include <vector>

class					Bubble
{
 private:
  int					_it;

 public:
  //Ctor
  Bubble(void);
  //Dtor
  ~Bubble(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int                                   get_it(void);
  //Member
  void					incr_it(void);
  std::vector<float>			sort(std::vector<float>);

};

#endif /* ! __BUBBLE_SORT_HPP__ */
