package main

import "fmt"

func searchInsert(nums []int, target int) int {
	if target > nums[len(nums)-1] {
		return len(nums)
	}
	i := 0
	j := len(nums) - 1
	mid := 0
	for i <= j {
		//fmt.Println(i, j)
		mid = (i + j) / 2
		if nums[mid] == target {
			return mid
		} else if target < nums[mid] {
			j = mid - 1
		} else if target > nums[mid] {
			i = mid + 1
		}
	}

	return j + 1

}

func main() {

	fmt.Println(searchInsert([]int{1, 3}, 2))

}
