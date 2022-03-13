package main

import (
	"fmt"
	"strconv"
)

func isValidIp(p1, p2, p3, p4 string) bool {
	if p1 == "" || p2 == "" || p3 == "" || p4 == "" {
		return false
	}
	if p1[0] == '0' && len(p1) > 1 {
		return false
	}

	if p2[0] == '0' && len(p2) > 1 {
		return false
	}

	if p3[0] == '0' && len(p3) > 1 {
		return false
	}

	if p4[0] == '0' && len(p4) > 1 {
		return false
	}
	//if p1[0] == '0' || p2[0] == '0' || p3[0] == '0' || p4[0] == '0' {
	//	return false
	//}
	p1i, _ := strconv.Atoi(p1)
	p2i, _ := strconv.Atoi(p2)
	p3i, _ := strconv.Atoi(p3)
	p4i, _ := strconv.Atoi(p4)

	if p1i > 255 || p2i > 255 || p3i > 255 || p4i > 255 {
		return false
	}

	return true

}

func restoreIpAddresses(s string) []string {

	lent := len(s)

	resIps := make([]string, 0)

	for j := 0; j < lent; j++ {
		for k := j + 1; k < lent; k++ {
			for l := k + 1; l <= lent; l++ {
				p1 := s[0:j]
				p2 := s[j:k]
				p3 := s[k:l]
				p4 := s[l:lent]
				if isValidIp(p1, p2, p3, p4) {
					currIp := fmt.Sprintf("%s.%s.%s.%s", p1, p2, p3, p4)
					resIps = append(resIps, currIp)
				}

			}
		}

	}

	return resIps

}

func main() {
	fmt.Println(restoreIpAddresses("25525511135"))

}
