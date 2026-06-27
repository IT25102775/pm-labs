a=6
b=9
c=14
flag=1

c==a+b||!flag
  a+b=15
  c==15
  false || !flag
  false

a != 7 && flag || c >=6
  c >=6 true
  a != 7 true
  true && flag true
  true || true 
  true

!(b <= 12) && a % 2 == 0
  (b <= 12) true
  !true false
  false

!(a > 5 || c < a +b)
  a + b = 15
  a > 5 true
  c < 15 true
  true || true true
  !true
  false


   
