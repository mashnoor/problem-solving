package main

import "fmt"

func removeDuplicates(nums []int) (int, []int) {

	l := len(nums)
	j := -1
	lstMx := nums[0]
	mx := nums[l-1]
	k := 0
	for i := 1; i < l; i++ {

		if nums[i] == mx {
			return k + 1, nums
		}

		if nums[i-1] >= nums[i] {

			if j < 0 {
				j = i
			}

			for ; j < l; j++ {

				if nums[j] > lstMx {

					nums[i] = nums[j]
					lstMx = nums[j]
					k++
					break
				}
			}

		}

	}

	return k + 1, nums

}

func main() {
	x, y := removeDuplicates([]int{1, 2, 2})
	//x, y := removeDuplicates([]int{0, 0, 1, 1, 1, 2, 2, 3, 3, 4})
	fmt.Println(x, y)

}
