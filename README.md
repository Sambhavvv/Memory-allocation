# Memory-allocation

Since C is a structured language, it has some fixed rules for programming.
One of them includes changing the size of an array. 
An array is usually a collection of items stored at contiguous memory locations.
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.
It returns a pointer of type void which can be cast into a pointer of any form.
It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.  
