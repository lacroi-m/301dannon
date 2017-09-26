//
// main.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Sep 19 16:35:18 2017 Tom Jeammet
// Last update Tue Sep 26 14:23:18 2017 ze
//

#ifndef __MAIN_HPP__
# define __MAIN_HPP__

# include <cstdlib>
# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <sstream>

# include "exception.hpp"
# include "print.hpp"
# include "selection_sort.hpp"
# include "insertion_sort.hpp"
# include "bubble_sort.hpp"
# include "quick_sort.hpp"
# include "merge_sort.hpp"

bool    isSorted(std::vector<float> nbrcpy);
std::vector<float>      insertit(std::vector<float> builder, float number);
#endif /* ! __MAIN_HPP__ */
