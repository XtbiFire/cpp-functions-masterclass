/*
◆───────────────────────────────◆
128. Concatenate Two Strings
◆───────────────────────────────◆

💡 Remember

Concatenation means
joining two or more
Strings into one.

The + operator is the
easiest way to join
Strings.

◆───────────────────────────────◆

🎯 Goal

Learn how to join two
Strings using a
Function.

◆───────────────────────────────◆

📖 Simple Meaning

Take two Strings.

Join them together.

Return the combined
String.

◆───────────────────────────────◆

🌍 Real Life Example

First Name

John

      +

Last Name

Doe

      │
      ▼

John Doe

Two Strings become
one String.

◆───────────────────────────────◆

⭐ Key Points

✔ Join two Strings.

✔ + operator is commonly used.

✔ Original Strings remain safe.

✔ Return the Combined String.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Concatenate Function
string concatenateStrings(const string &first,
                          const string &second)
{
    return first + " " + second;
}

// Main Function
int main()
{
    string firstName = "John";
    string lastName  = "Doe";

    string fullName =
        concatenateStrings(firstName, lastName);

    cout << "Full Name : "
         << fullName;

    return 0;
}

/*

▶ Execution Output

Full Name : John Doe

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create two Strings.

Step 2:

Pass both Strings to
the Function.

Step 3:

Join them using the
+ operator.

Step 4:

Return the Combined
String.

Step 5:

Display the Result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What is String
Concatenation?

Answer:

Concatenation is the
process of joining two
or more Strings into
one String.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting Space
between Words.

✘ Modifying the Original
Strings unnecessarily.

✘ Returning only one
String instead of the
Combined String.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What will be the Output?

First = "Game"

Second = "Developer"

Answer:

Game Developer

◆───────────────────────────────◆

📝 Summary

Concatenation joins two
Strings into a single
String using the
+ operator.

◆───────────────────────────────◆

📌 Quick Revision

First String
      │
      ▼
+ Operator
      ▲
      │
Second String
      │
      ▼
Combined String

◆───────────────────────────────◆

*/