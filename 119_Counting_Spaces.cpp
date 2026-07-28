/*
◆───────────────────────────────◆
119. Counting Spaces
◆───────────────────────────────◆

💡 Remember

A Space is also a
Character.

Every Blank Space in a
String should be counted.

◆───────────────────────────────◆

🎯 Goal

Learn how to count the
total number of Spaces
in a String.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

If the Character is a
Space,

increase the Counter.

Ignore all other
Characters.

◆───────────────────────────────◆

🌍 Real Life Example

String

Hello World C++

        │
        ▼

Space Function

        │
        ▼

Hello_World_C++

        ▲      ▲
      Space  Space

        │
        ▼

Total Spaces = 2

The Function counts
every Blank Space.

◆───────────────────────────────◆

⭐ Key Points

✔ Visit every Character.

✔ Count only Spaces.

✔ Ignore Letters.

✔ Ignore Digits and Symbols.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Space Count Function
int countSpaces(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(ch == ' ')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "Hello World C++";

    cout << "Spaces : "
         << countSpaces(text);

    return 0;
}

/*

▶ Execution Output

Spaces : 2

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Check whether the
Character is a Space.

Step 4:

Increase the Counter.

Step 5:

Return the Total Count.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you count Spaces
in a String?

Answer:

Visit every Character.

If the Character is
equal to ' ' (Space),

increase the Counter.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Comparing with an
Empty String "".

✘ Ignoring Multiple
Spaces.

✘ Returning before the
Loop finishes.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many Spaces are in

"I Love C++"

?

Answer:

2

One Space is between
"I" and "Love".

Another Space is between
"Love" and "C++".

◆───────────────────────────────◆

📝 Summary

Visit every Character.

Count only Blank Spaces
and ignore all other
Characters.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
Is Space?
   │
   ▼
Increase Count
   │
   ▼
Return Total

◆───────────────────────────────◆

*/