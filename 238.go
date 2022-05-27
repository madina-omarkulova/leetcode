package main

func productExceptSelf(nums []int) []int {
	prod := 1
	var ans []int
	z := 0
	for _, k := range nums {
		if k != 0 {
			prod *= k
		} else {
			z++
		}
	}
	for _, k := range nums {
		if k == 0 && z == 1 {
			ans = append(ans, prod)
		} else if z > 0 {
			ans = append(ans, 0)
		} else {
			ans = append(ans, prod/k)
		}
	}
	return ans
}
