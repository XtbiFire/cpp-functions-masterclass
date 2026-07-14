/*
◆───────────────────────────────◆
105. Searching In Array
◆───────────────────────────────◆

💡 Remember

Searching means finding
a specific Element inside
an Array.

If the Element is found,

return true.

Otherwise,

return false.

◆───────────────────────────────◆

🎯 Goal

Learn how to search an
Element in an Array
using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every element
one by one.

Compare each element
with the Target Value.

If both are equal,

the search is successful.

◆───────────────────────────────◆

🌍 Real Life Example

Roll Numbers

101 102 103 104 105

          │
          ▼

Search : 103

          │
          ▼

Result

Found ✓

The Function checks every
Roll Number until a Match
is found.

◆───────────────────────────────◆

⭐ Key Points

✔ Compare one element
at a time.

✔ Stop when a Match
is found.

✔ Return true if found.

✔ Return false if
not found.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Search Function
bool searchElement(const int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return true;
        }
    }

    return false;
}

// Main Function
int main()
{
    int numbers[] = {10,20,30,40,50};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target = 30;

    if(searchElement(numbers, size, target))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Element Found

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create an Array.

Step 2:

Choose the Target Element.

Step 3:

Visit every Array Element.

Step 4:

Compare each Element
with the Target.

Step 5:

Return true if found,
otherwise return false.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does the Function
return immediately after
finding the Element?

Answer:

Once the Target Element
is found,

there is no need to check
the remaining Elements.

This saves unnecessary
comparisons.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to return
false.

✘ Using the wrong
Loop condition.

✘ Comparing the wrong
Variable.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If the Target Element
appears multiple times,

what happens?

Answer:

This Function returns
true after finding the
First Match.

It does not continue
searching.

◆───────────────────────────────◆

📝 Summary

Searching compares every
Element with the Target.

The Function returns
true when a Match is
found, otherwise false.

◆───────────────────────────────◆

📌 Quick Revision

Array
   │
   ▼
Compare Elements
   │
   ▼
Match Found?
   │
 ┌─┴───┐
 │     │
Yes    No
 │      │
 ▼      ▼
true   false

◆───────────────────────────────◆

*/