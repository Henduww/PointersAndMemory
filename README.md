# Pointers and Memory
A collection of the learning process while trying to understand computer memory and pointers.

All source code is written in the C language, and the notes (as well as the document itself) mostly revolves around pointers and memory in C.
Most of the notes' contents can be applied to other languages as well, that support memory manipulation.

# Contents
This repository contains:
   - Elaborative notes taken while reading the document "Pointers and Memory", written by [Nick Parlante](https://cs.stanford.edu/people/nick/) from [Stanford University](https://www.stanford.edu/).
   - Source code for example programs in the document
   - Source code for own experiments with local- and heap memory, as well as experimental pointer code.


*See below for full file descriptions*
   
# NOTE
This repository has no real use other than saving my work. It can also be used by other people in the process of learning about memory and pointers, if it is in any way useful.

**Under no conditions do I imply that this is reliable, functional code to be used in any kind of production. Please do not use this as a reference if you're writing actual programs that is supposed to be efficient and reliable.**

# File Description
**Memory and Pointers Notes.odt -** Elaborative notes. 1/3 of original document. (10 pages instead of 31)

**README.md    -** This file you're reading right now

### Source Code

**addr.c       -** Demonstrates the difference between passing by value and reference with pointer addresses

**heapstring.c -** Copies a string (or char array) to the heap

**passref.c    -** Demonstrates 1 advantage of passing by reference

**pointers.c   -** Simply shows address of a value

**ptp.c        -** Weakly demonstrates a pointer to a pointer

**simpleheap.c -** Simply allocates space in the heap, inserts a value, then deallocates the memory block

**swap.c       -** Swaps variables

**swapArr.c    -** Swaps the first element in an array with the last element in the array
