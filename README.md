# CPP08

* Theory by level
    1. ex00
        * associative containers
        * standard containers
            * store collection of objects, handle memory automatically, insertion and deletion and access methods.

| Container     | Size Dynamic? | Access Method            | Memory Contiguous? | Notes / Iteration Method                      |
| ------------- | ------------- | ------------------------ | ------------------ | --------------------------------------------- |
| `std::vector` | Yes           | `operator[]`, `.at()`    | Yes                | Random access; range-based for or iterators   |
| `std::array`  | No (fixed)    | `operator[]`, `.at()`    | Yes                | Random access; range-based for or iterators   |
| `std::list`   | Yes           | `.front()`, `.back()`    | No (linked list)   | Only sequential access; iterators required    |
| `std::deque`  | Yes           | `operator[]`, `.at()`    | Partially          | Random access; iterators, push_front possible |
| `std::set`    | Yes           | N/A (ordered)            | No                 | Iterators only; unique keys                   |
| `std::map`    | Yes           | `.at(key)`, `operator[]` | No                 | Iterators; key-value pairs                    |


    2. ex01 




* Pseudo code
    1. implement function template that takes to types of parameters, second predefined as int. first one would receive containers, and second is an element ot find in the container. 
        * go over a container and search for element
