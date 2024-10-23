# What is the String ?
- Strings are considered a data type in general and are typically represented as arrays of bytes (or words)  - that store a sequence of characters. Strings are defined as an array of characters. The difference between - a character array and a string is the string is terminated with a special character ‘\0’

If str[] is an auto (automatic) variable, it means that the variable is declared inside a function without any special storage class like static or extern. These variables are typically local variables.
Local variables are stored in the stack segment. The stack is a portion of memory used for storing local variables, function parameters, and return addresses.

void func() {
    char str[] = "Hello";  // str[] is an auto (local) variable
}

In this case, the string "Hello" and the array str[] will be stored in the stack. When the function func finishes execution, the memory for str[] is automatically released.

static char str[] = "Hello";  // str[] is a static variable

In this case, str[] will be stored in the data segment, and its memory will not be freed until the program ends.

# What is a Substring?
 A substring is a contiguous part of a string, i.e., a string inside another string.

In general, for an string of size n, there are n*(n+1)/2 non-empty substrings. For example, Consider the string “geeks”, There are 15 non-empty substrings.

What is a Subsequence?

A subsequence is a sequence that can be derived from another sequence by removing zero or more elements, without changing the order of the remaining elements.

More generally, we can say that for a sequence of size n, we can have ((2^n)-1) non-empty sub-sequences in total. For the same above example, there are 15 sub-sequences. They are:


