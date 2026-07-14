/*
◆───────────────────────────────◆
108. Real Life Examples
◆───────────────────────────────◆

💡 Remember

Functions with Arrays are
used in almost every
Software Application.

One Function can process
different Arrays without
changing the code.

◆───────────────────────────────◆

🎯 Goal

Understand how Functions
with Arrays solve Real
World Problems.

◆───────────────────────────────◆

📖 Simple Meaning

Instead of writing the
same logic again and
again,

write one Function and
reuse it wherever needed.

This saves Time and
keeps the Program Clean.

◆───────────────────────────────◆

🌍 Real Life Example

Game Scores

120 250 180 400 350

        │
        ▼

Highest Score Function

        │
        ▼

Highest Score = 400

The same Function can
also work for another
Player's Scores.

◆───────────────────────────────◆

⭐ Key Points

✔ Student Marks

✔ Game Scores

✔ Bank Transactions

✔ Product Prices

✔ Employee Salaries

✔ Inventory Systems

◆───────────────────────────────◆

🌐 Code
*/

#include <iostream>
using namespace std;

// Highest Score Function
int findHighestScore(const int score[], int size)
{
    int highest = score[0];

    for(int i = 1; i < size; i++)
    {
        if(score[i] > highest)
        {
            highest = score[i];
        }
    }

    return highest;
}

// Main Function
int main()
{
    int score[] = {120,250,180,400,350};

    int size = sizeof(score) / sizeof(score[0]);

    cout << "Highest Score : "
         << findHighestScore(score, size);

    return 0;
}

/*

▶ Execution Output

Highest Score : 400

◆───────────────────────────────◆

🧠 Code Explanation

Step 1:

Create a Score Array.

Step 2:

Pass the Array to the
Function.

Step 3:

Compare every Score.

Step 4:

Update the Highest Score.

Step 5:

Return the Highest Value.

◆───────────────────────────────◆

🎓 Interview Prep

Question:

Where are Functions with
Arrays used in Real Life?

Answer:

They are used in Student
Management Systems,
Games, Banking Software,
Inventory Management,
Hospital Systems and
many other Applications.

◆───────────────────────────────◆

⚠ Common Mistakes

✘ Writing separate code
for every Array.

✘ Creating duplicate
Functions.

✘ Ignoring Reusability.

✔ Write one Function.

✔ Reuse it for different
Arrays.

◆───────────────────────────────◆

🚀 Brain Booster

Question:

Can one Function process
100 different Arrays?

Answer:

Yes.

Only the Array changes.

The Function remains
exactly the same.

◆───────────────────────────────◆

📝 Summary

One reusable Function
can work with many
different Arrays.

This reduces code and
improves readability.

◆───────────────────────────────◆

📌 Quick Revision

Different Arrays
       │
       ▼
 One Function
       │
       ▼
Reusable Code
       │
       ▼
Easy Maintenance

◆───────────────────────────────◆

*/