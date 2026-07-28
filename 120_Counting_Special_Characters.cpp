/*
◆───────────────────────────────◆
120. Counting Special Characters
◆───────────────────────────────◆

💡 Remember

Special Characters are
neither Alphabets,
Digits nor Spaces.

Examples:

@  #  $  %  &  !  *  ?

◆───────────────────────────────◆

🎯 Goal

Learn how to count the
total number of Special
Characters in a String.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

If it is not an Alphabet,
Digit or Space,

count it as a
Special Character.

◆───────────────────────────────◆

🌍 Real Life Example

String

Code@2026#AI!

          │
          ▼

Special Character Function

          │
          ▼

@   #   !

          │
          ▼

Total = 3

The Function checks every
Character one by one.

◆───────────────────────────────◆

⭐ Key Points

✔ Visit every Character.

✔ Ignore Alphabets.

✔ Ignore Digits.

✔ Ignore Spaces.

✔ Count only Special
Characters.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Special Character Count Function
int countSpecialCharacters(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(!isalpha(ch) &&
           !isdigit(ch) &&
           ch != ' ')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "Code@2026#AI!";

    cout << "Special Characters : "
         << countSpecialCharacters(text);

    return 0;
}

/*

▶ Execution Output

Special Characters : 3

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Check whether it is
an Alphabet, Digit
or Space.

Step 4:

If not,

increase the Counter.

Step 5:

Return the Total Count.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Characters are
called Special Characters?

Answer:

Any Character that is
not an Alphabet,
Digit or Space is
called a Special
Character.

Examples:

@  #  $  %  &  !

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Counting Digits.

✘ Counting Spaces.

✘ Forgetting to include
<cctype>.

✘ Returning before the
Loop finishes.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many Special
Characters are in

"C++@2026!"

?

Answer:

4

They are

+  +  @  !

◆───────────────────────────────◆

📝 Summary

Visit every Character.

Ignore Alphabets,
Digits and Spaces.

Count the remaining
Characters.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
Not Alphabet?
Not Digit?
Not Space?
   │
   ▼
Count Special Character
   │
   ▼
Return Total

◆───────────────────────────────◆

*/