/*
◆───────────────────────────────◆
100. Modifying Array Inside Function
◆───────────────────────────────◆

💡 Remember

An Array is passed by
Address.

Changing an element inside
the Function changes the
Original Array.

◆───────────────────────────────◆

🎯 Goal

Learn how a Function can
modify an Array directly
without returning it.

◆───────────────────────────────◆

📖 Simple Meaning

Both main() and the
Function use the same
Array Memory.

A change in one place
appears everywhere.

◆───────────────────────────────◆

🌍 Real Life Example

Original Array

10 20 30

        │
        ▼

Modify Function

arr[1] = 200

        │
        ▼

Updated Array

10 200 30

The Original Array
changes immediately.

◆───────────────────────────────◆

⭐ Key Points

✔ No Array Copy is created.

✔ Original Array is modified.

✔ Changes remain after
the Function ends.

✔ Useful for updating data.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Modify Array Function
void modifyArray(int arr[], int size)
{
    arr[1] = 200;
}

// Main Function
int main()
{
    int numbers[] = {10,20,30};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    modifyArray(numbers, size);

    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}

/*

▶ Execution Output

10 200 30

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Pass the Array to the
Modify Function.

Step 3:

The Function receives
the Array Address.

Step 4:

Update arr[1].

Step 5:

Print the modified Array.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does the Original
Array change after the
Function call?

Answer:

Because the Function
receives the Address of
the Original Array.

Both use the same Memory,
so every modification
updates the Original Array.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking a new Array
is created.

✘ Expecting the Original
Array to remain unchanged.

✘ Forgetting that Arrays
share the same Memory.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can one Function modify
multiple Array elements?

Answer:

Yes.

The Function can update
any valid element because
it works on the Original
Array.

◆───────────────────────────────◆

📝 Summary

Arrays are passed by
Address.

Any modification inside
the Function directly
updates the Original Array.

◆───────────────────────────────◆

📌 Quick Revision

Original Array
      │
      ▼
Address Passed
      │
      ▼
Modify Function
      │
      ▼
Original Updated

◆───────────────────────────────◆

*/
