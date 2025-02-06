import random

def find_cat_greedy(boxes=5, days=10):
    cat_position = random.randint(0, boxes - 1)  # Cat starts in a random box
    print(f"Cat starts in box {cat_position}")

    for day in range(days):
        guess = day % boxes  # Greedy guess based on a pattern
        print(f"Day {day + 1}: Checking box {guess}")

        if guess == cat_position:
            print(f"Found the cat in box {guess} on day {day + 1}!")
            return day + 1
        
        # Cat moves left or right randomly
        if cat_position == 0:
            cat_position += 1
        elif cat_position == boxes - 1:
            cat_position -= 1
        else:
            cat_position += random.choice([-1, 1])
    
    print("Could not find the cat in given days.")
    return -1

find_cat_greedy()