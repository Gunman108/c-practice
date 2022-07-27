  #include <stdio.h>

int main(){

    //variable definitions
    int a = 3;
    int b = 2;
    int c = 1;

    _Bool bool_1 = 0;
    _Bool bool_2 = 1;
    _Bool bool_3 = 0;

    //arithmetic operator
    c = a + b; //addition
    a = c - b; //subtraction
    b = a * c; //multiplication
    a = b / c; //devision
    c = a % b; //modulation
    b++; //+1
    a--; //-1. 

    //logical operator
    bool_1 = (bool_2 && bool_3); //AND. If both operands are non-zero, the condition becomes true.
    bool_2 = (bool_1 || bool_3); //OR. If and one of the operands are non-zero, the condition becomes true.
    bool_3 = !(bool_1 && bool_2); //NOT. Reverses the logical state of the operator.


    //assignment operator
    c = a; //simple assignment
    c += a; //equivalent to c = c + a;
    c -= a; //equivalent to c = c - a;
    c *= a; //equivalent to c = c * a;
    c /= a; //equivalent to c = c / a;
    c %= a; //equivalent to c = c % a;

    //relational operator
    (a == b); //equality
    (b != c); //inequality
    (a > c); //greater than
    (b < a); //less than
    (c >= b); //greater than OR equal to
    (c <= a); //less than OR equal to

    //bitwise operators - operate on the bits in integer values. If an int has 8 bits, you can turn on and off each bit.
    //This means you could use all 8 bits to store different peices of information, using substantially less storage.
    //Each position for a binary number has a value. For each digit, multiply the digit by its position value.
    //Add up all of the positions to get final result. In general, the "position values" in a binary number are the powers of two.
    //20 -> 1. 21 -> 2. 22 -> 4. 23 -> 8. 24 -> 16. 
    c = a & b; //Bitwise and. Copies a bit to the result if it exists in both operands.
    c = a | b; //Bitwise OR operator copies a bit if it exists in either operand.
    c = a ^ b; //Bitwise XOR operator copies the bit if it is set in one operand but not both.
    c = ~a; //Bitwise ones complement operator 'flips' all bits.
    c = a << b; //Bitwise left shift. Left operands value is moved left by the number of bits specified by the right. 
    c = a >> b; //Bitwise right shift. Left operands value is moved right by the number of bits specified by the right. 

    //This is where truth tables and logic come in handy.

    c <<= a; //Bitwise left shift assignment. equivalent to c = c << a;
    c >>= a; //Bitwise right shift assignment. equivalent to c = c >> a;
    bool_3 &= bool_1; //Bitwise AND assignment. equivalent to bool_3 = bool_3 & bool_1;
    bool_3 ^= bool_1; //Bitwise exclusive OR assignment. equivalent to bool_3 = bool_3 ^ bool_1;
    bool_3 |= bool_1; //Bitwise inclusive OR assignment. equivalent to bool_3 = bool_3 | bool_1;

    //Bitwise examples
    printf("BITWISE OPERATIONS: \n");
    unsigned int bitwise_a = 60; // 0011 1100
    unsigned int bitwise_b = 13; // 0000 1101
    int result = 0;

    result = bitwise_a & bitwise_b; //0000 1100
    printf("The result of & is: %d", result); //12.

    result = bitwise_a | bitwise_b; //0011 1101
    printf("\nThe result of | is: %d", result); //61

    result = bitwise_a ^ bitwise_b; //0011 0001
    printf("\nThe result of ^ is: %d", result); //49

    result = ~bitwise_a; //1100 0011
    printf("\nThe result of ~ is: %d", result); //-61

    result = bitwise_a << 2; //1111 0000
    printf("\nThe result of << is: %d", result); //240

    result = bitwise_a >> 2; //0000 1111
    printf("\nThe result of >> is: %d", result); //15

    //Cast and sizeof operators

    //Type Conversions - Conversion of data between types can happen automatically, or explicitly by the program.
    //Implicit
    int x = 0;
    float f = 12.125;
    x = f; //x will become 12, truncating the decimal.

    int d1 = 4;
    int d2 = 3;
    
    float float_result = d1/d2; //result will be 1, regardless of float assignment. 

    float d3 = 2;
    float_result = d2/d3; //result will be 1.5, since division with even 1 float will result in floating point operation.

    //Explicit - Cast Operator
    float_result = (int) 21.51 + (int) 26.99; //is evaluated as 21 + 26

    //sizeof operator - tells you how many bytes of memory are being occupied by a given type.
    int sizeint = sizeof(int); //returns number of bytes occupied by a var of type int. 
    int sizeresult = sizeof(result); //number of bytes occupied by the float "result".

    printf("\nSize of int: %d bytes. \nSize of result: %d bytes.", sizeint, sizeresult);

    //other operators
    //* represents a pointer to a variable
    //?: is a shorthand for comparisons

    //Operator Precedence - dictates the order of evaluation when two operators share an operand
    x = 7 + 3 * 2; //results in 13 (* has a higher precedence than +)
    x = (7+3)*2 //results in 20. parentheses create higher precedence

    1 == 2 != 3; //associativity - operators are evaluated from left to right. Equivalent to ((1==2) !=3)

    //Unary (with only one operand), assignment, and conditional operators are the only that go from right to left.


    return 0;
}