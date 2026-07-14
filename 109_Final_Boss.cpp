/*
◆───────────────────────────────◆
109. Final Boss
◆───────────────────────────────◆

💡 Remember

Functions with Arrays make
Programs Cleaner, Reusable
and Easy to Maintain.

One Array can be used by
many Functions.

◆───────────────────────────────◆

🎯 Goal

Revise every important
concept of Functions
with Arrays using one
complete Program.

◆───────────────────────────────◆

📖 Simple Meaning

One Array can perform
many different Tasks.

Each Function has one
specific Responsibility.

This makes the Program
simple and well organized.

◆───────────────────────────────◆

🌍 Real Life Example

Student Marks

85 92 78 96 88

        │
        ▼

Print Function

Sum Function

Maximum Function

Minimum Function

Search Function

        │
        ▼

Different Results

One Array

Multiple Operations

◆───────────────────────────────◆

⭐ Key Points

✔ Pass Array with Size.

✔ Array is passed by Address.

✔ Use const for Read Only Arrays.

✔ Create Reusable Functions.

✔ One Array supports
multiple Operations.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Print Function
void printArray(const int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Sum Function
int findSum(const int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Maximum Function
int findMaximum(const int arr[], int size)
{
    int maximum = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;
}

// Minimum Function
int findMinimum(const int arr[], int size)
{
    int minimum = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

// Search Function
bool searchElement(const int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }

    return false;
}

// Main Function
int main()
{
    int marks[] = {85,92,78,96,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    cout << "Marks : ";
    printArray(marks, size);

    cout << "Sum : "
         << findSum(marks, size)
         << endl;

    cout << "Maximum : "
         << findMaximum(marks, size)
         << endl;

    cout << "Minimum : "
         << findMinimum(marks, size)
         << endl;

    if(searchElement(marks, size, 92))
    {
        cout << "Search : Element Found";
    }
    else
    {
        cout << "Search : Element Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Marks : 85 92 78 96 88

Sum : 439

Maximum : 96

Minimum : 78

Search : Element Found

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Pass the Array to
different Functions.

Step 3:

Each Function performs
one specific Task.

Step 4:

Results are returned
to main().

Step 5:

Display every Result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why should one Function
perform only one Task?

Answer:

A Single Responsibility
makes the Program easier
to Read, Test and Maintain.

It also improves Code
Reusability.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing all logic
inside main().

✘ Creating duplicate code.

✘ Forgetting to pass
the Array Size.

✘ Using one Function
for multiple unrelated
Tasks.

✔ Write small Functions.

✔ Reuse them whenever
required.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can the same Array be
passed to different
Functions?

Answer:

Yes.

One Array can be passed
to Print, Sum, Maximum,
Minimum and Search
Functions.

Each Function performs
its own Operation.

◆───────────────────────────────◆

📝 Summary

Functions with Arrays
make Programs Modular.

Each Function performs
one Task, making the
Program Clean, Reusable
and Easy to Maintain.

◆───────────────────────────────◆

📌 Quick Revision

          Array
            │
            ▼
 ┌─────────────────┐
 │ Print Function  │
 ├─────────────────┤
 │ Sum Function    │
 ├─────────────────┤
 │ Maximum Function│
 ├─────────────────┤
 │ Minimum Function│
 ├─────────────────┤
 │ Search Function │
 └─────────────────┘
            │
            ▼
      Final Results

◆───────────────────────────────◆

*/