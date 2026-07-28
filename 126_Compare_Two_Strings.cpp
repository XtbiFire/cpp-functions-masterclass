/*
◆───────────────────────────────◆
126. Compare Two Strings
◆───────────────────────────────◆

💡 Remember

Two Strings are Equal
only when every Character
matches in the same Order.

◆───────────────────────────────◆

🎯 Goal

Learn how to compare
two Strings and check
whether they are Equal
or Not.

◆───────────────────────────────◆

📖 Simple Meaning

Compare both Strings.

If every Character is
the same,

the Strings are Equal.

Otherwise,

they are Different.

◆───────────────────────────────◆

🌍 Real Life Example

String 1

Programming

        │

String 2

Programming

        │
        ▼

Compare Function

        │
        ▼

Equal

Both Strings contain
the same Characters.

◆───────────────────────────────◆

⭐ Key Points

✔ Compare complete Strings.

✔ Character Order matters.

✔ Uppercase and Lowercase
are different.

✔ Return true or false.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Compare Function
bool compareStrings(const string &text1,
                    const string &text2)
{
    return text1 == text2;
}

// Main Function
int main()
{
    string first  = "Programming";
    string second = "Programming";

    if(compareStrings(first, second))
    {
        cout << "Strings are Equal";
    }
    else
    {
        cout << "Strings are Different";
    }

    return 0;
}

/*

▶ Execution Output

Strings are Equal

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create two Strings.

Step 2:

Pass both Strings to
the Function.

Step 3:

Compare them using ==.

Step 4:

Return true or false.

Step 5:

Display the Result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you compare
two Strings in C++?

Answer:

Use the == operator.

It compares every
Character of both
Strings.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Ignoring Character Order.

✘ Ignoring Uppercase and
Lowercase differences.

✘ Comparing only the
first Character.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Are these Strings Equal?

Hello

hello

Answer:

No.

'H' and 'h' are
different Characters.

◆───────────────────────────────◆

📝 Summary

Two Strings are Equal
only when every Character
matches in the same Order.

◆───────────────────────────────◆

📌 Quick Revision

String 1
     │
     ▼
Compare
     ▲
     │
String 2
     │
     ▼
Equal?
     │
     ▼
true / false

◆───────────────────────────────◆

*/