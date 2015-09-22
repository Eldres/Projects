# Projects
This a repository of all the programs I have created while attending school

/*

Implement a C++ program that has the following functions:
Reads in a paragraph of English text up to 100 words from the keyboard and stores this paragraph in a string object. Feel free to include this task in the main() function. Identifies the least frequent letter (case insensitive) in the above paragraph. Implement a separate function getLeastFreqLetter() for this task. The main() function then calls this function to find out the least frequent letter and its frequency. Calculate the frequency of each unique word (case insensitive). Implement another function countWordFreq() for this task. Use white spaces and punctuation marks such as comma, period, semicolon and question mark as word delimiters. Please define a global struct that contains two fields, word and its count for this task. You can then define an array of this struct to store all the unique words and its counts. The main() function will call this function to print out each word and its corresponding frequency.
Identify the most frequently occurring word in the paragraph. Implement another stand-alone function getMostFreqWord() for this purpose. This function will be called in main() to identify the most frequent word and its respective frequency.
Please provide a simple yet flexible user interface so other people can use & test your program.


Implement another C++ program to sort a list of integers using the selection sort algorithm. You are required to
use an integer vector to store the input numbers typed from the keyboard. The declaration of this vector will be in main(). You'll need to implement a separate function readData() to read numbers from the keyboard; implement a separate function called selectionSort(), which will be called by the main() function to sort the afore-mentioned vector; implement another function printVector() to print out the content of the vector. This function will be called by main() right after calling readData() and selectionSort(), respectively, to print out the vector content before and after being sorted.


Matrix multiplication: Write a C++ program to compute the product of two matrices. You are required to use the template class vector to represent a matrix. (See matrix.cpp on the main course page, which is an example of how to create and initialize a 2d-matrix using vectors.) Specifically, your program will include the main( ) function and a second function multiply_matrices( ). The main() function will: 
	* allow the user to choose the size of the matrices, and subsequently the content of A and B
	* call the multiply_matrices() function to compute the product of A and B 
	* print out the multiplication result.
	
	
	File I/Os:Given two text files, each of which contains a a sorted list of integers (one integer per line) in non-decreasing order, write a C++ program to merge these two input files into a third file in which all the numbers remain their sorted order. Your program will include the main() function and another function that merges the two files. Specifically, the main() function will ask a user to type in the names of the two input files. It will then call the merging function to merge the two files. Finally, it informs the user the name of the merged file. Note that you are not allowed to first load all the numbers in the two files into an array or vector then apply a sorting algorithm to this array.
	
	
	Random accesses to a file.The file posted here on iLearn contains a formatted list of 9999 integers that are randomly generated in the range of [1,9999]. Each integer occupies one single line and takes 4 characters' space per line. Alternatively, you can think that each number takes 5 characters' space, four for the number and one for the newline character. Write a C++ program using the seekg() and seekp() functions to insert the numbers 7777 through 7781 between the 6000-th and 6001-st numbers of the input file. Below are a few useful tips: 
	* The tellg() and tellp() functions return the position of the current character in an input stream or output stream, respectively. 
	* You are strongly recommended to use the tellg() function to first learn about the starting position of each integer. This will help you locate the exact starting position to insert the new numbers. 
	* You can use the width() function to specify the number of characters you'd like an integer to occupy. 
	* In addition to the "output" operator (<<), you can also use the write() function to write to a file.
	* Before you insert the numbers, you will need to first store all the numbers from the 6001-st number in an internal data structure, e.g., array. Otherwise, some of them will be overwritten. 
	* Finally, always call the clear() function before calling the seekg() or seekp() function. Otherwise, you might encounter inexplicable behaviors.
Requirements:
You are not allowed to create or use any other files except the single input file.
You must use seekg() or seekp() to directly identify the insertion point to insert the new numbers.
It's acceptable to hardcode the input file name and implement everything in the main() function. However, it's preferred to create a separate function that handles the insertion of new numbers.

