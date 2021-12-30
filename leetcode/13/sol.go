package main

import "fmt"

func romanToInt(s string) int {
	rtoi := make(map[string]int)
	rtoi["I"] = 1
	rtoi["V"] = 5
	rtoi["X"] = 10
	rtoi["L"] = 50
	rtoi["C"] = 100
	rtoi["D"] = 500
	rtoi["M"] = 1000

	l := len(s)
	
	i := 0

	convInt := 0
	for ; i < l; i++ {
		if i+1<l && rtoi[string(s[i+1])]>rtoi[string(s[i])] {
			convInt -= rtoi[string(s[i])]

		} else {
			convInt += rtoi[string(s[i])]
		}
		
	}
	return convInt

}

func main() {
	fmt.Println(romanToInt("III"))

}
