/*
◆───────────────────────────────◆
121. Reverse A String
◆───────────────────────────────◆

💡 Remember

Reversing a String means
printing its Characters
from Last to First.

The First Character
becomes the Last.

◆───────────────────────────────◆

🎯 Goal

Learn how to Reverse
a String using a
Function.

◆───────────────────────────────◆

📖 Simple Meaning

Start from the Last
Character.

Move towards the First
Character.

Store every Character
in a new String.

◆───────────────────────────────◆

🌍 Real Life Example

String

Programming

        │
        ▼

Reverse Function

        │
        ▼

gnimmargorP

The Function changes the
Character Order.

◆───────────────────────────────◆

⭐ Key Points

✔ Start from the End.

✔ Visit every Character.

✔ Store in a New String.

✔ Return the Reversed String.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Reverse Function
string reverseString(const string &text)
{
    string reversed = "";

    for(int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }

    return reversed;
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Original : "
         << word << endl;

    cout << "Reversed : "
         << reverseString(word);

    return 0;
}

/*

▶ Execution Output

Original : Programming

Reversed : gnimmargorP

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Start from the Last
Character.

Step 3:

Add each Character
to a New String.

Step 4:

Continue until the
First Character.

Step 5:

Return the Reversed
String.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you Reverse
a String manually?

Answer:

Start from the Last
Index.

Move towards the First
Index and store every
Character in a New
String.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Starting from Index 0.

✘ Forgetting i--.

✘ Returning the Original
String instead of the
Reversed String.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What is the Reverse of

"Coding"

?

Answer:

gnidoC

◆───────────────────────────────◆

📝 Summary

Visit the String from
Last to First and
store every Character
in a New String.

◆───────────────────────────────◆

📌 Quick Revision

Original String
       │
       ▼
Start From End
       │
       ▼
Copy Characters
       │
       ▼
Return Reversed String

◆───────────────────────────────◆

*/