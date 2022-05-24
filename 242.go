package main

import (
	"sort"
	"strings"
)

func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}
	s2 := strings.Split(s, "")
	t2 := strings.Split(t, "")
	sort.Strings(s2)
	sort.Strings(t2)
	for i, _ := range s2 {
		if s2[i] != t2[i] {
			return false
		}
	}
	return true
}
