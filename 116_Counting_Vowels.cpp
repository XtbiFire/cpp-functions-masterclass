/*
◆───────────────────────────────◆
116. Counting Vowels
◆───────────────────────────────◆

💡 Remember

Vowels are

A, E, I, O, U

Both Uppercase and
Lowercase Vowels should
be counted.

◆───────────────────────────────◆

🎯 Goal

Learn how to count the
total number of Vowels
in a String using a
Function.

◆───────────────────────────────◆

📖 Simple Meaning

Visit every Character
of the String.

If the Character is a
Vowel,

increase the Counter.

◆───────────────────────────────◆

🌍 Real Life Example

String

Programming

        │
        ▼

Vowel Function

        │
        ▼

o  a  i

        │
        ▼

Total Vowels = 3

The Function checks each
Character one by one.

◆───────────────────────────────◆

⭐ Key Points

✔ Check every Character.

✔ Count both Uppercase
and Lowercase Vowels.

✔ Ignore Consonants.

✔ Return the Total Count.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Vowel Count Function
int countVowels(const string &text)
{
    int count = 0;

    for(char ch : text)
    {
        if(ch == 'A' || ch == 'E' ||
           ch == 'I' || ch == 'O' ||
           ch == 'U' || ch == 'a' ||
           ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
        {
            count++;
        }
    }

    return count;
}

// Main Function
int main()
{
    string word = "Programming";

    cout << "Vowels : "
         << countVowels(word);

    return 0;
}

/*

▶ Execution Output

Vowels : 3

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Visit every Character.

Step 3:

Check whether the
Character is a Vowel.

Step 4:

Increase the Counter.

Step 5:

Return the Total Count.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Which Characters are
considered Vowels?

Answer:

A, E, I, O and U.

Both Uppercase and
Lowercase should be
checked.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Checking only
Lowercase Vowels.

✘ Forgetting Uppercase
Letters.

✘ Returning before the
Loop finishes.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

How many Vowels are in

"Education"

?

Answer:

5

The Vowels are

E, u, a, i, o.

◆───────────────────────────────◆

📝 Summary

Visit every Character,
check whether it is a
Vowel and return the
total Count.

◆───────────────────────────────◆

📌 Quick Revision

String
   │
   ▼
Visit Characters
   │
   ▼
Check Vowel
   │
   ▼
Increase Count
   │
   ▼
Return Total

◆───────────────────────────────◆

*/