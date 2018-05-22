def sum(a,b):
    return a + b


#1.해당경로로 가서 ptrhon 실행 
#2.import mod1 
#3.print(mod1.sum(1,2))


def safe_sum(a, b): 
    if type(a) != type(b): 
        print("더할수 있는 것이 아닙니다.")
        return 
    else: 
        result = sum(a, b) 
    return result


#print(mod1.safe_sum(1, 'a'))
#더할 수 있는 값이 아닙니다.
#None


from mod1 import sum
sum(3, 4) #함수의 바로 사용 


from mod1 import * #mod1 파일의 모든 겍체


#main 다음 객체만 실행되도록 한다.
if __name__ == "__main__":
    print(safe_sum('a', 1))
    print(safe_sum(1, 4))
    print(sum(10, 10.4))

