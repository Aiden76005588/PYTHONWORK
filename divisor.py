while(True):
    try:
        input_num = int(input("약수를 구할 숫자를 입력해주세요 : ")) break
        except:
            print("숫자만 입력하실 수 있습니다")
            count = 0
            print(input_num, "의 약수 : ", end='')
            for a in range(1, input_num+1):
                if input_num == a:
                    print(a) count += 1
                elif input_num % a == 0:
                    print(a, end=', ') count += 1
                    print(input_num, "의 약수의 총 개수 : ", count)
