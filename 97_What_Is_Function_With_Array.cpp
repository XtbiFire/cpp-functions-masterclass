/*
◆───────────────────────────────◆
97. What Is Function With Array
◆───────────────────────────────◆

💡 Remember

A Function can receive an
entire Array.

One Function can work
with all Array elements.

◆───────────────────────────────◆

🎯 Goal

Understand how an Array
is passed to a Function
and why it is useful.

◆───────────────────────────────◆

📖 Simple Meaning

Instead of processing an
Array inside main(),

pass the Array to a
Function.

This keeps the Program
Clean and Reusable.

◆───────────────────────────────◆

🌍 Real Life Example

Student Marks

85 90 78 95 88

        │
        ▼

Print Function

        │
        ▼

85 90 78 95 88

The same Function can
print any Array.

◆───────────────────────────────◆

⭐ Key Points

✔ Array can be passed
to a Function.

✔ One Function works
for every element.

✔ Code becomes Reusable.

✔ Program stays Organized.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Print Function
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Main Function
int main()
{
    int marks[] = {85,90,78,95,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    printArray(marks, size);

    return 0;
}

/*

▶ Execution Output

85 90 78 95 88

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Find its Size.

Step 3:

Pass the Array to the
Function.

Step 4:

The Function visits
every element.

Step 5:

Each element is printed.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Can an entire Array be
passed to a Function?

Answer:

Yes.

A Function can receive
an entire Array along
with its Size.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to pass
the Array Size.

✘ Using an invalid Index.

✘ Writing the same
logic inside main().

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can one Function print
100 different Arrays?

Answer:

Yes.

Only the Array changes.

The Function remains
the same.

◆───────────────────────────────◆

📝 Summary

Passing an Array to a
Function makes the code
Reusable, Clean and Easy
to Manage.

◆───────────────────────────────◆

📌 Quick Revision

Array
   │
   ▼
Function
   │
   ▼
Process Elements
   │
   ▼
Reusable Code

◆───────────────────────────────◆

*/