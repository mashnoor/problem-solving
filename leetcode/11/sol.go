package main

import "fmt"


func maxArea(height []int) int {
	l := len(height) - 1
	maxWater := -1
	for i := 0; i <= l; {
		w := l - i
		
		a := 0
		if height[i] < height[l] {
			a = w * height[i]
			
			i++

		} else {
			a = w * height[l]

			l--
		}
		if a > maxWater {
			maxWater = a
		}
	}
	return maxWater
}

func main() {
	fmt.Println(maxArea([]int{1,1}))

}
