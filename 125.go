package main

import (
	"strings"
	"unicode"
)

func isPalindrome(s string) bool {
	f, l := 0, len(s)-1
	s = strings.ToUpper(s)
	for f < l {
		for !unicode.IsDigit(rune(s[f])) && !unicode.IsLetter(rune(s[f])) && f < l {
			f++
		}
		for !unicode.IsDigit(rune(s[l])) && !unicode.IsLetter(rune(s[l])) && f < l {
			l--
		}
		if s[l] != s[f] {
			return false
		}
		f++
		l--
	}
	return true
}
