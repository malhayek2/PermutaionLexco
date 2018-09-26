# PermutaionLexco

Following this alg to generate the permutation. 
/*procedure next permutation(a1a2 . . . an: permutation of
{1, 2, . . . , n} not equal to n n - 1 . . . 2 1)
j := n - 1
while aj > aj+1
j := j - 1
{j is the largest subscript with aj < aj+1}
k := n
while aj > ak
k := k - 1
{ak is the smallest integer greater than aj to the right of aj}
interchange aj and ak
r := n
s := j + 1
while r > s
interchange ar and as
r := r - 1
s := s + 1*/
