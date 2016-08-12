
// printf missing element that lies between 0-99
#include<stdio.h>
#define LIMIT 100

void printMissing(int arr[], int n)
{
    // initialize all numbers from 0 to 99 as not seen
    bool seen[100] = {false};
    int i,j;
    // mark present elements in range [0-99] as seen
    for(i =0; i<n ;i++)
    {
        if(arr[i]<LIMIT)
            seen[arr[i]] = true;
    }
    // print missing element
    i =0;
    while(i<LIMIT)
    {
        // if i is missing
        if(seen[i] == false)
        {
            // find if there are more missing elements after i
            j = i+1;
            while(j<LIMIT && seen[j]==false)
                j++;
            // print the missing single or range
            (i+1 == j)? printf("%d",i): printf("%d-%d",i,j-1);
            //update i
            i = j;
        }
        else
            i++;

    }
}

