coffee = 10
while True:
    money = int(input("���� �־� �ּ���: "))
    if money == 300:
        print("Ŀ�Ǹ� �ݴϴ�.")
        coffee = coffee -1
    elif money > 300:
        print("�Ž����� %d�� �ְ� Ŀ�Ǹ� �ݴϴ�." % (money -300))
        coffee = coffee -1
    else:
        print("���� �ٽ� �����ְ� Ŀ�Ǹ� ���� �ʽ��ϴ�.")
        print("���� Ŀ���� ���� %d�� �Դϴ�." % coffee)
    if not coffee:
        print("Ŀ�ǰ� �� ���������ϴ�. �ǸŸ� ���� �մϴ�.")
        break



while a < 10:
    a = a+1
    if a % 2 == 0: continue
    print(a)

#���� ����
#while True: 
 #   ������ ����1 
  #  ������ ����2