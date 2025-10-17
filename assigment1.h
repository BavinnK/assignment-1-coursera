/*
  author        : bavin kawa hama ali
  location      : kurdistan
  study         : bachelor of computer science - computer engineering
  goal          : to become an embedded systems engineer
  date created  : october 2025
*/
#ifndef assigment_h
#define assigment_h

#include <stdio.h>


// function prototypes

/* find_maximum function
   takes a pointer to an array and its size
   loops through and returns the largest number in the array */
unsigned char find_maximum(unsigned char *ptr, int size);

/* find_minimum function
   takes a pointer to an array and its size
   loops through and returns the smallest number in the array */
unsigned char find_minimum(unsigned char *ptr, int size);

/* sort_array function
   takes a pointer to an array and its size
   sorts the array in ascending order using bubble sort */
void sort_array(unsigned char *ptr, int size);

/* print_array function
   takes a pointer to an array and its size
   prints out all the elements in the array */
void print_array(unsigned char *ptr, int size);

/* print_statistics function
   handles the full process
   prints the array before and after sorting
   then prints the max min median and mean */
void print_statistics(void);

/* find_median function
   assumes the array is already sorted
   returns the middle value or average of two middle values */
unsigned char find_median(unsigned char *ptr, int size);

/* find_mean function
   loops through the array
   adds all the elements and returns the average value */
unsigned char find_mean(unsigned char *ptr, int size);

#endif // assigment_h
