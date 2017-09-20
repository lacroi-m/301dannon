//
// merge_sort.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Wed Sep 20 00:32:31 2017 Tom Jeammet
// Last update Wed Sep 20 00:33:04 2017 Tom Jeammet
//

#ifndef __MERGE_SORT_HPP__
# define __MERGE_SORT_HPP__

# include <vector>

class                                   Merge
{
private:
  int                                   it;

public:
  //Ctor
  Merge(int);
  //Dtor
  ~Merge(void);
  //Setter
  void                                  set_it(int);
  //Getter
  int                                   get_it(void);
  //Member
  void                                  sort(std::vector<float>);
};

#endif /* ! __MERGE_SORT_HPP__ */
