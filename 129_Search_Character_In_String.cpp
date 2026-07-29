/*
◆───────────────────────────────◆
129. Search Character In String
◆───────────────────────────────◆

💡 Remember

Searching means finding
whether a Character is
present in a String.

If found,

return its Position.

◆───────────────────────────────◆

🎯 Goal

Learn how to search a
Character in a String
using a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

Compare it with the
Target Character.

If both match,

return its Index.

◆───────────────────────────────◆

🌍 Real Life Example

String

Programming

      │
      ▼

Search

'g'

      │
      ▼

Found at Index 3

The Function checks
Characters one by one.

◆───────────────────────────────◆

⭐ Key Points

✔ Visit every Character.

✔ Compare one by one.

✔ Return the Index.

✔ Return -1 if not found.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Search Character Function
int searchCharacter(const string &text,
                    char target)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == target)
        {
            return i;
        }
    }

    return -1;
}

// Main Function
int main()
{
    string word = "Programming";
    char target = 'g';

    int index =
        searchCharacter(word, target);

    if(index != -1)
    {
        cout << "Character Found at Index : "
             << index;
    }
    else
    {
        cout << "Character Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Character Found at Index : 3

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Compare it with the
Target Character.

Step 4:

Return the Index if
found.

Step 5:

Return -1 if the
Character is missing.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Why do we return -1?

Answer:

-1 means the Character
does not exist in the
String.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Returning 0 when the
Character is not found.

✘ Stopping before checking
the complete String.

✘ Forgetting to return -1.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

What happens if the
Character appears more
than once?

Answer:

This Function returns
the Index of the First
Occurrence.

◆───────────────────────────────◆

📝 Summary

Visit every Character,
compare it with the
Target Character and
return its Index.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
Character Match?
   │
 ┌─┴───────────┐
 ▼             ▼
Return Index  Return -1

◆───────────────────────────────◆

*/