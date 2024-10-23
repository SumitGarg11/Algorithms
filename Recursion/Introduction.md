# Recursion 
```bash
Recursion is technique used in computer science to solve big problems by breaking them into smaller, similar problems. The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. Using a recursive algorithm, certain problems can be solved quite easily.

```
# What is Recursion?
```bash
- Recursion is a programming technique where a function calls itself within its own definition.
- This allows a function to break down a problem into smaller subproblems, which are then solved recursively.

```

# How Does Recursion Work?
```bash

- Recursion works by creating a stack of function calls. When a function calls itself, 
- a new instance of the function is created and pushed onto the stack. This process continues until a base - - case is reached, which is a condition that stops the recursion. Once the base case is reached, the - -   - - function calls start popping off the stack and returning their results.
```
# What is a Recursive Algorithm?
```bash

- A recursive algorithm is an algorithm that uses recursion to solve a problem. Recursive algorithms  typically have two parts:
```
# Base case:
```bash
-  Which is a condition that stops the recursion.
```
#  Recursive case:
```bash

- Which is a call to the function itself with a smaller version of the problem.
```
# Types of Recursion 
```bash

- There are several different recursion types and terms. These include:
```
# Direct recursion: 
```bash
- This is typified by the factorial implementation where the methods call itself.
``` 
# In-Direct recursion:
```bash
This happens where one method, say method A, calls another method B, which then calls method A. This involves two or more methods that eventually create a circular call sequence.
```
# Head recursion:
```bash
- The recursive call is made at the beginning of the method.
```
# Tail recursion:
```bash

 The recursive call is the last statement.
 ```
 # When to Use Recursion?
 ```bash
 
Recursion is a powerful technique that can be used to solve a wide variety of problems.
However, it is important to use recursion carefully, as it can lead to stack overflows if not used properly.

Recursion should be used when 

The problem can be broken down into smaller subproblems that can be solved recursively.
The base case is easy to identify.
The recursive calls are tail recursive.
```
