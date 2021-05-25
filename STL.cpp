// STL is Standard Template Library
// It is a powerful set of C++ template classes

/* At the core of the C++ Standard Template Library
   are following three well-structured components
   - Containers
   - Algorithms
   - Iterators */

// Containers :

/*  1. Containers are used to manage collections of objects of a certain kind.
    2. Container library in STL provide containers that are used to create data
      structures like arrays, linked list, trees etc.
    3. These container are generic, they can hold elements of any data types.

    Examples:
        1. vector can be used for creating dynamic arrays of char, int, float
         and other types

    -> Container library is a collection of classes.
    -> The containers are implemented as generic class templates.
    -> Containers help us to implement and replicate simple and
      complex data structures very easily like arrays, list, trees,
      associative arrays and many more.
    -> Containers can be used to hold different kind of objects

    Common Containers:
    ------------------
        1. vector: replicates arrays
        2. queue: replicates queues
        3. stack: replicates stack
        4. priority_queue: replicates heaps
        5. list: replicates linked list
        6. set: replicates trees
        7. map: associative arrays

    Classification of Containers:
    -----------------------------
        1) Sequence Containers:
            - arrays, linked list, etc

        2) Associative Containers:
            - Sorted Data Structures like map, set, etc

        3) Unordered Associative containers:
            - Unsorted Data Structures

        4) Containers Adapters
            - Interfaces to sequence containers */

// Algorithms :

/*  1. Algorithms act on containers. They provide the means by which you will perform
     initialization, sorting, searching and transforming of the contents of containers.
    2. Algorithms library contains built in functions that performs complex algorithms
     on the data structures.

    Examples:
        1. One can reverse a range with reverse() function, sort a range with sort()
         function, search in a range with binary_search() and so on.

        2. Algorithm library provided abstraction, i.e you don't necessarily need to
         know how the algorithm works */

 // Iterators :

 /* 1. Iterators are used to step through the elements of collections of objects. These
     collections may be containers or subsets of containers.
    2. Iterators in STL are used to point to the containers
    3. Iterators actually acts as a bridge between containers and algorithms

    Examples:
        1. sort() algorithm have two parameters,starting iterator and ending iterator,
         now sort() compare the elements pointed by each of these iterators and arrange them
         in sorted order, thus it does not matter what is the type of the container and same
         sort() can be used on different types of containers. */
