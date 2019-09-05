# Permutation
Generating the Next Permutation in Lexicographic Order
##### What is Lexicographic Order? 
I think it is the next largest Permutation, ex [1,2,3] < [1,3,2] < [2,1,3] ...etc
## ALGORITHM
**procedure** next permutation( a <sub>1</sub> a<sub>2</sub> . . . a<sub>n</sub>  : permutation of {1, 2, . . . , n} not equal to n n − 1 . . . 2 1)
j := n − 1
**while** a <sub>j</sub> > a <sub>j+1</sub>
j := j − 1
{j is the largest subscript with a <sub>j</sub> < a <sub>j+1</sub> }
k := n
**while** a <sub>j</sub> > a <sub>k</sub>
k := k − 1
{a <sub>k</sub> is the smallest integer greater than a j to the right of a <sub>j</sub> }
interchange a <sub>j</sub> and a <sub>k</sub>
r := n
s := j + 1
while r > s
interchange a <sub>r</sub> and a <sub>s</sub>
r := r − 1
s := s + 1
<br></br>
***What does it mean??***
Ex 12365
- cacluate the target; left number less than right number. which is 3
- the smallest of the biggest number on the right of it.(5)
- swap them numbers the two numbers => 12563
- order the rest the number from the samellest ot the biggest! ==> 12536


### Installation

This application requires g++ and git.

Install the dependencies in Ubuntu just like this
```
sudo apt-get g++

sudo apt-get git
```
## How to Run
```
make
./main
```


### Development
Done


### Todos

 - Write MORE Tests

License
----
**Free Software, Hell Yeah!**
