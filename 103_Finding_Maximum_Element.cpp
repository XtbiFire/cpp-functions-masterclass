/*
◆───────────────────────────────◆
103. Finding Maximum Element
◆───────────────────────────────◆

💡 Remember

The Maximum Element is
the Largest Value in
an Array.

Start with the First
Element and keep updating
the Maximum whenever a
larger value is found.

◆───────────────────────────────◆

🎯 Goal

Learn how to find the
Largest Element of an
Array using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Compare every element
with the current Maximum.

If a larger value is found,

update the Maximum.

Continue until the
Array ends.

◆───────────────────────────────◆

🌍 Real Life Example

Exam Marks

72 85 91 67 88

        │
        ▼

Maximum Function

        │
        ▼

Highest Marks = 91

The Function finds the
best score automatically.

◆───────────────────────────────◆

⭐ Key Points

✔ Start with arr[0].

✔ Compare every element.

✔ Update Maximum when needed.

✔ Return the Largest Value.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

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

// Main Function
int main()
{
    int marks[] = {72,85,91,67,88};

    int size = sizeof(marks) / sizeof(marks[0]);

    int largest = findMaximum(marks, size);

    cout << "Maximum Marks : "
         << largest;

    return 0;
}

/*

▶ Execution Output

Maximum Marks : 91

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Assume the First Element
is the Maximum.

Step 3:

Compare the remaining
elements.

Step 4:

Update Maximum whenever
a larger value is found.

Step 5:

Return the Maximum Value.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we initialize
Maximum with arr[0]
instead of 0?

Answer:

Because the Array may
contain Negative Numbers.

Using arr[0] makes the
Function work correctly
for every valid Array.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Initializing Maximum
with 0.

✘ Starting the Loop
from index 0 again.

✘ Forgetting to return
the Maximum Value.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can this Function find
the Maximum Element of
an Array containing
Negative Numbers?

Answer:

Yes.

Because the First Element
is used as the initial
Maximum Value.

◆───────────────────────────────◆

📝 Summary

The Maximum Function
compares every element
and returns the Largest
Value in the Array.

◆───────────────────────────────◆

📌 Quick Revision

First Element
      │
      ▼
Compare Elements
      │
      ▼
Update Maximum
      │
      ▼
Return Largest Value

◆───────────────────────────────◆

*/