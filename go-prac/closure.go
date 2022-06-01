package main

import "fmt"

func main() {

	var fib func(n int) int

	fib = func(n int) int {
		if n < 2 {
			return n 
		}

		return fib(n-1) + fib(n-2)
	}

	z := fib(7)

	fmt.Println(z)


}