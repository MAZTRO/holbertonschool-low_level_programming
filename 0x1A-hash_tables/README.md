# Hash tables
## Project 0x1A. in C.
In computing, a hash table (hash map) is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found.

## Learning Objectives:
 - What is a hash function
 - What makes a good hash function
 - What is a hash table, how do they work and how to use them
 - What is a collision and what are the main ways of dealing with collisions in the context of a hash table
 - What are the advantages and drawbacks of using hash tables
 - What are the most common use cases of hash tables

## Requirements:
 - Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
 - All your files should end with a new line
 - A README.md file, at the root of the folder of the project is mandatory
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 - You are not allowed to use global variables
 - No more than 5 functions per file
 - You are allowed to use the C standard library
 - The prototypes of all your functions should be included in your header file called hash_tables.h
 - Don’t forget to push your header file
 - All your header files should be include guarded

## Python Dictionaries
Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more here](https://stackoverflow.com/questions/2061222/what-is-the-true-difference-between-a-dictionary-and-a-hash-table) (not mandatory).

## Authors:
[Jonatan Mazo](https://github.com/MAZTRO)
