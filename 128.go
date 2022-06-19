package main

func longestConsecutive(nums []int) int {
	set := make(map[int]bool)

	for i := range nums {
		set[nums[i]] = true
	}

	ans := 0

	for n := range set {
		if set[n-1] {
			continue
		}

		c := 0

		for set[n] {
			c++
			n++
		}

		ans = max(ans, c)
	}
	return ans
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
