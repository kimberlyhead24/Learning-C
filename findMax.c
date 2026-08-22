int findMax(const int *nums, int numsSize) {
  int largest = nums[o];

  for (int i = 1, i <numsSize; i++) {
    if (nums[i] > largest) {
      largest = nums[i];
    }
  }

  return largest;
}
