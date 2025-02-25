/*
Once upon a time in the quaint town of Pallet, there lived a young boy named Kohli who harbored a deep-seated dream of becoming a Pokémon master. Among all the creatures that inhabited the Pokémon world, none captured his heart quite like Bulbasaur.

Every morning, Kohli eagerly grabbed the newspaper from his doorstep, his eyes scanning the headlines until they landed on the front page. With a determined gleam in his eye, he carefully wielded a pair of scissors, meticulously cutting out letters one by one. Each letter was a piece of the puzzle, a step closer to his ultimate goal.

"B… u… l… b… a… s… a… u… r," kohli murmured to himself as he arranged the letters on his bedroom wall. The first letter was always uppercase, a testament to the uniqueness of his beloved Bulbasaur, while the rest followed in lowercase, like loyal companions trailing behind.

As the day progressed, Kohli's room transformed into a gallery of letters, each forming the sacred name of his favorite Pokémon. But Kohli wasn't satisfied with just one Bulbasaur; his determination knew no bounds. He turned back to the newspaper, ready to repeat the process with the remaining scraps.

With each snip of the scissors, Kohli felt a surge of excitement, imagining the day when he would finally stand face to face with a real Bulbasaur. But for now, he contented himself with the makeshift versions adorning his walls, a testament to his unwavering dedication.

As the sun dipped below the horizon, casting a warm glow over Pallet Town, Kohli surveyed his handiwork with pride. How many Bulbasaurs had he captured today? Only time would tell, but one thing was for certain - his journey to become a Pokémon master had only just begun.


Input Format
Input contains a single line containing a string s (1  ≤  |s|  ≤  105) — the text on the front page of the newspaper without spaces and punctuation marks. |s| is the length of the string s. The string s contains lowercase and uppercase English letters.


Constraints
(1  ≤  |s|  ≤  10^5)


Output Format
Output a single integer, the answer to the problem.


Note : While Taking Input and Output Ignore Test case Input No and Test Case Output No, These are for your understanding.


Sample Input
Test Case Input 1 : Bulbbasaur
Test Case Input 2: F
Test Case Input 3: aBddulbasaurrgndgbualdBdsagaurrgndbb
Sample Output
Test Case Output 1  : 1
Test Case Output 2 : 0
Test Case Output 3 : 2
Explanation
In the first case, you could pick: Bulbbasaur.

In the second case, there is no way to pick even a single Bulbasaur.

In the third case, you can rearrange the string to BulbasaurBulbasauraddrgndgddgargndbb to get two words "Bulbasaur".
*/

#include<bits/stdc++.h> 
using namespace std; 

int main(){
    string str;
    getline(cin, str);

    vector<int> ans(26, 0);
    int n = str.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(str[i] < 97) {
            if(str[i] == 66) {
                count++;
            }
        } else {
            ans[str[i] - 'a']++;
        }
    }
    int a = ans[0];
    int b = ans[1];
    int l = ans[11];
    int r = ans[17];
    int s = ans[18];
    int u = ans[20];

    int ok = 0;

    while(count >= 1 && a >= 2 && b >= 2 && l >= 1 && r >= 1 && s >= 1 && u >= 2) {
        ok++;
        count--;
        a -= 2;
        b -= 2;
        l--;
        r--;
        s--;
        u -= 2;
    }
    cout << ok << endl;
 
    return 0;
}