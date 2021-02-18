/*
B. Taxi drivers and Lyft
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Palo Alto is an unusual city because it is an endless coordinate line. It is also known for the office of Lyft Level 5.

Lyft has become so popular so that it is now used by all  taxi drivers in the city, who every day transport the rest of the city residents —  riders.

Each resident (including taxi drivers) of Palo-Alto lives in its unique location (there is no such pair of residents that their coordinates are the same).

The Lyft system is very clever: when a rider calls a taxi, his call does not go to all taxi drivers, but only to the one that is the closest to that person. If there are multiple ones with the same distance, then to taxi driver with a smaller coordinate is selected.

But one morning the taxi drivers wondered: how many riders are there that would call the given taxi driver if they were the first to order a taxi on that day? In other words, you need to find for each taxi driver  the number  — the number of riders that would call the -th taxi driver when all drivers and riders are at their home?

The taxi driver can neither transport himself nor other taxi drivers.

Input
The first line contains two integers  and  () — number of riders and taxi drivers.

The second line contains  integers  (), where  is the coordinate where the -th resident lives.

The third line contains  integers  (). If , then the -th resident is a taxi driver, otherwise .

It is guaranteed that the number of  such that  is equal to .

Output
Print  integers , where  is the answer for the -th taxi driver. The taxi driver has the number  if among all the taxi drivers he lives in the -th smallest coordinate (see examples for better understanding).
*/
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
      
      int n,m;
       cin>>n>>m;
        
        int cord[n+m];
        for(int i=0;i<n+m;++i)
        cin>>cord[i];
        bool tax[n+m];
        for(int i=0;i<n+m;++i)
            cin>>tax[i];
        queue<int> q;
        vector<bool> vis(n+m,false);
        for(int i=0;i<n+m;++i)
            if(tax[i]) q.push(i);

        while(!q.empty())
      return 0;

 }