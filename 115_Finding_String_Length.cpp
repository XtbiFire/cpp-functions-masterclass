/*
◆───────────────────────────────◆
115. Finding String Length
◆───────────────────────────────◆

💡 Remember

The length of a String
is the total number of
Characters it contains.

Spaces are also counted
as Characters.

◆───────────────────────────────◆

🎯 Goal

Learn how to find the
Length of a String
using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

A String stores multiple
Characters.

The length tells us how
many Characters are
present in the String.

◆───────────────────────────────◆

🌍 Real Life Example

String

Programming

       │
       ▼

Length Function

       │
       ▼

11

The Function counts
every Character.

◆───────────────────────────────◆

⭐ Key Points

✔ Length means total
Characters.

✔ Spaces are counted.

✔ Empty String has
Length 0.

✔ length() returns the
total Characters.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Length Function
int findLength(const string &text)
{
    return text.length();
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Length : "
         << findLength(word);

    return 0;
}

/*

▶ Execution Output

Length : 11

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Pass it to the
Length Function.

Step 3:

The Function calls
length().

Step 4:

The total number of
Characters is returned.

Step 5:

Display the Length.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What does length()
return?

Answer:

It returns the total
number of Characters
present in the String.

Spaces are also counted.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking spaces are
ignored.

✘ Confusing Length with
Array Size.

✘ Forgetting to store
the returned value.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What is the Length of

"C++ Programming"

?

Answer:

15

Because every Letter,
Space and Symbol is
counted.

◆───────────────────────────────◆

📝 Summary

The length() Function
returns the total number
of Characters present
in a String.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
length()
   │
   ▼
Character Count
   │
   ▼
Return Length

◆───────────────────────────────◆

*/