/*
◆───────────────────────────────◆
113. Passing String By Const Reference
◆───────────────────────────────◆

💡 Remember

Passing a String by
Const Reference creates
no Copy.

The Function can Read
the String but cannot
Modify it.

◆───────────────────────────────◆

🎯 Goal

Learn why Const Reference
is the safest and most
efficient way to pass
large Strings.

◆───────────────────────────────◆

📖 Simple Meaning

A Const Reference points
to the Original String.

The Function uses the
same String without
creating a Copy.

Since it is const,

the String cannot be
changed.

◆───────────────────────────────◆

🌍 Real Life Example

Original Name

Alice

      │
      ▼

Const Reference

      │
      ▼

Display Function

(Read Only)

      │
      ▼

Alice

The Original String
remains completely safe.

◆───────────────────────────────◆

⭐ Key Points

✔ No Copy is created.

✔ Original String is shared.

✔ Modification is not allowed.

✔ Fast and Memory Efficient.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Display Function
void displayName(const string &name)
{
    cout << "Name : "
         << name << endl;

    // name = "Bob";   // Error
}

// Main Function
int main()
{
    string name = "Alice";

    displayName(name);

    cout << "Original Name : "
         << name;

    return 0;
}

/*

▶ Execution Output

Name : Alice

Original Name : Alice

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Pass it by Const
Reference.

Step 3:

The Function receives
the Original String.

Step 4:

Read the String.

Step 5:

The String remains
unchanged.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why should we use
Const Reference for
Strings?

Answer:

Const Reference avoids
creating a Copy and also
prevents accidental
modification.

It is faster and uses
less Memory.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting const for
Read Only Functions.

✘ Trying to modify a
Const Reference.

✘ Passing large Strings
by Value unnecessarily.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Which is better for a
Read Only Function?

string name

or

const string &name

Answer:

const string &name

because it avoids Copying
and protects the Original
String.

◆───────────────────────────────◆

📝 Summary

Const Reference passes
the Original String
without creating a Copy.

It is the preferred
choice for Read Only
Functions.

◆───────────────────────────────◆

📌 Quick Revision

Original String
       │
       ▼
Const Reference
       │
       ▼
Read Only
       │
       ▼
No Copy
No Modification

◆───────────────────────────────◆

*/