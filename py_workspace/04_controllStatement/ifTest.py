if 2<3:
    print("3이 더 큽니다.")
else:
    print("2가 더 큽니다.")


    #-연습문제
a = "Life is too short, you need python"
if 'wife' in a: #in~~ wife 가 있는가 
    print('wife')
elif 'python' in a and 'you' not in a: #not in~~ 조건안에 you 가 없는가 ? 
    print('python')
elif 'shirt' not in a:
    print('shirt')
elif 'need' in a:
    print('need')
else:
    print('none')