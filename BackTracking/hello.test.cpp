A cryptarithm is a mathematical puzzle where the goal is to find the correspondence between letters and digits such that the given arithmetic equation consisting of letters holds true.

Given a cryptarithm as an array of strings crypt, count the number of its valid solutions.

The solution is valid if each letter represents a different digit, and the leading digit of any multi-digit number is not zero.
crypt has the following structure: [word1, word2, word3], which stands for the word1 + word2 = word3 cryptarithm.

Example

For crypt = ["SEND", "MORE", "MONEY"], the output should be
solution(crypt) = 1, because there is only one solution to this cryptarithm:
O = 0, M = 1, Y = 2, E = 5, N = 6, D = 7, R = 8, and S = 9 (9567 + 1085 = 10652).
For crypt = ["GREEN", "BLUE", "BLACK"], the output should be
solution(crypt) = 12, because there are 12 possible valid solutions:
54889 + 6138 = 61027
18559 + 2075 = 20634
72449 + 8064 = 80513
48229 + 5372 = 53601
47119 + 5261 = 52380
36887 + 4028 = 40915
83447 + 9204 = 92651
74665 + 8236 = 82901
65884 + 7308 = 73192
57883 + 6408 = 64291
57881 + 6428 = 64309
83441 + 9264 = 92705
For crypt = ["ONE", "TWO", "THREE"], the output should be solution(crypt) = 0, because there are no valid solutions.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.string crypt

Array of three non-empty strings containing only uppercase English letters.

Guaranteed constraints:
1 ≤ crypt[i].length ≤ 35.

[output] integer

The number of valid solutions.

[C++] Syntax Tips