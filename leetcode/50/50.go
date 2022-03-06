package main

import "fmt"

func newPost(x float64, n int, data map[int]*float64) float64 {
	if n == 0 {
		return 1.0
	} else if n > 0 {

		if n%2 == 0 {
			if d, ok := data[n/2]; ok {
				return *d * *d
			} else {
				*data[n/2] = myPow(x, n/2)
				return *data[n/2] * *data[n/2]
			}

		} else {
			return x * myPow(x, n-1)
		}

	} else {

		k := n * (-1)

		if k%2 == 0 {
			if d, ok := data[k/2]; ok {
				return *d * *d
			} else {
				*data[k/2] = myPow(x, n/2)
				return *data[k/2] * *data[k/2]
			}

		} else {
			return (1.0 / x) * myPow(x, n+1)
		}

	}
}

func myPow(x float64, n int) float64 {

	data := make(map[int]float64)

	newPost(x, n, &data)

}

func main() {
	fmt.Println(myPow(2.10000, 3))
}
