/*
◆───────────────────────────────◆
107. Common Errors
◆───────────────────────────────◆

💡 Remember

Most Array problems are
caused by small mistakes.

Writing the correct code
is just as important as
understanding the concept.

◆───────────────────────────────◆

🎯 Goal

Learn the common mistakes
while passing Arrays to
Functions and how to
avoid them.

◆───────────────────────────────◆

📖 Simple Meaning

A small mistake like a
wrong Index or wrong Size
can produce incorrect
results or even crash
the Program.

Knowing these mistakes
helps you write safer code.

◆───────────────────────────────◆

🌍 Real Life Example

Student Marks

80 85 90 95

        │
        ▼

Wrong Size Passed

        │
        ▼

Function Reads

80 85 90 95 ???

        │
        ▼

Unexpected Result ❌

Always pass the correct
Array Size.

◆───────────────────────────────◆

⭐ Key Points

✔ Pass the correct Size.

✔ Access only valid Indexes.

✔ Use the correct Loop condition.

✔ Never return a Local Array.

✔ Use const for Read Only Arrays.

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
}

// Main Function
int main()
{
    int numbers[] = {10,20,30,40,50};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, size);

    return 0;
}

/*

▶ Execution Output

10 20 30 40 50

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Calculate its Size.

Step 3:

Pass both Array and Size.

Step 4:

Print every element.

Step 5:

Program finishes safely.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What are the most common
mistakes while passing an
Array to a Function?

Answer:

Common mistakes include
passing the wrong Size,
using an invalid Index,
writing an incorrect Loop
condition and returning
a Local Array.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Passing the wrong Size.

✘ Using i <= size.

✘ Accessing arr[size].

✘ Returning a Local Array.

✘ Modifying a const Array.

✔ Always use i < size.

✔ Pass the correct Size.

✔ Access valid Indexes only.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which Loop condition is
correct?

for(int i = 0; i <= size; i++)

OR

for(int i = 0; i < size; i++)

✅ Answer:

for(int i = 0; i < size; i++)

Because the last valid
Index is size - 1.

◆───────────────────────────────◆

📝 Summary

Most Array errors are
easy to avoid.

Pass the correct Size,
use valid Indexes and
write proper Loops.

◆───────────────────────────────◆

📌 Quick Revision

Correct Size
      │
      ▼
Correct Loop
      │
      ▼
Valid Index
      │
      ▼
Correct Output

◆───────────────────────────────◆

*/