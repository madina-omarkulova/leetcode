package main

func groupAnagrams(strs []string) [][]string {
	res := make(map[string][]string)
	for i := 0; i < len(strs); i++ {
		var t [26]int
		for _, k := range strs[i] {
			t[int(k)-'a']++
		}
		temp := ""
		for _, p := range t {
			temp += string(p)
		}
		e := res[temp]
		e = append(e, strs[i])
		res[temp] = e
	}
	v := make([][]string, 0, len(res))
	for i, value := range res {
		v1 := make([]string, 0, len(res[i]))
		for _, k := range value {
			v1 = append(v1, k)
		}
		v = append(v, v1)
	}
	return v
}
