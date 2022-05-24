package main

func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}
	m := [26]int{}
	for _, r := range s {
		m[r-'a']++
	}
	n := [26]int{}
	for _, r := range t {
		n[r-'a']++
	}
	return m == n
}
