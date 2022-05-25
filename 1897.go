package main

func makeEqual(words []string) bool {
	count := [26]int{}
	for _, k := range words {
		for _, l := range k {
			count[l-'a']++
		}
	}
	for i := 0; i < 26; i++ {
		if count[i]%len(words) != 0 {
			return false
		}
	}
	return true
}
