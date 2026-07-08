class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left = 0; 
        int n = people.size();
        int right = n - 1;
        int ans = 0;
        int sum{};

        while(left <= right) {
            if(left == right){
            sum = people[left];
            }else{
            sum = people[left] + people[right];
            }
            if(limit == sum) {
                ans++;
                left++;
                right--;
            }else if(limit > sum){
                ans++;
                left++;
                right--;

            }else{
                ans++;
                right--;
            }
         }

         return ans ;

        
    }
};