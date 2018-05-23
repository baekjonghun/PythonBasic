class Student :

    def __init__(self , st_name , st_id  , st_phone):
        self.st_name = st_name
        self.st_id = st_id
        self.st_phone = st_phone

    def print_information(self):
        print("name = {0} , id = {1} , phone = {2}".format(self.st_name ,  self.st_id , self.st_phone))
