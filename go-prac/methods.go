package main 

import (
	"fmt"
	"math"
)


type rect struct {
	height int
	width int
}

type circle struct {
	radius int
}

type geometry interface {
	area() float64
	perim() float64
}

func (c *circle) area() float64 {

	return 3.1415 * math.Pow(float64(c.radius), 2)
}

func (r rect) area() float64 {
	return float64(r.height) * float64(r.width)
}

func (r rect) perim() float64 {
	return 2.0 * float64(r.height + r.width)
}

func measure(g geometry) {
	fmt.Println(g)
	fmt.Println(g.area())
	fmt.Println(g.perim())

}

func main() {

	r := rect{height: 10, width: 20}
	measure(r)
	// rp := &r
	// fmt.Println(*rp)
	// fmt.Println(r.area())
	// fmt.Println(r.perim())


}