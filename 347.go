package main

func topKFrequent(nums []int, k int) []int {
	var res []int
	numsMap := map[int]int{}
	for _, v := range nums {
		numsMap[v]++
	}

	numsMapSort := map[int][]int{}
	maxTemp := make([]int, len(nums)+1)
	for k, v := range numsMap {
		numsMapSort[v] = append(numsMapSort[v], k)
		maxTemp[v] = 1
	}

	for i := len(maxTemp) - 1; i >= 0; i-- {
		if maxTemp[i] != 0 {
			for _, v := range numsMapSort[i] {
				if k == 0 {
					return res
				}
				res = append(res, v)
				k--
			}
		}
	}
	return res
}
