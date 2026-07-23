/*
◆───────────────────────────────◆
111. Passing String By Value
◆───────────────────────────────◆

💡 Remember

Passing a String by Value
creates a Copy of the
Original String.

Changes inside the Function
do not affect the Original
String.

◆───────────────────────────────◆

🎯 Goal

Learn how Pass by Value
works with Strings and
why the Original String
remains unchanged.

◆───────────────────────────────◆

📖 Simple Meaning

When a String is passed
by Value,

the Function receives
its own Copy.

Any modification is made
only to the Copy.

◆───────────────────────────────◆

🌍 Real Life Example

Original Name

Alice

      │
      ▼

Copy Created

      │
      ▼

Greeting Function

Changes Copy

      │
      ▼

Original Name

Alice

The Original String
remains unchanged.

◆───────────────────────────────◆

⭐ Key Points

✔ A Copy is created.

✔ Original String is safe.

✔ Changes affect only
the Copy.

✔ Easy to understand.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Change Name Function
void changeName(string name)
{
    name = "Bob";

    cout << "Inside Function : "
         << name << endl;
}

// Main Function
int main()
{
    string name = "Alice";

    changeName(name);

    cout << "Outside Function : "
         << name;

    return 0;
}

/*

▶ Execution Output

Inside Function : Bob

Outside Function : Alice

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Pass it by Value.

Step 3:

A Copy of the String
is created.

Step 4:

Modify the Copy.

Step 5:

The Original String
remains unchanged.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does the Original
String remain unchanged?

Answer:

Because the Function
receives a Copy of the
Original String.

Only the Copy is modified.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Thinking the Original
String will change.

✘ Forgetting that a
Copy is created.

✘ Using Pass by Value
for very large Strings
when modification is
not required.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

If the Function changes
the String,

what will main() print?

Answer:

main() prints the
Original String because
only the Copy was changed.

◆───────────────────────────────◆

📝 Summary

Pass by Value creates
a Copy of the String.

Changes inside the
Function never affect
the Original String.

◆───────────────────────────────◆

📌 Quick Revision

Original String
       │
       ▼
 Copy Created
       │
       ▼
Modify Copy
       │
       ▼
Original Safe

◆───────────────────────────────◆

*/