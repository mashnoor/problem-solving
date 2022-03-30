package main

import "fmt"

// 2
// 1 2 2 2 2 2 3 3 2 2 2 4 4 5 6
// 1 3 3 2
func moveRest(nums *[]int, j, dist int) {
	for i := j; i < len(*nums); i++ {
		(*nums)[j-dist] = (*nums)[j]
	}

	fmt.Println(*nums)
}

func removeElement(nums []int, val int) int {
	k := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] == val {
			for j := i + 1; j < len(nums); j++ {
				if nums[j] != val {
					nums[i] = nums[j]
					dist := j - i
					moveRest(&nums, j, dist)

				}
			}
		}
		k++
	}
	fmt.Println(k)
	return k

}

func main() {

	removeElement([]int{1, 2, 3, 4}, 2)
}
