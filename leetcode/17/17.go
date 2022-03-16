package main

import "fmt"

func joins(s1, s2 []string) []string {
	res := make([]string, 0)
	for i := 0; i < len(s1); i++ {
		for j := 0; j < len(s2); j++ {
			curr := s1[i] + "" + s2[j]
			res = append(res, curr)
		}
	}
	return res
}
func letterCombinations(digits string) []string {
	if digits == "" {
		return []string{}
	}
	//res := make([]string, 0)
	mps := make(map[byte][]string)
	mps['2'] = []string{"a", "b", "c"}
	mps['3'] = []string{"d", "e", "f"}
	mps['4'] = []string{"g", "h", "i"}
	mps['5'] = []string{"j", "k", "l"}
	mps['6'] = []string{"m", "n", "o"}
	mps['7'] = []string{"p", "q", "r", "s"}
	mps['8'] = []string{"t", "u", "v"}
	mps['9'] = []string{"w", "x", "y", "z"}

	totalC := len(digits)
	currRes := []string{""}
	for i := 0; i < totalC; i++ {
		//res = make([]string, 0)

		currRes = joins(currRes, mps[digits[i]])

	}

	return currRes
}

func main() {

	fmt.Println(letterCombinations(""))

}
