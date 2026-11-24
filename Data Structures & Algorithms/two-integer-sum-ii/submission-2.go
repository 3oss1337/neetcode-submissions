func twoSum(numbers []int, target int) []int {
L := 0
R := len(numbers)-1
for L < R{
	num := numbers[L] + numbers[R]
	if num == target{
		return []int{L+1,R+1}
	}
	if num > target{
		R--
		continue
	}
	if num < target{
		L++
		continue
	}
}
return nil
}
