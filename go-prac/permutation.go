package main

import "fmt"



func permute(a string) []string {
	seen := make(map[string]bool, 26)
	if(len(a) == 0) {
		return []string{}

	}
	if(len(a) == 1) {
		return []string{a}
	}
	if(len(a) == 2){
		return []string{string(a[0])+string(a[1]), string(a[1])+string(a[0])}
	}

	finalResult := make([]string, 0)
	
	for i := 0; i< len(a); i++ {
		fixed := string(a[i])
		if !seen[fixed] {
			seen[fixed] = true
		} else {
			continue
		}
		part1 := a[:i]
		part2 := a[i+1:]
		
		results := permute(part1+part2)
		for j := 0; j< len(results); j++ {
			if len(results[j]) != 0 {
				results[j] = fixed + results[j]
				finalResult = append(finalResult, results[j])
			}
		}
	}

	return finalResult


}

func main() {
	// seen = map[string]bool{}
	x := permute("AAB")
	fmt.Println(x)
	// fmt.Println(len(x))

}