# code-design-and-datastructure
C++
Node.h will hold the struct for nodeTypes which will have nodeType *next that will allow it to move
and Iterate through the nodes using the Iterator.h header file of class Iterator.  Here I have functions
for the destructor for my Iterator and my Iterator will allow it to move through what ever numbers I will be
using to put the number in a certain order, or however I want them to be.  In this header file the functions take 
in where the current number will be, where it will be next and if it is nothing there (nullptr).  Also I have in 
my function the Iterator that im comparing to whats current(const bool Iterator<I>::operator!=(const Iterator<I>&everything)) - 
the everything in the arguement.
Link.h will allow me to have my inserting, deleting, empty, print, length, destroy, search, first, last, 
initialized, count, list, and copylist.  All of these will allow me to find what will go first, 
what will switch, move around, delete when its been used, what will stay empty, what number will be searched to be used
where it will begin and end, will it start from front or back or even psuh there numbers from that way and what will be 
printed and how they will count.
linklist.h is a header file to hold a linklist class for the virtual functions and override the functions to provide
an implementation of a class already there.  I have nothing defined yet.
In my main.cpp I have all the functions to test and make sure everything works properly.

