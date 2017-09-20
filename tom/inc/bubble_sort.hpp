//
// bubble_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:28:20 2017 Tom Jeammet
// Last update Wed Sep 20 00:33:38 2017 Tom Jeammet
//

#ifndef __BUBBLE_SORT_HPP__
# define __BUBBLE_SORT_HPP__

# include <vector>

class					Bubble
{
 private:
  int					it;

 public:
  //Ctor
  Bubble(int);
  //Dtor
  ~Bubble(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int                                   get_it(void);
  //Member
  void                                  sort(std::vector<float>);
  void					incr_it(void);
};

#endif /* ! __BUBBLE_SORT_HPP__ */
