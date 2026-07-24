/*
◆───────────────────────────────◆
117. Counting Consonants
◆───────────────────────────────◆

💡 Remember

A Consonant is an
Alphabet that is not
a Vowel.

Vowels are

A, E, I, O, U

All other Alphabets are
Consonants.

◆───────────────────────────────◆

🎯 Goal

Learn how to count the
total number of
Consonants in a String.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character.

If it is an Alphabet
but not a Vowel,

increase the Counter.

◆───────────────────────────────◆

🌍 Real Life Example

String

Programming

        │
        ▼

Consonant Function

        │
        ▼

P r g r m m n g

        │
        ▼

Total Consonants = 8

The Function checks every
Character one by one.

◆───────────────────────────────◆

⭐ Key Points

✔ Visit every Character.

✔ Ignore Vowels.

✔ Ignore Digits and Symbols.

✔ Return the Total Count.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Consonant Count Function
int countConsonants(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(isalpha(ch))
        {
            if(ch != 'A' && ch != 'E' &&
               ch != 'I' && ch != 'O' &&
               ch != 'U' && ch != 'a' &&
               ch != 'e' && ch != 'i' &&
               ch != 'o' && ch != 'u')
            {
                count++;
            }
        }
    }

    return count;
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Consonants : "
         << countConsonants(word);

    return 0;
}

/*

▶ Execution Output

Consonants : 8

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Check whether it is
an Alphabet.

Step 4:

Ignore Vowels.

Step 5:

Count the remaining
Alphabets.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you identify
a Consonant?

Answer:

A Character is a
Consonant if it is an
Alphabet and not one
of the Vowels.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Counting Digits.

✘ Counting Symbols.

✘ Forgetting Uppercase
Letters.

✘ Counting Vowels as
Consonants.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many Consonants are
in the String

"Computer"

?

Answer:

6

The Consonants are

C, m, p, t, r, r

◆───────────────────────────────◆

📝 Summary

Check every Character.

If it is an Alphabet
and not a Vowel,

count it as a
Consonant.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
Is Alphabet?
   │
   ▼
Not Vowel?
   │
   ▼
Count Consonant

◆───────────────────────────────◆

*/