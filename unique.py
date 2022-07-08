numbers=[1,2,1,3,4,4,4,6,7,6]
def unique(numbers):
    unique_numbers = []
    for number in numbers:
        if not number in unique_numbers:
            unique_numbers.append(number)
    print(unique_numbers)

        
    

    return unique_numbers

unique(numbers)