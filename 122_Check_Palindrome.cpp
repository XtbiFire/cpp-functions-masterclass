/*
◆───────────────────────────────◆
122. Check Palindrome
◆───────────────────────────────◆

💡 Remember

A Palindrome reads the
same from Left to Right
and Right to Left.

◆───────────────────────────────◆

🎯 Goal

Learn how to check
whether a String is
Palindrome or not.

◆───────────────────────────────◆

📖 Simple Meaning

Compare the First
Character with the Last.

Then compare the Second
with the Second Last.

If every pair matches,
the String is a
Palindrome.

◆───────────────────────────────◆

🌍 Real Life Example

madam

   │
   ▼

m == m ✔

a == a ✔

d == d ✔

   │
   ▼

Palindrome

◆───────────────────────────────◆

⭐ Key Points

✔ Compare both Ends.

✔ Move towards the Center.

✔ Stop if Characters differ.

✔ Return true or false.

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
#include <string>
using namespace std;

// Palindrome Function
bool isPalindrome(const string &text)
{
    int left = 0;
    int right = text.length() - 1;

    while(left < right)
    {
        if(text[left] != text[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

// Main Function
int main()
{
    string word = "madam";

    if(isPalindrome(word))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}

/*

▶ Execution Output

Palindrome

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a String.

Step 2:

Compare the First and
Last Character.

Step 3:

Move both Indexes
towards the Center.

Step 4:

If any pair differs,
return false.

Step 5:

If all pairs match,
return true.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

How do you check a
Palindrome efficiently?

Answer:

Use two Indexes.

Compare Characters from
both Ends until they
meet in the Middle.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Comparing only the
First Character.

✘ Forgetting to move
both Indexes.

✘ Looping beyond the
Center.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Is "level"
a Palindrome?

Answer:

Yes.

It reads the same in
both Directions.

◆───────────────────────────────◆

📝 Summary

A Palindrome has the
same Character order
from both Directions.

Compare both Ends until
the Center.

◆───────────────────────────────◆

📌 Quick Revision

Left Index
     │
     ▼
Compare
     ▲
     │
Right Index
     │
     ▼
All Match?
     │
     ▼
Palindrome

◆───────────────────────────────◆

*/