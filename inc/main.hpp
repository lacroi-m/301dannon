//
// main.hpp for  in /home/kopiz/Workplace/301dannon/inc
// 
// Made by Tom Jeammet
// Login   <tom.jeammet@epitech.eu>
// 
// Started on  Tue Sep 19 16:35:18 2017 Tom Jeammet
// Last update Thu Sep 28 18:03:24 2017 ze
//

#ifndef __MAIN_HPP__
# define __MAIN_HPP__
#include "exception.hpp"
# include <cstdlib>
# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <sstream>

bool    isSorted(std::vector<float> nbrcpy);
int     selectionSort(std::vector<float> tab);
int     insertionSort(std::vector<float> tab);
int     bubbleSort(std::vector<float> tab);
int     fusionSort(std::vector<float> tab);
int     quickSort(std::vector<float> tab);

#endif /* ! __MAIN_HPP__ */
