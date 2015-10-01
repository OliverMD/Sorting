package main

import "fmt"

func main() {
	var test = []int{3,2,1, 4}
	fmt.Printf("%v\n", test)
	sort(test)
	fmt.Printf("%v\n", test)
}

func sort(xs []int){
	for k,_ := range xs {
		a := k
		for j := k-1; j>= 0; j-- {
			if xs[a] < xs[j] {
				temp := xs[a]
				xs[a] = xs[j]
				xs[j] = temp
				a = j
			}
		}
	}
}
