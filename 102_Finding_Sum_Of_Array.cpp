/*
◆───────────────────────────────◆
102. Finding Sum Of Array
◆───────────────────────────────◆

💡 Remember

A Function can calculate
the Sum of all Array
elements.

The final Sum is returned
to the Calling Function.

◆───────────────────────────────◆

🎯 Goal

Learn how to calculate
the Sum of an Array
using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every element of
the Array one by one.

Keep adding each value
to a Variable.

Return the final Sum.

◆───────────────────────────────◆

🌍 Real Life Example

Student Marks

80 90 75 95

        │
        ▼

Sum Function

        │
        ▼

80 + 90 + 75 + 95

        │
        ▼

Total = 340

◆───────────────────────────────◆

⭐ Key Points

✔ Start Sum with 0.

✔ Visit every element.

✔ Add each element.

✔ Return the final Sum.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

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

// Main Function
int main()
{
    int marks[] = {80,90,75,95};

    int size = sizeof(marks) / sizeof(marks[0]);

    int total = findSum(marks, size);

    cout << "Total Marks : "
         << total;

    return 0;
}

/*

▶ Execution Output

Total Marks : 340

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Initialize sum with 0.

Step 3:

Visit every element.

Step 4:

Add each value to sum.

Step 5:

Return the final Sum.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why is sum initialized
with 0?

Answer:

Zero is the starting value
for Addition.

It allows every Array
element to be added
correctly.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to initialize sum.

✘ Returning inside the Loop.

✘ Using the wrong Loop limit.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can the same Sum Function
work for an Array of
100 elements?

Answer:

Yes.

The Function works for
any Array Size because
the Loop depends on
the size Parameter.

◆───────────────────────────────◆

📝 Summary

A Sum Function visits
every Array element,
adds the values and
returns the final Sum.

◆───────────────────────────────◆

📌 Quick Revision

Array
   │
   ▼
Visit Elements
   │
   ▼
Add Values
   │
   ▼
Return Sum

◆───────────────────────────────◆

*/