/*
B. Card Deck
time limit per test1 second
memory limit per test512 megabytes
inputstandard input
outputstandard output
You have a deck of n cards, and you'd like to reorder it to a new one.
Each card has a value between 1 and n equal to pi. All pi are pairwise distinct. Cards in a deck are numbered from bottom to top, i. e. p1 stands for the bottom card, pn is the top card.
In each step you pick some integer k>0, take the top k cards from the original deck and place them, in the order they are now, on top of the new deck. You perform this operation until the original deck is empty. (Refer to the notes section for the better understanding.)
Let's define an order of a deck as ∑i=1nnn−i⋅pi.
Given the original deck, output the deck with maximum possible order you can make using the operation above.
Input
The first line contains a single integer t (1≤t≤1000) — the number of test cases.
The first line of each test case contains the single integer n (1≤n≤105) — the size of deck you have.
The second line contains n integers p1,p2,…,pn (1≤pi≤n; pi≠pj if i≠j) — values of card in the deck from bottom to top.
It's guaranteed that the sum of n over all test cases doesn't exceed 105.
Output
For each test case print the deck with maximum possible order. Print values of cards in the deck from bottom to top.
If there are multiple answers, print any of them.
Example
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
     cin>>t;
      while(t--)
      {
          int n;
           cin>>n;
            int a[n];
             for(int i=0;i<n;++i)
                cin>>a[i];
                int end=n;
                while(end>0)
                {
                    int res=(max_element(a,a+end)-a);
                    for(int j=res;j<end;++j)
                    cout<<a[j]<<" ";
                    end=res;
                }
           cout<<endl;
      }
     return 0;
}