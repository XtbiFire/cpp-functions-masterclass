/*
◆───────────────────────────────◆
99. Array Is Passed By Address
◆───────────────────────────────◆

💡 Remember

An Array is passed by
Address.

No new Array is created.

The Function works on the
Original Array.

◆───────────────────────────────◆

🎯 Goal

Understand why changing
an Array inside a Function
also changes the Original
Array.

◆───────────────────────────────◆

📖 Simple Meaning

The Function receives the
Address of the Array.

Both main() and the Function
use the same Memory.

◆───────────────────────────────◆

🌍 Real Life Example

Original Array

10 20 30

        │
        ▼

Address Passed

        │
        ▼

Function

        │
        ▼

100 20 30

The Original Array
is Updated.

◆───────────────────────────────◆

⭐ Key Points

✔ Array is passed by Address.

✔ No Copy is created.

✔ Same Memory is shared.

✔ Changes affect the
Original Array.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Modify Array Function
void modifyArray(int arr[], int size)
{
    arr[0] = 100;
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

100 20 30

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Pass the Array to the
Function.

Step 3:

The Function receives
its Address.

Step 4:

Change the first element.

Step 5:

The Original Array is
updated automatically.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does modifying an
Array inside a Function
change the Original Array?

Answer:

Because the Function
receives the Address of
the Original Array.

Both use the same Memory,
so every change is visible
outside the Function.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking a Copy
is created.

✘ Expecting the Original
Array to remain unchanged.

✘ Forgetting that Arrays
share the same Memory.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If arr[1] = 500 inside the
Function, what happens?

Answer:

The Original Array also
becomes

100 500 30

because both use the
same Memory.

◆───────────────────────────────◆

📝 Summary

Arrays are passed by
Address.

The Function directly
works on the Original
Array.

◆───────────────────────────────◆

📌 Quick Revision

Original Array
      │
      ▼
Address Passed
      │
      ▼
Function
      │
      ▼
Original Updated

◆───────────────────────────────◆

*/
