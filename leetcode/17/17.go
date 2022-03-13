package main

func letterCombinations(digits string) []string {
	res := make([]string, 0)
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
	for _, c :=
}

func main() {

}
