func isPalindrome(s string) bool {
	L := 0
	R := len(s) - 1
	for L < R {
		if !unicode.IsLetter(rune(s[L])) && !unicode.IsDigit(rune(s[L])){
			L++
			continue
		} 
		if !unicode.IsLetter(rune(s[R])) && !unicode.IsDigit(rune(s[R])){
			R--
			continue
		}
		if unicode.ToLower(rune(s[L])) != unicode.ToLower(rune(s[R])){
			return false
		}
		L++
		R--

	}
	return true

}
