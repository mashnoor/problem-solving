package main

import "fmt"

func spiralOrder(matrix [][]int) []int {
	// 0 -> stable
	// 1 -> increase
	// -1 -> decrease

	hi := len(matrix)
	hj := len(matrix[0])
	total := hi * hj
	currTotal := 0
	mp := make(map[string]bool)
	i := 0
	j := 0
	dir_i := 0
	dir_j := 1

	for ; ; {
		si := fmt.Sprintf("%d", i)
		sj := fmt.Sprintf("%d", j)
		if _, ok := mp[si+sj]; !ok {
			fmt.Println(matrix[i][j])
			mp[si+sj] = true
			currTotal += 1
		}

		if currTotal == total {
			break
		}
		if dir_i == 1 {
			i += 1
		} else if dir_i == -1 {
			i -= 1
		}

		i += 1
		j += 1

	}

}

func main() {

}