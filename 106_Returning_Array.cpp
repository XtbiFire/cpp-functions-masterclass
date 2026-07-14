/*
◆───────────────────────────────◆
106. Returning Array
◆───────────────────────────────◆

💡 Remember

A Local Array cannot be
returned from a Function.

The Local Array is destroyed
when the Function ends.

◆───────────────────────────────◆

🎯 Goal

Understand why a Local
Array should not be
returned from a Function.

◆───────────────────────────────◆

📖 Simple Meaning

A Local Array lives only
inside its Function.

After the Function finishes,

its Memory is released.

Returning its Address
creates an Invalid Reference.

◆───────────────────────────────◆

🌍 Real Life Example

Function Starts

Create Local Array

        │
        ▼

Function Ends

        │
        ▼

Local Array Destroyed

        │
        ▼

Returned Address ❌

The Address no longer
points to valid Memory.

◆───────────────────────────────◆

⭐ Key Points

✔ Local Arrays have
temporary Memory.

✔ Their Memory is released
after the Function ends.

✔ Never return a Local Array.

✔ Pass an Array as a
Parameter instead.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Fill Array Function
void fillArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }
}

// Main Function
int main()
{
    int numbers[5];

    int size = sizeof(numbers) / sizeof(numbers[0]);

    fillArray(numbers, size);

    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}

/*

▶ Execution Output

10 20 30 40 50

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array inside
main().

Step 2:

Pass the Array to the
Function.

Step 3:

The Function fills every
Array element.

Step 4:

Control returns to main().

Step 5:

Print the updated Array.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why should we not return
a Local Array?

Answer:

A Local Array is destroyed
when the Function ends.

Returning its Address
creates a Dangling Pointer,
which leads to Undefined
Behavior.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Returning a Local Array.

✘ Returning the Address
of a Local Variable.

✘ Using released Memory.

✔ Pass the Array as a
Parameter instead.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How can a Function fill
an Array without returning it?

Answer:

Pass the Original Array
to the Function.

The Function updates the
same Memory directly.

◆───────────────────────────────◆

📝 Summary

Never return a Local Array.

Pass the Original Array
to the Function and modify
it directly.

◆───────────────────────────────◆

📌 Quick Revision

Local Array
     │
     ▼
Function Ends
     │
     ▼
Memory Released
     │
     ▼
Do Not Return

Use Parameter Instead

◆───────────────────────────────◆

*/