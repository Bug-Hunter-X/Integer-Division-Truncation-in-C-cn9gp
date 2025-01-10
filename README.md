# Integer Division Truncation in C

This example demonstrates a common error in C related to integer division.  When dividing two integers, the result is also an integer, and any fractional part is truncated (discarded).

## The Problem

The `main` function calculates `z` as the result of dividing `x` by `y`. Because both `x` and `y` are integers, the division is an integer division, and the result will be 2, not 2.0.