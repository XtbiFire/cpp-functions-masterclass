/*
◆───────────────────────────────◆
124. Convert To Lowercase
◆───────────────────────────────◆

💡 Remember

Lowercase means converting
every Letter into a
Small Letter.

Example:

HELLO

becomes

hello

◆───────────────────────────────◆

🎯 Goal

Learn how to convert
all Letters of a String
into Lowercase.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

If it is a Capital Letter,

convert it into a
Small Letter.

◆───────────────────────────────◆

🌍 Real Life Example

String

GAME DEVELOPER

        │
        ▼

Lowercase Function

        │
        ▼

game developer

Every Capital Letter
becomes Small.

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

// Lowercase Function
string toLowerCase(string text)
{
    for(char &ch : text)
    {
        ch = tolower(ch);
    }

    return text;
}

// Main Function
int main()
{
    string text = "GAME DEVELOPER";

    cout << "Original  : "
         << text << endl;

    cout << "Lowercase : "
         << toLowerCase(text);

    return 0;
}

/*

▶ Execution Output

Original  : GAME DEVELOPER

Lowercase : game developer

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Convert each Letter
using tolower().

Step 4:

Return the Updated
String.

Step 5:

Display the Result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Function converts
Letters to Lowercase?

Answer:

tolower()

It converts a Capital
Letter into a Small
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

"CODING123"

after Lowercase
Conversion?

Answer:

coding123

Only Letters change.

◆───────────────────────────────◆

📝 Summary

Visit every Character.

Convert each Letter
using tolower() and
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
tolower()
       │
       ▼
Return String
       │
       ▼
lowercase

◆───────────────────────────────◆

*/