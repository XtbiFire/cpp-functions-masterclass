/*
◆───────────────────────────────◆
101. Read Only Array (const)
◆───────────────────────────────◆

💡 Remember

A const Array cannot be
modified inside a Function.

The Function can Read the
Array but cannot Change it.

◆───────────────────────────────◆

🎯 Goal

Learn why const is used
with Array Parameters and
how it protects the Data.

◆───────────────────────────────◆

📖 Simple Meaning

Sometimes a Function only
needs to Read an Array.

Using const tells the
compiler that the Array
must not be modified.

◆───────────────────────────────◆

🌍 Real Life Example

Student Marks

85 90 78 95

        │
        ▼

Display Function

(Read Only)

        │
        ▼

85 90 78 95

Marks remain unchanged.

◆───────────────────────────────◆

⭐ Key Points

✔ Prevents accidental changes.

✔ Makes the Function safer.

✔ Original Array stays unchanged.

✔ Best for Read Only Functions.

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

    // arr[0] = 100;   // Error
}

// Main Function
int main()
{
    int marks[] = {85,90,78,95};

    int size = sizeof(marks) / sizeof(marks[0]);

    printArray(marks, size);

    return 0;
}

/*

▶ Execution Output

85 90 78 95

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Pass the Array using
const.

Step 3:

The Function reads every
element.

Step 4:

Any modification is
not allowed.

Step 5:

The Original Array
remains safe.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we use const with
an Array Parameter?

Answer:

const protects the Array
from accidental changes.

It clearly shows that the
Function will only Read
the Array.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting const in
Read Only Functions.

✘ Trying to modify a
const Array.

✘ Assuming const creates
a new Array.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Will this statement work?

arr[0] = 100;

inside a const Function?

Answer:

No.

The compiler generates
an Error because a const
Array cannot be modified.

◆───────────────────────────────◆

📝 Summary

Use const whenever a
Function only needs to
Read an Array.

It improves Safety and
Code Quality.

◆───────────────────────────────◆

📌 Quick Revision

Array
   │
   ▼
const
   │
   ▼
Read Only
   │
   ▼
No Modification

◆───────────────────────────────◆

*/
