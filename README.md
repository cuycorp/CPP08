# CPP08

* Theory 
    * stl library: provide ready to use implementation of commonly used data structures known as containers, which are c holders of a collection of objects. The containers are implemented as class templates
        * sequence containers: Linear data structure, elements can be accessed sequentially.
            | Container     | Size Dynamic? | Access Method            | Memory Contiguous? | Notes / Iteration Method                      |
            | ------------- | ------------- | ------------------------ | ------------------ | --------------------------------------------- |
            | `std::vector` | Yes           | `operator[]`, `.at()`    | Yes                | Random access; range-based for or iterators   |
            | `std::array`  | No (fixed)    | `operator[]`, `.at()`    | Yes                | Random access; range-based for or iterators   |
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
        * stack 
            * why is the stack non iterable? 



* Resources
    * redifining stack : https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators


* Pseudo code
    1. implement function template that takes to types of parameters, second predefined as int. first one would receive containers, and second is an element ot find in the container. 
        * go over a container and search for element

--------
Pending: implement OCF on ex01