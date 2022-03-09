package main

import (
	"fmt"
	"math"
)

func maxSubArray(nums []int) int {
	max := math.MinInt
	currSum := 0
	if len(nums) == 1 {
		return nums[0]
	}

	for i := 0; i < len(nums); i++ {

		currSum += nums[i]
		fmt.Println(currSum)

		if max < currSum {
			max = currSum
		}

		if currSum < 0 {
			currSum = 0
		}

	}

	return max

}

func main() {

	fmt.Println(maxSubArray([]int{-2, 1}))
	//fmt.Println(maxSubArray([]int{-2, 1, -3, 4, -1, 2, 1, -5, 4}))
	//fmt.Println(maxSubArray([]int{5, 4, -1, 7, 8}))
	//fmt.Println(maxSubArray([]int{-1, -2}))

}
