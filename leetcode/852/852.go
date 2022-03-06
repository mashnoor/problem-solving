package main 
import "fmt"

func peakIndexInMountainArray(arr []int) int {
	l := len(arr)
	mid := (l/2)
	if (arr[mid-1]<arr[mid]) && (arr[mid]<arr[mid+1]) {
		return mid
	} else if arr[mid-1]>arr[mid] {
		fmt.Println("here")
		return peakIndexInMountainArray(arr[0:mid])
	} else {
		fmt.Println("not")
		return peakIndexInMountainArray(arr[mid:l])
	}


    
}

func main() {
	peakIndexInMountainArray([]int{0,2,1,0})
}