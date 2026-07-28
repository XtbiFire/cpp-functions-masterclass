/*
◆───────────────────────────────◆
123. Convert To Uppercase
◆───────────────────────────────◆

💡 Remember

Uppercase means converting
every Letter into a
Capital Letter.

Example:

hello

becomes

HELLO

◆───────────────────────────────◆

🎯 Goal

Learn how to convert
all Letters of a String
into Uppercase.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

If it is a Small Letter,

convert it into a
Capital Letter.

◆───────────────────────────────◆

🌍 Real Life Example

String

Game Developer

        │
        ▼

Uppercase Function

        │
        ▼

GAME DEVELOPER

Every Small Letter
becomes Capital.

◆───────────────────────────────◆

⭐ Key Points

✔ Visit every Character.

✔ Convert only Letters.

✔ Digits remain unchanged.

✔ Symbols remain unchanged.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Uppercase Function
string toUpperCase(string text)
{
    for(char &ch : text)
    {
        ch = toupper(ch);
    }

    return text;
}

// Main Function
int main()
{
    string text = "Game Developer";

    cout << "Original  : "
         << text << endl;

    cout << "Uppercase : "
         << toUpperCase(text);

    return 0;
}

/*

▶ Execution Output

Original  : Game Developer

Uppercase : GAME DEVELOPER

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Convert each Letter
using toupper().

Step 4:

Return the Updated
String.

Step 5:

Display the Result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Function converts
Letters to Uppercase?

Answer:

toupper()

It converts a Small
Letter into a Capital
Letter.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Forgetting to include
<cctype>.

✘ Expecting Digits to
change.

✘ Returning the Original
String without updating it.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What is the Output of

"Coding123"

after Uppercase
Conversion?

Answer:

CODING123

Only Letters change.

◆───────────────────────────────◆

📝 Summary

Visit every Character.

Convert each Letter
using toupper() and
return the Updated
String.

◆───────────────────────────────◆

📌 Quick Revision

Original String
       │
       ▼
Visit Characters
       │
       ▼
toupper()
       │
       ▼
Return String
       │
       ▼
UPPERCASE

◆───────────────────────────────◆

*/