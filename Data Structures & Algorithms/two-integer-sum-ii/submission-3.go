func twoSum(numbers []int, target int) []int {
L := 0
R := len(numbers)-1
for L < R{
	num := numbers[L] + numbers[R]
	if num == target{
		return []int{L+1,R+1}
	}else if num > target{
		R--
	}else{
		L++}
}
return nil
}
