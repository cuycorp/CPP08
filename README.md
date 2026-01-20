# CPP08

* Theory by level
    1. ex00

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

        * associative containers: store elements in sorted order to permit fasta retrieval, based on keys. Associative because each element is associated to a key.

            | Container       | Key / Value | Notes                                                 |
            | --------------- | ----------- | ----------------------------------------------------- |
            | `std::set`      | Key only    | Stores unique elements in **sorted order**; no duplicates; access by key; fast lookup |
            | `std::multiset` | Key only    | Like `set`, but allows **duplicates**                                                 |
            | `std::map`      | Key → Value | Stores key-value pairs in **sorted order by key**; keys are unique                    |
            | `std::multimap` | Key → Value | Like `map`, but allows **duplicate keys**                                             |

        * All container support iterators, c.begin and c.end will work for all of them. 
            * c.begin: returns iterator/ pointer, pointing to the first element of the container. The value can be accessed dereferencing it.
            * c.end : return iterator pointing to one past the last element, its a non valid element, used for stop condition
            * auto type
        * other methods:
            * c.size: number of elements
            * c.empty: true if container is empty
            * c. max_size: maximum possible size


    2. ex01 


* Other definitions
    * stds: 

* Pseudo code
    1. implement function template that takes to types of parameters, second predefined as int. first one would receive containers, and second is an element ot find in the container. 
        * go over a container and search for element
