using namespace std;
#include<bits/stdc++.h>

bool IsPossible(int A[] , int n , int m , int mid)
    {
        int studentCount = 1 ;
        int pageSum = 0 ;

        //* adding pages and assigning to student
        for(int i = 0 ; i < n ; i++){
            //* and checking if it is greater than mid then will go to next student
            if(pageSum + A[i] <= mid){
                pageSum += A[i];
            }

            else{ //*added pages is greater so we assign pages or books to new student
                studentCount++ ; //* shifting to next student
                
                //* if the student count becomes greater than the total no of students
                //* If the Array element is greater than the mid :- so we cannot assign the book to a student
                //* so return false
                if(studentCount > m || mid < A[i])
                {
                    return false ;
                }
                pageSum = A[i];
            }
        }
        return true ;
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        
        //finding search space 
        int s = 0 ;
        int sum = 0 , Ans = -1 ;
        for(int i = 0 ;i < N ; i++)
        {
            sum += A[i];
        }
        int e = sum ;
        //*search space = s to e 
        
        while(s <= e)
        {
        //*finding mid to calculate minimum allocation of books
        int mid = s + (e-s)/2 ;
            if(IsPossible(A , N , M , mid)) // *passing mid for checking if it is possible solution 
            {
                Ans = mid ;  //*if mid is possible solution eg: 75 
                e = mid -1; //*for finding minimum we go to the left 
            }
            else{
                s = mid+1 ;
            }
        }
        return Ans ;
        
    }

    int main()
    {
        int n = 4 ;
        int arr[n] = {10,20,30,40};
        cout<<findPages(arr , n, 2);
    }