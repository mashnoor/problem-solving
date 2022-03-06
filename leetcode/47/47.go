package main

import "fmt"

func appendExtra(value int, perms [][]int) [][]int {
	for i := 0; i < len(perms); i++ {
		curr := perms[i]
		curr = append([]int{value}, curr...)
		perms[i] = curr

	}
	return perms
}

func joinSlice(s1, s2 []int) []int {
	var finSlice []int
	for _, v := range s1 {
		finSlice = append(finSlice, v)
	}

	for _, v := range s2 {
		finSlice = append(finSlice, v)
	}

	return finSlice

}

func slcToStr(i []int) string {
	var res string
	for _, v := range i {
		s := fmt.Sprintf("%d", v)
		res += s
	}

	return res
}

func permute(nums []int) [][]int {

	if len(nums) == 1 {
		return [][]int{nums}
	} else if len(nums) == 2 {
		perm1 := []int{nums[0], nums[1]}

		perm2 := []int{nums[1], nums[0]}

		return [][]int{perm1, perm2}
	} else {
		var result [][]int
		for i := 0; i < len(nums); i++ {

			s1 := nums[0:i]
			s2 := nums[i+1:]

			needToPerm := joinSlice(s1, s2)

			res := permute(needToPerm)

			appendNew := appendExtra(nums[i], res)

			for _, s := range appendNew {

				result = append(result, s)

			}
		}
		return result
	}

}

func permuteUnique(nums []int) [][]int {
	doneAlready := make(map[string]bool)
	var finalResult [][]int
	per := permute(nums)
	for _, p := range per {
		if _, ok := doneAlready[slcToStr(p)]; !ok {
			finalResult = append(finalResult, p)
			doneAlready[slcToStr(p)] = true
		}
	}

	return finalResult
}
func main() {
	res := permuteUnique([]int{1, 2, 3})
	fmt.Println(res)

}
