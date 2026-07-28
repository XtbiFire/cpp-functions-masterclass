/*
◆───────────────────────────────◆
125. Count Words In A String
◆───────────────────────────────◆

💡 Remember

A Word is separated by
one or more Spaces.

Count every Word,
not every Character.

◆───────────────────────────────◆

🎯 Goal

Learn how to count the
total number of Words
in a String.

◆───────────────────────────────◆

📖 Simple Meaning

Start with one Word.

Whenever a Space is
followed by a Letter,

a New Word begins.

Increase the Counter.

◆───────────────────────────────◆

🌍 Real Life Example

String

I Love C++

      │
      ▼

Word Function

      │
      ▼

I | Love | C++

      │
      ▼

Total Words = 3

The Function counts
every Word separately.

◆───────────────────────────────◆

⭐ Key Points

✔ Count complete Words.

✔ Ignore Multiple Spaces.

✔ Empty String has
Zero Words.

✔ Return the Total Count.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Word Count Function
int countWords(const string &text)
{
    if(text.empty())
    {
        return 0;
    }

    int count = 0;
    bool insideWord = false;

    for(char ch : text)
    {
        if(ch != ' ')
        {
            if(!insideWord)
            {
                count++;
                insideWord = true;
            }
        }
        else
        {
            insideWord = false;
        }
    }

    return count;
}

// Main Function
int main()
{
    string text = "I Love C++";

    cout << "Words : "
         << countWords(text);

    return 0;
}

/*

▶ Execution Output

Words : 3

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Detect the beginning
of a New Word.

Step 4:

Increase the Counter.

Step 5:

Return the Total Count.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you count Words
in a String?

Answer:

Count a Word only when
a Non-Space Character
appears after a Space
or at the beginning
of the String.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Counting every Space.

✘ Ignoring Multiple
Spaces.

✘ Assuming one Space
always means one Word.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many Words are in

"C++   Is   Awesome"

?

Answer:

3

Multiple Spaces do not
create Extra Words.

◆───────────────────────────────◆

📝 Summary

Visit every Character.

Count a Word only when
a New Word starts.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
New Word?
   │
   ▼
Increase Count
   │
   ▼
Return Total

◆───────────────────────────────◆

*/