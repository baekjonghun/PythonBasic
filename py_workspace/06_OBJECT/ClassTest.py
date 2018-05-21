class Calculator:
    def __init__(self):
        self.result = 0


#self 로 자기 자신의 객체 임을 명시 한다.
    def adder(self, num):
        self.result += num
        return self.result

# 객체 생성
cal1 = Calculator()
cal2 = Calculator()

print(cal1.adder(3))
print(cal1.adder(4))
print(cal2.adder(3))
print(cal2.adder(7))


# pass     '''pass 란아무것도 수행하지 않겠다는 뜻 주로 임시 클래스 를  만들때 사용한다. '''
class FourCal:
    pass

a   = FourCal()
print(type(a))



 class FourCal2:
#생성자 생성
     def __init__(self,first , second):
         self.first = first
         self.second = second

     def setdata(self, first, second):
         self.first = first
         self.second = second
     def sum(self):
         result = self.first + self.second
         return result
     def mul(self):
         result = self.first * self.second
         return result
     def sub(self):
         result = self.first - self.second
         return result
     def div(self):
        result = self.first / self.second
        return result

# 생성자 의  호출
# a  = FourCal2(3,4)
b  = FourCal2()
a.setdata(4,2)
b.setdata(3,7)


print(a.sum())



class MoreFourCal(FourCal2):

    # 거듭 제곱을 구하는 메소드
    def pow(self):
        result = self.first ** self.second
        return result

    # 메소드 오버 라이딩
    def div(self):
        if self.second == 0:
            return 0
        else:
            return self.first / self.second

c  = MoreFourCal()
# c.mul() 부모의 객체 사용 가능 ..
