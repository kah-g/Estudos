#Project for A...

def getAnswer ():
    #im gonna use this function to get the answer to the questions
    while True:
        #this while is to make sure that the user will give an appropriate answer, only Y or N will be accepted
        try:
            answerQ = str (input())
        except ValueError:
            print ("Error: Invalid Input. Try again")
            continue
        if not (answerQ == 'Y' or answerQ == 'N' or answerQ == 'y' or answerQ == 'n'):
            print ("Error: Invalid Input. The answer must be Y, N, y, n. Try again")
            continue
        break
    if (answerQ == 'y' or answerQ == 'Y'):
        #here im converting the y or n in true or false, so i can pass the answer to the variable
        #if yes it returns true, if n it returns false
        return True
    else:
        return False


costumerTrackingNumber = False #this is a boolean to check if the costumer knows the tracking number, its set to false
returnDelivered = False #another boolean to check if the return was delivered
isPowerSeller = False #boolean again to check if seller is powerseller

print ("----------------------------------------------------------------------")
print ("-> Does the costumer knows the tracking number? Enter Y or N.")
costumerTrackingNumber = getAnswer() #the answer goes straight to the variable as true or false
print ("-> The return was delivered? Enter Y or N.")
returnDelivered = getAnswer()
print ("-> Is the seller a powerseller? Enter Y or N.")
isPowerSeller = getAnswer()

print ("----------------------------------------------------------------------")
if (costumerTrackingNumber == True and returnDelivered == True and isPowerSeller == True):
    #we checked if the conditions were true and print the answers
    print ("All the condition were met.")
    print ("--> Does the costumer knows the tracking number? " + str(costumerTrackingNumber))
    print ("--> The return was delivered? " + str(returnDelivered))
    print ("--> Is the seller a powerseller? " + str(isPowerSeller))
    print ("You can carry out with the refund.")
else:
    print ("One or more of the conditions were not met.")
    print ("--> Does the costumer knows the tracking number? " + str(costumerTrackingNumber))
    print ("--> The return was delivered? " + str(returnDelivered))
    print ("--> Is the seller a powerseller? " + str(isPowerSeller))
    print ("Refund not available")
