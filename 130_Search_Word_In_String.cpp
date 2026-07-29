/*
◆───────────────────────────────◆
130. Search Word In String
◆───────────────────────────────◆

💡 Remember

Searching a Word means
finding whether a Word
exists inside a String.

If found,

return its Starting Index.

◆───────────────────────────────◆

🎯 Goal

Learn how to search a
Word in a String using
a Function.

◆───────────────────────────────◆

📖 Simple Meaning

Compare the Target Word
with every possible
Position in the String.

If a Match is found,

return its Starting Index.

◆───────────────────────────────◆

🌍 Real Life Example

String

I Love C++

        │
        ▼

Search

Love

        │
        ▼

Found at Index 2

The Function searches
the complete Word.

◆───────────────────────────────◆

⭐ Key Points

✔ Search complete Words.

✔ Return Starting Index.

✔ Return -1 if not found.

✔ Search is Case Sensitive.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Search Word Function
int searchWord(const string &text,
               const string &word)
{
    return text.find(word);
}

// Main Function
int main()
{
    string text = "I Love C++";
    string word = "Love";

    int index = searchWord(text, word);

    if(index != -1)
    {
        cout << "Word Found at Index : "
             << index;
    }
    else
    {
        cout << "Word Not Found";
    }

    return 0;
}

/*

▶ Execution Output

Word Found at Index : 2

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create the Sentence.

Step 2:

Choose the Target Word.

Step 3:

Use find() to search
the Word.

Step 4:

Store the returned Index.

Step 5:

Display the Result.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

What does find() return?

Answer:

It returns the Starting
Index of the Word.

If the Word does not
exist,

it returns -1.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Searching with the
wrong Letter Case.

✘ Expecting Partial
Matches automatically.

✘ Forgetting to check
for -1.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can find() search
multiple Words at once?

Answer:

No.

Each call searches
only one Word.

◆───────────────────────────────◆

📝 Summary

Use find() to search
a Word inside a String.

It returns the Starting
Index or -1.

◆───────────────────────────────◆

📌 Quick Revision

Sentence
    │
    ▼
find(Word)
    │
    ▼
Word Found?
 ┌──┴──────────┐
 ▼             ▼
Return Index  Return -1

◆───────────────────────────────◆

*/