/*
You are given N number of books. Every ith book has Ai number of pages.
You have to allocate contiguous books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is the minimum of those in all the other permutations and print this minimum value.

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).



Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output:113
Explanation:Allocation can be done in
following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113,
which is selected as the output.

Example 2:

Input:
N = 3
A[] = {15,17,20}
M = 2
Output:32
Explanation: Allocation is done as
{15,17} and {20}
Your Task:
You don't need to read input or print anything. Your task is to complete the function findPages() which takes 2 Integers N, and m and an array A[] of length N as input and returns the expected answer.


Expected Time Complexity: O(NlogN)
Expected Auxilliary Space: O(1)


Constraints:
1 <= N <= 105
1 <= A [ i ] <= 106
1 <= M <= 105

*/

using namespace std;
#include <bits/stdc++.h>

bool IsPossible(int A[], int n, int m, int mid)
{
  int studentCount = 1;
  int pageSum = 0;

  //* adding pages and assigning to student
  for (int i = 0; i < n; i++)
  {
    //* and checking if it is greater than mid then will go to next student
    if (pageSum + A[i] <= mid)
    {
      pageSum += A[i];
    }

    else
    {                 //*added pages is greater so we assign pages or books to new student
      studentCount++; //* shifting to next student

      //* if the student count becomes greater than the total no of students
      //* If the Array element is greater than the mid :- so we cannot assign the book to a student
      //* so return false
      if (studentCount > m || mid < A[i])
      {
        return false;
      }
      pageSum = A[i];
    }
  }
  return true;
}
int findPages(int A[], int N, int M)
{
  // code here

  // finding search space
  int s = 0;
  int sum = 0, Ans = -1;
  for (int i = 0; i < N; i++)
  {
    sum += A[i];
  }
  int e = sum;
  //*search space = s to e

  while (s <= e)
  {
    //*finding mid to calculate minimum allocation of books
    int mid = s + (e - s) / 2;
    if (IsPossible(A, N, M, mid)) // *passing mid for checking if it is possible solution
    {
      Ans = mid;   //*if mid is possible solution eg: 75
      e = mid - 1; //*for finding minimum we go to the left
    }
    else
    {
      s = mid + 1;
    }
  }
  return Ans;
}

int main()
{
  int n = 4;
  int arr[n] = {10, 20, 30, 40};
  cout << findPages(arr, n, 2);
}