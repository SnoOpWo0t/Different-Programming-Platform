#include<bits/stdc++.h>
using namespace std ;
int solve()
{
    int n , one =0 , two =0; //one = alce two = bob
        cin>>n;
        vector<int> v(n);
        for(int i = 0 ; i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for(auto i:v)
        {
            if(one<=two)
             one +=i;
             else 
              two +=i;
        }
        one ==two? cout<<"YES\n": cout<<"NO\n";
        return 0;
}
int main ()
{
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


/*In the code you've provided, sorting is essential because the goal is to divide the chocolates (represented by their weights) between Alice and Bob in such a way that their total weights are as equal as possible. Here's why sorting is necessary:

### The Problem:
- You want to distribute the chocolates such that the total weight Alice has (`one`) and the total weight Bob has (`two`) are as close as possible. 
- The approach used here is a greedy strategy: 
  - You start by assigning the heaviest available chocolate to the person who currently has the least weight.
  - This strategy helps to balance the weights more effectively.

### Why Sorting Matters:
- **Maximizing Balance:** By sorting the weights in descending order (`sort(v.rbegin(), v.rend());`), you ensure that you always try to balance the totals by adding the largest remaining weight to the lighter side (either Alice or Bob).
  - If you didn't sort, you might end up adding a smaller chocolate when a larger one would have been more effective in balancing the totals.
  
- **Greedy Algorithm:** The greedy approach works well when you pick the largest items first because this allows you to address the largest imbalances early on. If you added the smaller chocolates first, you might end up with a more significant imbalance that the remaining chocolates can't correct.
### Example:
Let's consider a simple example with chocolate weights `[7, 5, 3, 2]`.

1. **Without Sorting:**
   - Suppose we distribute them as we read them (without sorting): 
   - First round: Alice gets `7`, Bob gets `5`. (`Alice = 7`, `Bob = 5`)
   - Second round: Alice gets `3`, Bob gets `2`. (`Alice = 10`, `Bob = 7`)
   - Result: The difference is `3` (`10 vs 7`).

2. **With Sorting (Descending):**
   - After sorting: `[7, 5, 3, 2]` (already sorted in descending order).
   - First round: Alice gets `7`, Bob gets `5`. (`Alice = 7`, `Bob = 5`)
   - Second round: Bob gets `3`, Alice gets `2`. (`Alice = 9`, `Bob = 8`)
   - Result: The difference is just `1` (`9 vs 8`), much closer than without sorting.

### Conclusion:
Sorting helps to ensure that the greedy algorithm distributes the weights more evenly between Alice and Bob, which increases the chances of getting equal or nearly equal totals.*/