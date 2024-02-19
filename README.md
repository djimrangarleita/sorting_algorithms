# 0x1B. C - Sorting algorithms & Big O

## Resources

Read or watch:

- [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
- [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
- [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
- [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
- [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)

## Learning Objectives:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Tasks

### Task 0: Bubble sort

[Bubble-sort with Hungarian ("Csángó") folk dan](https://www.youtube.com/watch?v=lyZQPjUT5B4)

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm

- Prototype: `void bubble_sort(int *array, size_t size);`
- You're expected to print the `array` after each time you swap two elements (See example below)
Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

### Task 1: Insertion sort

[Insert-sort with Romanian folk dance](https://www.youtube.com/watch?v=ROalU379l3U)

Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) algorithm

- Prototype: `void insertion_sort_list(listint_t **list);`
- You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
- You're expected to print the `list` after each time you swap two elements (See example below)
Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

### Task 2: Selection sort

[Select-sort with Gypsy folk dance](https://www.youtube.com/watch?v=Ns4TPTC8whw)

Write a function that sorts an array of integers in ascending order using the [Selection sort](https://en.wikipedia.org/wiki/Selection_sort) algorithm

- Prototype: `void selection_sort(int *array, size_t size);`
- You're expected to print the `array` after each time you swap two elements (See example below)

- Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

### Task 3: Quick sort
mandatory

[Quick-sort with Hungarian (Küküomenti legényes) folk dance](https://www.youtube.com/watch?v=ywWBy6J5gz8)

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm

- Prototype: `void quick_sort(int *array, size_t size);`
- You must implement the `Lomuto` partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You're expected to print the `array` after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- in the best case
- in the average case
- in the worst case

### Task 4: 
