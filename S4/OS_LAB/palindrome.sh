echo "Enter a number:"
read num
temp=$num
reverse=0
while (( $temp > 0 )); do
digit=$((num%10))
reverse=$((reverse*10+digit))
temp=$((num/10))
done
if [ $temp == $reverse ]; then
echo "The number is palindrome"
else
echo "The number is not palindrome"
fi
