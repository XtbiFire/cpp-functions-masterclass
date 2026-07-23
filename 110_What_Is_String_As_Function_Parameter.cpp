/*
◆───────────────────────────────◆
110. What Is String As Function Parameter
◆───────────────────────────────◆

💡 Remember

A String can also be
passed to a Function.

The Function receives the
String and performs the
required task.

◆───────────────────────────────◆

🎯 Goal

Learn how a String is
passed to a Function and
why it makes Programs
more Reusable.

◆───────────────────────────────◆

📖 Simple Meaning

A String works just like
other Data Types.

Instead of writing String
logic inside main(),

pass the String to a
Function.

This keeps the Program
Clean and Organized.

◆───────────────────────────────◆

🌍 Real Life Example

User Name

Alice

      │
      ▼

Greeting Function

      │
      ▼

Hello Alice

The same Function can
greet every User.

◆───────────────────────────────◆

⭐ Key Points

✔ String can be passed
to a Function.

✔ One Function can
process many Strings.

✔ Improves Reusability.

✔ Makes code Cleaner.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Greeting Function
void greet(string name)
{
    cout << "Hello " << name;
}

// Main Function
int main()
{
    string name = "Alice";

    greet(name);

    return 0;
}

/*

▶ Execution Output

Hello Alice

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Pass the String to
the Function.

Step 3:

The Function receives
the String.

Step 4:

Print the Greeting.

Step 5:

Program finishes.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Can a String be passed
to a Function?

Answer:

Yes.

A String can be passed
like any other Data Type.

The Function can Read,
Modify or Process it.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing all String
logic inside main().

✘ Creating duplicate code.

✘ Forgetting to pass
the String.

✔ Write reusable
Functions.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can one Function greet
100 different Users?

Answer:

Yes.

Only the String changes.

The Function remains
the same.

◆───────────────────────────────◆

📝 Summary

A String can be passed
to a Function.

This makes the Program
Reusable and Easy to
Maintain.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Function
   │
   ▼
Process String
   │
   ▼
Display Result

◆───────────────────────────────◆

*/