func twoSum(numbers []int, target int) []int {
L := 0
R := len(numbers)-1
for L < R{
	if numbers[L] + numbers[R] == target{
		return []int{L+1,R+1}
	}
	if numbers[L] + numbers[R] > target{
		R--
		continue
	}
	if numbers[L] + numbers[R] < target{
		L++
		continue
	}
}
return nil
}
