def day2_part1():
    checksum = 0
    f = open('input.txt', 'r')
    for line in f.readlines():
        nums = list(map(int, line.split()))
        checksum = checksum + max(nums) - min(nums)
    f.close()
    print checksum
    return checksum

def day2_part2():
    result = 0
    f = open('input.txt', 'r')
    for line in f.readlines():
        nums = list(map(int, line.split()))
        for i in range(0, len(nums)-1):
            for j in range(i+1, len(nums)):
                if (nums[i] % nums[j] == 0):
                    result = result + (nums[i]/nums[j])
                elif (nums[j] % nums[i] == 0):
                    result = result + (nums[j]/nums[i])
    f.close()
    print result
    return result

day2_part2()
