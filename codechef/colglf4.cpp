#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 int recur(int items,int eggs,int choco,int a,int b,int c)
 {

   int x,y,z;
   while(items)
   {
     case 0 :
      eggs=eggs/2<items;

   }
 }
 
 int main()
 {
     int t; 
     cin>>t;
      while(t--) 
      {
          int eggs,choco,items,a,b,c;
          cin>>items>>eggs>>choco>>a>>b>>c;
          int res=recur(items,eggs,choco,a,b,c);
          //vector<vector<vector<int> > >dp(items,vector<vector<int> >(eggs,vector<int>(chcoco,INT_MAX)));
            if(res==INT_MAX) 
            cout<<"-1\n";
            else
            cout<<res<<endl;
      }
  return 0;
 }



// int recur(int items,int eggs,int choco,int &a,int &b,int &c)
//  {
//     if(items>0&&((choco==0&&eggs<2)||(eggs==0&&choco<3))) return INT_MAX;   
//     if(items==0) return 0;
   
//     int eg,ch,mix;
//     if(choco==0)
//     {
//         return (eggs/2)<items?INT_MAX:a*items;
//         //eg=recur(items-1,eggs-2,choco,a,b,c);
//         //return eg!=INT_MAX?eg+a:INT_MAX;
//     }
//     else if(eggs==0)
//     {
//         return (choco/3)<items?INT_MAX:b*items;
//         // ch=recur(items-1,eggs,choco-3,a,b,c);
//         // return (ch!=INT_MAX)?ch+b:INT_MAX;
//     }
//     else
//     {
//       if(eggs<2&&choco<3)
//       {
//           mix=recur(items-1,eggs-1,choco-1,a,b,c);
//          return mix=(mix!=INT_MAX)?mix+c:INT_MAX;
//       }
//       else if(eggs<2)
//       {
//           ch=recur(items-1,eggs,choco-3,a,b,c);
//             ch=(ch!=INT_MAX)?ch+b:INT_MAX;
//             mix=recur(items-1,eggs-1,choco-1,a,b,c);
//             mix=(mix!=INT_MAX)?mix+c:INT_MAX;
//             return min(ch,mix);
//         }
//         else if(choco<3)
//         {
//             eg=recur(items-1,eggs-2,choco,a,b,c);
//             eg=eg!=INT_MAX?eg+a:INT_MAX;
//             mix=recur(items-1,eggs-1,choco-1,a,b,c);
//             mix=(mix!=INT_MAX)?mix+c:INT_MAX;
//             return min(eg,mix);
//         }
//         else
//         {
//             eg=recur(items-1,eggs-2,choco,a,b,c);
//             eg=eg!=INT_MAX?eg+a:INT_MAX;
//             ch=recur(items-1,eggs,choco-3,a,b,c);
//             ch=(ch!=INT_MAX)?ch+b:INT_MAX;
//             mix=recur(items-1,eggs-1,choco-1,a,b,c);
//             mix=(mix!=INT_MAX)?mix+c:INT_MAX;
//             return min(min(eg,mix),ch);
//         }
//     }
    
//  }