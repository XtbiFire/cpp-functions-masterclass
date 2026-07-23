/*
◆───────────────────────────────◆
114. Returning String From Function
◆───────────────────────────────◆

💡 Remember

A Function can return
a String.

The returned String can
be stored in another
String Variable.

◆───────────────────────────────◆

🎯 Goal

Learn how a Function
returns a String and
how the returned value
is used in main().

◆───────────────────────────────◆

📖 Simple Meaning

A Function performs
its work.

Instead of printing the
result directly,

it returns the String
to the Calling Function.

◆───────────────────────────────◆

🌍 Real Life Example

Login Function

       │
       ▼

Returns

"Welcome"

       │
       ▼

main()

       │
       ▼

Displays

Welcome

The Function sends the
result back to main().

◆───────────────────────────────◆

⭐ Key Points

✔ A Function can return
a String.

✔ Store the returned
value in a Variable.

✔ Returned value can be
used anywhere.

✔ Improves Reusability.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Greeting Function
string getGreeting()
{
    return "Welcome";
}

// Main Function
int main()
{
    string message = getGreeting();

    cout << message;

    return 0;
}

/*

▶ Execution Output

Welcome

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a Function that
returns a String.

Step 2:

Return the String.

Step 3:

Call the Function.

Step 4:

Store the returned
String.

Step 5:

Display the result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Can a Function return
a String?

Answer:

Yes.

A Function can return
a String just like it
returns int, float or
char values.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting the return
statement.

✘ Using void instead of
string as the Return Type.

✘ Ignoring the returned
value.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can the returned String
be stored in another
Variable?

Answer:

Yes.

The returned String can
be stored, printed or
passed to another
Function.

◆───────────────────────────────◆

📝 Summary

A Function can return
a String.

The returned value can
be reused anywhere in
the Program.

◆───────────────────────────────◆

📌 Quick Revision

Function
    │
    ▼
Return String
    │
    ▼
main()
    │
    ▼
Use Result

◆───────────────────────────────◆

*/