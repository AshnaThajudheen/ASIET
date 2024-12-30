echo "Enter first Number:"
read a
echo "Enter second Number:"
read b
echo "Select your choice(1-4)"
echo "1)Addition"
echo "2)substraction"
echo "3)multiplication"
echo "4)substraction"
read op
case $op in
1) echo "Addition"
result=$(( a + b ));;
2) echo "Substraction"
result=$(( a - b ));;
3) echo "multiplication"
result=$(( a * b ));;
4) if [ $((b == 0)) ]; then 
echo "Error:division by zero"
else
echo "division" 
result=$(( a/b ))
fi;;
*) echo "Invalid Choice"
esac
echo "Result is $result"



