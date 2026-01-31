# CPP08

* Theory 
    * stl library: provide ready to use implementation of commonly used data structures known as containers, which are c holders of a collection of objects. The containers are implemented as class templates
        * sequence containers: Linear data structure, elements can be accessed sequentially.
            | Container     | Size Dynamic? | Access Method            | Memory Contiguous? | Notes / Iteration Method                      |
            | ------------- | ------------- | ------------------------ | ------------------ | --------------------------------------------- |
            | `std::vector` | Yes           | `operator[]`, `.at()`    | Yes. Memory allocated on the heap (dynamic memory)                | Random access; range-based for or iterators   |
            | `std::array`  | No (fixed)    | `operator[]`, `.at()`    | Yes. Memory allocated on the stack(size must be known at compile time)                | Random access; range-based for or iterators   |
            | `std::list`   | Yes           | `.front()`, `.back()`    | No (linked list)   | Only sequential access; iterators required    |
            | `std::deque`  | Yes           | `operator[]`, `.at()`    | Partially          | Random access; iterators, push_front possible |
        * associative containers: store elements in sorted order to permit fast retrieval, based on keys. Associative because each element is associated to a key.
            | Container       | Key / Value | Notes                                                 |
            | --------------- | ----------- | ----------------------------------------------------- |
            | `std::set`      | Key only    | Stores unique elements in **sorted order**; no duplicates; access by key; fast lookup |
            | `std::multiset` | Key only    | Like `set`, but allows **duplicates**                                                 |
            | `std::map`      | Key → Value | Stores key-value pairs in **sorted order by key**; keys are unique                    |
            | `std::multimap` | Key → Value | Like `map`, but allows **duplicate keys**                                             |
        * container adapters: is not a container type itself, but a wrapper around an existing container that provides restricted interface for a specific use case.
            | Adapter Name          | Behavior                     | Default Underlying Container |
            | --------------------- | ---------------------------- | ---------------------------- |
            | `std::stack`          | LIFO (Last In First Out)     | `std::deque`                 |
            | `std::queue`          | FIFO (First In First Out)    | `std::deque`                 |
            | `std::priority_queue` | Keeps largest element on top | `std::vector`                |
        * iterator: High level asbtraction that behaves like a pointer, but know how to traverse the particular container
            * All sequence and associative containers support iterators, but container adapters do NOT
                * c.begin: returns iterator/ pointer, pointing to the first element of the container. The value can be accessed dereferencing it.
                * c.end : return iterator pointing to one past the last element, its a non valid element, used for stop condition

        * other methods:
            * c.size: number of elements
            * c.empty: true if container is empty
            * c. max_size: maximum possible size


    * Theory by level
    1. ex00
        * container iterators and templates

    2. ex01 
        * initializing a vector, filling up  a vector, copying a container into a vector

    3. ex02
        * stack, accesing its container functionality by accesing its underlying container



* Resources
    * redifining stack : https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators

* Other concepts
    * Run time: source code is converted in to an executable
    * Compile time: when executable code is running
    * Const and reference use :
        * containerT container (by value): copy of container is made, function works on the copy
        * containerT& container (non-const reference): direct access to original container, to modify
        * const containerT container (const copy): read only copy 
        * const containerT& container: non read and non copy 


--------
Pending: implement OCF on ex01
+ 1 element test
+ 0 element test
+ adding int max +1
+ add check for greater than intmax and less than intmin
