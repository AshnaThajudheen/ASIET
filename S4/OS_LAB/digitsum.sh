echo "Enter a Number:"
read num
sum=0
while (( $num>0 )); do
digit=$((num % 10))
sum=$(( sum + digit ))
num=$((num/10))
done
echo "The sum of digit is $sum"

