/*
◆───────────────────────────────◆
98. Passing 1D Array To Function
◆───────────────────────────────◆

💡 Remember

Whenever an Array is passed,
its Size should also be passed.

The Function uses the Size
to process every element.

◆───────────────────────────────◆

🎯 Goal

Learn why an Array and its
Size are passed together
to a Function.

◆───────────────────────────────◆

📖 Simple Meaning

An Array does not tell the
Function how many elements
it contains.

Passing the Size helps the
Function work safely.

◆───────────────────────────────◆

🌍 Real Life Example

Student Marks

85 90 78 95 88

        │
        ▼

Array + Size

        │
        ▼

Print Function

        │
        ▼

85 90 78 95 88

The Size tells the Function
where to stop.

◆───────────────────────────────◆

⭐ Key Points

✔ Pass the Array.

✔ Pass the Size.

✔ Loop from 0 to size - 1.

✔ Prevent invalid access.

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

Calculate the Array Size.

Step 3:

Pass both Array and Size.

Step 4:

Loop runs until size.

Step 5:

Every element is printed.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we pass the Size
of an Array?

Answer:

Because the Function
cannot determine the
number of elements
automatically.

The Size tells the Function
how many elements should
be processed.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to pass Size.

✘ Using the wrong Size.

✘ Accessing elements
outside the Array.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can a Function process an
Array without knowing its
Size?

Answer:

No.

The Function needs the
Size to know where the
Array ends.

◆───────────────────────────────◆

📝 Summary

Always pass the Array
with its Size.

This makes the Function
safe and reliable.

◆───────────────────────────────◆

📌 Quick Revision

Array
   │
   ▼
Array + Size
   │
   ▼
Function
   │
   ▼
Process Elements

◆───────────────────────────────◆

*/