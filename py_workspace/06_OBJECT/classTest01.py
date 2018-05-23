import sys
import io

sys.stdout = io.TextIOWrapper(sys.stdout.detach(), encoding='utf-8')
sys.stderr = io.TextIOWrapper(sys.stderr.detach(), encoding='utf-8')

class Thing:
    def print_all_thing(self):
        print("all Thing")



class Animal(Thing):
    ani_count = 0 #static 변수


    def _print_all_thing(self): #오버 라이딩 (_package)
        print("animal Thing")

    def __init__(self , name = None): #오버 로딩 (__public__)
         self.__name = name

    def __init__(self , name , animal_short = None):
        self.__name = name
        self.__animal_short = animal_short

    def bark(self,  digType):
        self.__digType = digType
        print("digType : %s" %self.__digType) #(__private)

    def counter(self):
        Animal.counter = 1
        print("counter : %s" %self.__counter)

    def printAnimal(self):
        print("selfName:{0} , AnimalShort:{1}".format(self.name , self.animal_short))

#인스턴스 변수의 사용불가 , class 변수 사용 불가
    @staticmethod
    def staticMoethod(animal_age):
        print("animal age : %s" %animal_age)

#인스턴스 변수의 사용불가 , class 변수만 사용하기 위해
    @classmethod
    def classMethod(cls):
        print("animal count :" , cls.ani_count)

#----------Static 메소드의 호출 ----------------
object01 =  Animal("mark")
object01.staticMoethod(23)

Animal.staticMoethod(24)
#----------Class 메소드의 호출 -----------------
Animal.classMethod()
