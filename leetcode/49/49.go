package main

import (
	"fmt"
	"sort"
	"strings"
)

func SortString(w string) string {
	s := strings.Split(w, "")
	sort.Strings(s)
	return strings.Join(s, "")
}

func groupAnagrams(strs []string) [][]string {
	mapStrs := make(map[string][]string)
	var result [][]string
	for _, s := range strs {
		tmp := SortString(s)
		if _, ok := mapStrs[tmp]; !ok {
			mapStrs[tmp] = []string{s}
		} else {
			mapStrs[tmp] = append(mapStrs[tmp], s)
		}
	}
	for _, mapStrings := range mapStrs {
		var currentResult []string
		for _, mapString := range mapStrings {
			currentResult = append(currentResult, mapString)
		}

		result = append(result, currentResult)

	}

	return result

}

func main() {

	fmt.Println(groupAnagrams([]string{"abc", "bac"}))
}
