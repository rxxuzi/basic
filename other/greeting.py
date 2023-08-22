<<<<<<< HEAD
import datetime

now = datetime.datetime.now()
hour = now.hour

if 6 <= hour < 12:
    ##6 ~ 12 hrs
    greeting = "morning"
elif 12 <= hour < 15:
    ##12 ~ 15 hrs
    greeting = "noon"
elif 15 <= hour < 18:
    ##15 ~ 18 hrs
    greeting = "afternoon"
elif 18 <= hour < 22:
    ##18 ~ 22 hrs
    greeting = "evening"
else:
    ##22 ~ 6 hrs
    greeting = "night"

print("Good", greeting)
=======
import datetime

now = datetime.datetime.now()
hour = now.hour

if 6 <= hour < 12:
    ##6 ~ 12 hrs
    greeting = "morning"
elif 12 <= hour < 15:
    ##12 ~ 15 hrs
    greeting = "noon"
elif 15 <= hour < 18:
    ##15 ~ 18 hrs
    greeting = "afternoon"
elif 18 <= hour < 22:
    ##18 ~ 22 hrs
    greeting = "evening"
else:
    ##22 ~ 6 hrs
    greeting = "night"

print("Good", greeting)
>>>>>>> 6c58a360bcc57766fadc11c00867c904b25e5bbf
