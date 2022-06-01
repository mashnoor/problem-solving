package main

import "fmt"

func vsum(nums ...int) int {
	sum := 0
	for _, num := range nums {
		sum += num

	}

	return sum
}

func main() {
	fmt.Println(vsum(1))
	fmt.Println(vsum(1,3))
	fmt.Println(vsum(9,12))
	nums := []int{1, 2, 3, 4, 5}
	fmt.Println(vsum(nums...))



}