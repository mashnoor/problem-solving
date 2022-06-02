package main

import (
	"testing"
)


func vsum(a, b int) int {
	return a + b
}

func Testvsum(t *testing.T) {
	ans := vsum(2, 3)
	if ans != 5 {
		t.Errorf("error in testing")
	}
}

// func main() {

// }