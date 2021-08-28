import random
import _tkinter
##initialize
gacha_times = int(input("Input how many gacha you will purchase:"))
required_number = int(input("Input how many kinds of badges you want to get:"))
goods_number = int(input("Input how many kinds of gacha exist:"))
times = int(input("Input how many times you want to simulate:"))
required = [i + 1 for i in range(required_number)]
succeed = 0

for i in range(times):
    result = []
    flag = 0
    print("%d times simulation" % (i + 1))
    for j in range(gacha_times):
        result.append(random.randint(1, goods_number))

    ##print(result)
    for k in required:
        if k in result:
            flag = flag + 1

    if flag == required_number:
        succeed = succeed + 1
        print('succeed!')

prob = succeed / times
print("probability:%f" % prob)
input("press enter to exit:")