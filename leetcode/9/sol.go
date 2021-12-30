package main

import (
	"fmt"
)

func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}
	prev := x
	y := 0
	for x/10 != 0 || x%10!=0 {
		y *= 10
		y += (x % 10)
		x /= 10

	}

	if y == prev {
		return true
	} else {
		return false
	}

}

func main() {
	fmt.Println(isPalindrome(101))
	fmt.Println(isPalindrome(3101))
	fmt.Println(isPalindrome(-101))
	fmt.Println(isPalindrome(1))
	fmt.Println(isPalindrome(-1))


}
