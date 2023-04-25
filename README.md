# Memory-allocation

Since C is a structured language, it has some fixed rules for programming.
One of them includes changing the size of an array. 
An array is usually a collection of items stored at contiguous memory locations.
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.
It returns a pointer of type void which can be cast into a pointer of any form.
It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially.  
# Dynamic-memory-allocation-using-calloc
<br>
<b><ins>C calloc() method</b></ins><br>

“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:<br>
1.It initializes each block with a default value ‘0’.<br>
2.It has two parameters or arguments as compare to malloc().<br>
<br>
<b>Syntax: </b>
ptr = (cast-type*)calloc(n, element-size);<br>
<br>
![image](https://user-images.githubusercontent.com/125802204/234007424-644d756f-6103-4f46-8a26-3c218d7e1f08.png)
<br>
<b><ins> Output </b></ins>
<br>
<img width="944" alt="calloc" src="https://user-images.githubusercontent.com/125802204/234007999-864e02a4-aaa5-4b07-9dc5-69667769fdc7.png">
