/*
Given two arrays, write a function to compute their intersection.

Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

Note:

   Each element in the result should appear as many times as it shows in both arrays.
   The result can be in any order.

Follow up:

   What if the given array is already sorted? How would you optimize your algorithm?
   What if nums1's size is small compared to nums2's size? Which algorithm is better?
   What if elements of nums2 are stored on disk,
   and the memory is limited such that you cannot load all elements into the memory at once?

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i =0, j=0;

        while( (i < int(nums1.size())) && (j < int(nums2.size())))
        {
            if (nums1[i]==nums2[j])
            {
                result.push_back(nums1[i]);
                i++; j++;
            }
            else if (nums1[i] > nums2[j]) j++;
            else i++;
        }
        return result;
    }
};
/*
vector<int> intersect(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
    return a;
}
*/
