/*
◆───────────────────────────────◆
112. Passing String By Reference
◆───────────────────────────────◆

💡 Remember

Passing a String by
Reference does not create
a Copy.

The Function works on the
Original String.

◆───────────────────────────────◆

🎯 Goal

Learn how Pass by
Reference works and why
changes affect the
Original String.

◆───────────────────────────────◆

📖 Simple Meaning

When a String is passed
by Reference,

both main() and the
Function use the same
String.

Any change made inside
the Function updates the
Original String.

◆───────────────────────────────◆

🌍 Real Life Example

Original Name

Alice

      │
      ▼

Reference Passed

      │
      ▼

Change Function

      │
      ▼

Bob

The Original String is
updated immediately.

◆───────────────────────────────◆

⭐ Key Points

✔ No Copy is created.

✔ Same String is shared.

✔ Original String changes.

✔ Faster than Pass by Value.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Change Name Function
void changeName(string &name)
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

Outside Function : Bob

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Pass it by Reference.

Step 3:

No Copy is created.

Step 4:

Modify the Original
String.

Step 5:

Print the updated String.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why does the Original
String change after the
Function call?

Answer:

Because the Function
receives a Reference to
the Original String.

Both use the same Memory.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting '&' in the
Function Parameter.

✘ Expecting a Copy to
be created.

✘ Modifying a String
when it should remain
unchanged.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What happens if the
Function changes the
Reference?

Answer:

The Original String is
updated because both
refer to the same Object.

◆───────────────────────────────◆

📝 Summary

Pass by Reference shares
the Original String.

Any change inside the
Function updates the
Original String.

◆───────────────────────────────◆

📌 Quick Revision

Original String
       │
       ▼
Reference Passed
       │
       ▼
Modify String
       │
       ▼
Original Updated

◆───────────────────────────────◆

*/