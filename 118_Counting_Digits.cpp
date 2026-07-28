/*
◆───────────────────────────────◆
118. Counting Digits
◆───────────────────────────────◆

💡 Remember

A Digit is any Character
from 0 to 9.

Only Numeric Characters
are counted.

◆───────────────────────────────◆

🎯 Goal

Learn how to count the
total number of Digits
in a String.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

If the Character is a
Digit,

increase the Counter.

Ignore Alphabets,
Spaces and Symbols.

◆───────────────────────────────◆

🌍 Real Life Example

String

Code123Game45

         │
         ▼

Digit Function

         │
         ▼

1 2 3 4 5

         │
         ▼

Total Digits = 5

The Function checks every
Character one by one.

◆───────────────────────────────◆

⭐ Key Points

✔ Visit every Character.

✔ Count only Digits.

✔ Ignore Alphabets.

✔ Ignore Symbols and Spaces.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Digit Count Function
int countDigits(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(isdigit(ch))
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "Code123Game45";

    cout << "Digits : "
         << countDigits(text);

    return 0;
}

/*

▶ Execution Output

Digits : 5

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Check whether it is
a Digit.

Step 4:

Increase the Counter.

Step 5:

Return the Total Count.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Characters are
counted as Digits?

Answer:

Only Characters from
'0' to '9' are counted
as Digits.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Counting Alphabets.

✘ Counting Symbols.

✘ Forgetting to include
<cctype>.

✘ Returning before the
Loop finishes.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many Digits are in

"C++2026AI"

?

Answer:

4

The Digits are

2, 0, 2 and 6.

◆───────────────────────────────◆

📝 Summary

Visit every Character.

Count only Digits and
ignore all other
Characters.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
Is Digit?
   │
   ▼
Increase Count
   │
   ▼
Return Total

◆───────────────────────────────◆

*/