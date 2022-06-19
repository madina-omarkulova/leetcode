package main

func maxArea(height []int) int {
	i, j := 0, len(height)-1
	ans := 0
	for i < j {
		ans = Max(ans, (j-i)*Min(height[i], height[j]))
		if height[j] > height[i] {
			i++
		} else {
			j--
		}
	}
	return ans
}

func Min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func Max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
