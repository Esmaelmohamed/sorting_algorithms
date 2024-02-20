# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C.

## Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Complexity Analysis

- **Time Complexity**:
  - Best Case: \( O(n) \)
  - Average Case: \( O(n^2) \)
  - Worst Case: \( O(n^2) \)
- **Space Complexity**: \( O(1) \) (in-place sorting algorithm)

## Insertion Sort

Insertion Sort is a simple sorting algorithm that builds the final sorted list one element at a time. It repeatedly takes the next element from the unsorted part and inserts it into the sorted part of the list.

### Complexity Analysis

- **Time Complexity**:
  - Best Case: \( O(n) \)
  - Average Case: \( O(n^2) \)
  - Worst Case: \( O(n^2) \)
- **Space Complexity**: \( O(1) \) (in-place sorting algorithm)

## Quicksort

Quicksort is a popular sorting algorithm that follows the Divide and Conquer approach. It selects a pivot element and partitions the array into two sub-arrays such that elements less than the pivot are on the left and elements greater than the pivot are on the right. It then recursively sorts the sub-arrays.

### Complexity Analysis

- **Time Complexity**:
  - Best Case: \( O(n \log n) \)
  - Average Case: \( O(n \log n) \)
  - Worst Case: \( O(n^2) \) (if the pivot selection is poor)
- **Space Complexity**: \( O(\log n) \) (in-place sorting algorithm)

## Usage

Compile the C code for each sorting algorithm and run the executables to see the algorithms in action.

```bash
gcc -o bubble_sort bubble_sort.c
./bubble_sort

gcc -o insertion_sort insertion_sort.c
./insertion_sort

gcc -o quick_sort quick_sort.c
./quick_sort


Feel CREATED BY Esmael Mohamed 
