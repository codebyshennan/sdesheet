class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int slow = nums[0];
    int fast = nums[0];

    // wait for slow and fast to meet
    do
    {
      // traverse the list like a linked list
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
      slow = nums[slow];
      fast = nums[fast];
    }
    return slow;
  }
}