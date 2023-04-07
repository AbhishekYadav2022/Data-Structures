# Concept of Pointers
## Definition 
___A pointer is variable which holds a memory address which is the location of some other variable in memory.___

Any variable declared in a C program has two components:

(i) Address of the variable 
(ii) Value stored in the variable
## Declaring and Initializing a Pointer
### Example:
```c 
// type * pointer_name;
int * ptr;
int n = 10;
ptr = &n;
```