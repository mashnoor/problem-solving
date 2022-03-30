package main

import "fmt"

func removeDuplicates(nums []int) int {

	// 0,0,1,1,1,2,2,3,3,4, 5
	// 0,1, 1, 1
	l := len(nums)
	j := -1
	lstMx := nums[0]
	mx := nums[l-1]
	i := 1
	for i = 1; i < l; i++ {
		//fmt.Println(lstMx)

		if nums[i-1] >= nums[i] {
			if j < 0 {
				j = i + 1
			}

			for ; j < l; j++ {
				if nums[j] > lstMx {
					nums[i] = nums[j]
					lstMx = nums[j]
					break
				}
			}

			if lstMx == mx {
				fmt.Println(nums)
				return i + 1
			}
		}

	}
	//fmt.Println(nums)
	return i + 1

}

func main() {
	fmt.Println(removeDuplicates([]int{}))

}
