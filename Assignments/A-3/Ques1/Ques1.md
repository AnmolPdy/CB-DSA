# Intersection of Two Arrays

## Problem Statement
You are given two arrays of integers, and you need to find the intersection of these arrays. The intersection should be returned as a list of integers, where each integer appears as many times as it does in both arrays. The output list should be sorted in increasing order.

## Input Format
1. The first line contains an integer `N`, denoting the size of the two arrays.
2. The second line contains `N` space-separated integers, denoting the elements of the first array.
3. The third line contains `N` space-separated integers, denoting the elements of the second array.

### Constraints
- The length of the arrays should be between 1 and 100,000.

## Output Format
Display the repeating elements in a comma-separated manner enclosed in square brackets. The numbers should be sorted in increasing order.

## Sample Input
```
7
1 2 3 1 2 4 1
2 1 3 1 5 2 2
```

## Sample Output
`[1, 1, 2, 2, 3]`