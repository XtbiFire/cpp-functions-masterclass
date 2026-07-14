/*
◆───────────────────────────────◆
104. Finding Minimum Element
◆───────────────────────────────◆

💡 Remember

The Minimum Element is
the Smallest Value in
an Array.

Start with the First
Element and keep updating
the Minimum whenever a
smaller value is found.

◆───────────────────────────────◆

🎯 Goal

Learn how to find the
Smallest Element of an
Array using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Compare every element
with the current Minimum.

If a smaller value is found,

update the Minimum.

Continue until the
Array ends.

◆───────────────────────────────◆

🌍 Real Life Example

Exam Marks

72 85 91 67 88

        │
        ▼

Minimum Function

        │
        ▼

Lowest Marks = 67

The Function finds the
lowest score automatically.

◆───────────────────────────────◆

⭐ Key Points

✔ Start with arr[0].

✔ Compare every element.

✔ Update Minimum when needed.

✔ Return the Smallest Value.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

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

// Main Function
int main()
{
    int marks[] = {72,85,91,67,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    int smallest = findMinimum(marks, size);

    cout << "Minimum Marks : "
         << smallest;

    return 0;
}

/*

▶ Execution Output

Minimum Marks : 67

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Assume the First Element
is the Minimum.

Step 3:

Compare the remaining
elements.

Step 4:

Update Minimum whenever
a smaller value is found.

Step 5:

Return the Minimum Value.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we initialize
Minimum with arr[0]
instead of 0?

Answer:

Because the Array may
contain Positive or
Negative Numbers.

Using arr[0] ensures the
Function always starts
with a valid Array value.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Initializing Minimum
with 0.

✘ Starting the Loop
from index 0 again.

✘ Forgetting to return
the Minimum Value.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can this Function find
the Minimum Element of
an Array containing
Negative Numbers?

Answer:

Yes.

The First Element is used
as the initial Minimum,
so the Function works for
every valid Array.

◆───────────────────────────────◆

📝 Summary

The Minimum Function
compares every element
and returns the Smallest
Value in the Array.

◆───────────────────────────────◆

📌 Quick Revision

First Element
      │
      ▼
Compare Elements
      │
      ▼
Update Minimum
      │
      ▼
Return Smallest Value

◆───────────────────────────────◆

*/