import "slices"
func threeSum(nums []int) [][]int {
	slices.Sort(nums)
	n := len(nums)
	res := [][]int{}

	for i := 0; i < n-2; i++ {
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}
		if nums[i]+nums[i+1]+nums[i+2] > 0 {
			break
		}
		if nums[i]+nums[n-1]+nums[n-2] < 0 {
			continue
		}

		L, R := i+1, n-1
		for L < R {
			sum := nums[L] + nums[R] + nums[i]
			if sum == 0 {
				res = append(res, []int{nums[i], nums[L], nums[R]})
				currL, currR := nums[L], nums[R]
				for L < R && nums[L] == currL {
					L++
				}
				for L < R && nums[R] == currR {
					R--
				}
			} else if sum < 0 {
				L++
			} else {
				R--
			}
		}
	}
	return res
}