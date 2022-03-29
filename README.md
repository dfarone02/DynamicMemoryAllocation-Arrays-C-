# DynamicMemoryAllocation-Arrays-C-
An example of dynamically allocating array size during a program's runtime

Project description:
A small program that simulates just in time memory allocation, by
dynamically allocating an array, and then reallocating it as the size of the input reaches the array’s capacity.

Three functions:

a) main – This function appears first in your project cpp file, and will perform the following tasks:

 Read an input file (must be named nums.txt) containing aset of integers (one per line) to be read into
the array

 Dynamically allocate an array with 200 elements (hardcoded).

 Read the remaining integers from the input file (one at a time), and add each to the array. 


 Each time the array capacity is reached, call the calcAvg function and print (to stdout and the output
file) the count of elements, and the average of the integers read up to that point (as a double); and
invoke function doubleArray to double the size of the array, and continue reading the integers in the
input file until all input has been processed.

 After the last integer in the file is read and placed into the array, output the following to stdout and the
output file:
the size of the array, the number of integers read, and the average of those integers.


 Example:
  
  i. Dynamically allocate an array with 200 elements (in main).

  ii. Once you have read and inserted the 200th integer into the array, output the count of items
read, and the average of the values read so far, and invoke doubleArray to double the array size
– The new size is 400 (200 * 2).

  iii. Continue to process the file. Upon inserting the 400th item (reaching the new capacity of the
array), repeat ii. above, to create an array of size 800 (400 * 2).

  iv. Repeat this process until the input file has no more integers. Each time the capacity is reached
print the number of elements and average, and expand the array.

  v. Once the end of file is reached, print the array size (it will likely be greater than the number of
integers read in), the number of elements read, and the average of those numbers.


 Prior to exiting the program, deallocate all dynamically allocated memory
