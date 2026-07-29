/*
◆───────────────────────────────◆
127. Copy One String To Another
◆───────────────────────────────◆

💡 Remember

Copying a String creates
another String with the
same Characters.

Both Strings become
independent.

◆───────────────────────────────◆

🎯 Goal

Learn how to copy one
String into another
using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Take the Original
String.

Create a New String.

Store the same
Characters in it.

◆───────────────────────────────◆

🌍 Real Life Example

Original

Game

      │
      ▼

Copy Function

      │
      ▼

Game

Original and Copy have
the same Content.

◆───────────────────────────────◆

⭐ Key Points

✔ Original remains safe.

✔ Copy has the same Data.

✔ Both Strings are separate.

✔ Changing one does not
change the other.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Copy Function
string copyString(const string &text)
{
    string copied = text;

    return copied;
}

// Main Function
int main()
{
    string original = "Game";
    string copied = copyString(original);

    cout << "Original : "
         << original << endl;

    cout << "Copied   : "
         << copied;

    return 0;
}

/*

▶ Execution Output

Original : Game

Copied   : Game

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create the Original
String.

Step 2:

Pass it to the
Function.

Step 3:

Create a Copy.

Step 4:

Return the New String.

Step 5:

Display both Strings.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What happens when a
String is copied?

Answer:

A new String is created
with the same Characters.

Both Strings become
independent Objects.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking both Strings
share the same Memory.

✘ Modifying the Copy and
expecting the Original
to change.

✘ Forgetting to store
the returned String.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If the Copied String is
changed later,

will the Original
String change?

Answer:

No.

Both Strings are stored
separately.

◆───────────────────────────────◆

📝 Summary

Copying a String creates
a new independent String
with the same Content.

◆───────────────────────────────◆

📌 Quick Revision

Original String
       │
       ▼
Copy Function
       │
       ▼
New String
       │
       ▼
Independent Copy

◆───────────────────────────────◆

*/