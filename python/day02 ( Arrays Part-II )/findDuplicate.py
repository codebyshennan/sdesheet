class Solution:
  findDuplicate(self, nums: int):
    slow = nums[0]
    fast = nums[0]

    while slow != fast:
      slow = nums[slow]
      fast = nums[nums[fast]]

    fast = nums[0]

    while slow != fast:
      slow = nums[slow]
      fast = nums[fast]

    return slow