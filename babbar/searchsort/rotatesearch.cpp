 #include<bits/stdc++.h>
 using namespace std;
 //handle duplicate also, search in sorted  rotated array
 int search(vector<int>nums,int target)
 {
     int l=0,h=nums.size()-1;
        while(l<=h)
        {
            int mid=(h+l)/2;
            if((nums[l]==nums[mid])&&(nums[mid]==nums[h])){
                l++;h--;
            }
            if(nums[mid]==target)
                return mid;
            if(nums[l]<=nums[mid])
            {
                if(target>=nums[l]&&target<=nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(target>=nums[mid]&&target<=nums[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return -1;
 }
 int main()
 {
     int n;cin>>n;
     vector<int>nums(n);
     for(int i=0;i<n;++i)
     cin>>nums[i];
     int target;
     cin>>target;
     cout<<search(nums,target)<<endl;
     return 0;
 }
 