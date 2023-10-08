#include <bits/stdc++.h>
using namespace std;



int removeDuplicates(vector<int> &nums)
{
    int prev = nums[0];
    int cnt = 1;
    int idx = 0;
    
    while (true)
    {
        if (idx == 0)
        {
            idx++;
            continue;
        }
        prev = nums[idx - 1];
        if (prev == nums[idx])
        {
            cnt++;
        }
        else cnt=1;
        if(cnt>=3 && prev==nums[idx]){
            int tidx=idx;
            for(tidx; tidx<nums.size(); tidx++){
                if(prev!=nums[tidx]) break;
            }
            nums.erase(nums.begin()+idx,nums.begin()+tidx);
        }
        idx++;
        if (cnt >= 3)
            cnt = 1;
        if(idx>=nums.size())break;
    }
    return nums.size();
}

int main()
{
    vector<int> num = {1,1,1};
    removeDuplicates(num);
    return 0;
}