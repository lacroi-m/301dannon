//
// merge_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:32:31 2017 Tom Jeammet
// Last update Mon Sep 25 12:58:29 2017 Tom Jeammet
//

#ifndef __MERGE_SORT_HPP__
# define __MERGE_SORT_HPP__

# include <vector>

class                                   Merge
{
private:
  int                                   _it;

public:
  //Ctor
  Merge(void);
  //Dtor
  ~Merge(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int                                   get_it(void);
  //Member
  void					incr_it(void);
  std::vector<float>			concat_sorting(std::vector<float>, std::vector<float>);
  std::vector<float>			sort(std::vector<float>);
};

#endif /* ! __MERGE_SORT_HPP__ */
