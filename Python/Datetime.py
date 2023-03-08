"""
1. Write a Python script to display the - 
a) Current date and time
b) Current year
c) Month of year
d) Week number of the year
e) Weekday of the week
f) Day of year
g) Day of the month
h) Day of week
"""

import datetime

print('current date:')
print(datetime.date.today())
print('current date and time:')
print(datetime.datetime.now())
print('current year:')
print(datetime.date.today().year)
print('current month:')
print(datetime.date.today().month)
print('current month name:')
print(datetime.date.today().strftime('%B'))
print('current week of year:')
print(datetime.date.today().isocalendar()[1])
print('current weekday of the week:')
print(datetime.date.today().isoweekday())    # MON is 1
print('current day of year:')
print(datetime.date.today().strftime('%j'))
print('current day of month:')
print(datetime.date.today().strftime('%d'))
print('current day of week:')
print(datetime.date.today().strftime('%A'))

"""
2. determine whether a given year is a leap year.
"""
import calendar

print(calendar.isleap(2018))

"""
3. convert a string to datetime.
Sample String : Jan 1 2014 2:43PM 
Expected Output : 2014-01-01 14:43:00
"""
import datetime

day = 'Jan 1 2014 2:43PM'
print(datetime.datetime.strptime(day, '%b %d %Y %I:%M%p'))

"""
4. get the current time in Python. 
Sample Format :  13:19:49.078205
"""
import datetime

print(datetime.datetime.now().time())

"""
5. subtract five days from current date.
Sample Date : 
Current Date : 2015-06-22
5 days before Current Date : 2015-06-17
"""
import datetime

print(datetime.date.today())
print(datetime.date.today()-datetime.timedelta(5))

"""
6. convert unix timestamp string to readable date.
Sample Unix timestamp string : 1284105682
Expected Output : 2010-09-10 13:31:22
"""
import datetime
utimestamp = 1284105682
print(datetime.datetime.fromtimestamp(utimestamp))

"""
7. print yesterday, today, tomorrow.
"""
import datetime

print(datetime.date.today()-datetime.timedelta(1))
print(datetime.date.today())
print(datetime.date.today()+datetime.timedelta(1))

"""
8. convert the date to datetime (midnight of the date)
in Python. 
Sample Output : 2015-06-22 00:00:00
"""
import datetime

a_date = datetime.date.today()
print(a_date)

# for printing only format as string:
formatted_date = a_date.__format__('%Y-%m-%d %H:%M:%S')
print(formatted_date)

# if used farther as datetime object:
formatted_date = datetime.datetime.combine(a_date, datetime.time.min)
print(formatted_date)

"""
9. print next 5 days starting from today.
"""
import datetime

for i in range(6):
    print(datetime.date.today()+datetime.timedelta(i))

"""
10. add 5 seconds with the current time.
Sample Data :
13:28:32.953088 
13:28:37.953088
"""
import datetime

t = datetime.time(13,28,32)
print(t)
dt = datetime.datetime.combine(datetime.date.today(), t)
dt = dt + datetime.timedelta(seconds=5)
print(dt.time())

"""
11. convert Year/Month/Day to Day of Year in Python.
"""
import datetime

my_date_str = '2018/04/18'
my_datetime = datetime.datetime.strptime(my_date_str, '%Y/%m/%d')
print(my_datetime)
print(my_datetime.strftime('%j'))

"""
12. get current time in milliseconds in Python
"""
import time

x = time.localtime()
milisecs = ((x.tm_hour * 60 + x.tm_min)*60 + x.tm_sec)*1000
print(milisecs)

"""
13. get week number. 
Sample Date : 2015, 6, 16
Expected Output : 25
"""
import datetime

td = datetime.date.today()
print(td.strftime('%W'))

"""
14. find the date of the first Monday of a given week.
Sample Year and week : 2015, 50
Expected Output : Mon Dec 14 00:00:00 2015
"""
import datetime

week = '50'
year = '2015'
first_mon = '1'
date = datetime.datetime.strptime(year + week + first_mon, '%Y%W%w')
print(date)

"""
15. select all the Sundays of a specified year.
"""
import datetime

year = '2018'
for week in range(53):
    print(datetime.datetime.strptime(year+str(week)+'0', '%Y%W%w'))


# 16. add year(s) with a given date and display the new date.

# Sample Data : (addYears is the user defined function name)
# print(addYears(datetime.date(2015,1,1), -1))
# print(addYears(datetime.date(2015,1,1), 0))
# print(addYears(datetime.date(2015,1,1), 2))
# print(addYears(datetime.date(2000,2,29),1))

# Expected Output :
# 2014-01-01
# 2015-01-01
# 2017-01-01
# 2001-03-01
import datetime
from datetime import date
def addYears(d, years):
    try:
#Return same day of the current year        
        return d.replace(year = d.year + years)
    except ValueError:
#If not same day, it will return other, i.e.  February 29 to March 1 etc.        
        return d + (date(d.year + years, 1, 1) - date(d.year, 1, 1))

print(addYears(datetime.date(2015,1,1), -1))
print(addYears(datetime.date(2015,1,1), 0))
print(addYears(datetime.date(2015,1,1), 2))
print(addYears(datetime.date(2000,2,29),1))


# 17. drop microseconds from datetime.
import datetime
dt = datetime.datetime.now().replace(microsecond=0)
print()
print(dt)
print()



# 18. get days between two dates.
# Sample Dates : 2000,2,28, 2001,2,28
# Expected Output : 366 days, 0:00:00
from datetime import date
a = date(2000,2,28)
b = date(2001,2,28)
print(b-a)



# 19. get the date of the last Tuesday.
from datetime import date
from datetime import timedelta
today = date.today()
offset = (today.weekday() - 1) % 7
last_tuesday = today - timedelta(days=offset)
print(last_tuesday)



# 20. test the third Tuesday of a month.

from datetime import datetime 
def is_third_tuesday(s):
    d = datetime.strptime(s, '%b %d, %Y')
    return d.weekday() == 1 and 14 < d.day < 22

print(is_third_tuesday('Jun 23, 2015')) #False
print(is_third_tuesday('Jun 16, 2015')) #True 
print(is_third_tuesday('Jul 21, 2015')) #False


# 21. get the last day of a specified year and month.

import calendar
year = 2015
month = 2
print(calendar.monthrange(year, month)[1])


# 22. get the number of days of a given month and year.
from calendar import monthrange
year = 2016
month = 2
print(monthrange(year, month))



# 23. add a month with a specified date.

from datetime import date, timedelta
import calendar
start_date = date(2014, 12, 25)
days_in_month = calendar.monthrange(start_date.year, start_date.month)[1]
print(start_date + timedelta(days=days_in_month))


# 24. count the number of Monday of the 1st day of the month from 2015 to 2016.

import datetime
from datetime import datetime
monday1 = 0
months = range(1,13)
for year in range(2015, 2017):
    for month in months:
        if datetime(year, month, 1).weekday() == 0:
            monday1 += 1
print(monday1)


# 25. print a string five times, delay three seconds.

import time
print("\nw3resource will print five  times, delay for three seconds.")
for _ in range(5):
    print("w3resource")
    time.sleep(3)
# 26. Write a Python program calculates the date six months from the current date using the datetime module.


import datetime
print((datetime.date.today() + datetime.timedelta(6*365/12)).isoformat())

# 27. create 12 fixed dates from a specified date over a given period. The difference between two dates will be 20.

import datetime
def every_20_days(date):
    print('Starting Date: {d}'.format(d=date))
    print("Next 12 days :")
    for _ in range(12):
        date=date+datetime.timedelta(days=20)
        print('{d}'.format(d=date))

dt = datetime.date(2016,8,1)
every_20_days(dt)


# 28. get the dates 30 days before and after from the current date.

from datetime import date, timedelta

current_date = date.today().isoformat()   
days_before = (date.today()-timedelta(days=30)).isoformat()
days_after = (date.today()+timedelta(days=30)).isoformat()  

print("\nCurrent Date: ",current_date)
print("30 days before current date: ",days_before)
print("30 days after current date : ",days_after)


# 29. get the GMT and local current time.

from time import gmtime, strftime
import time
print("\nGMT: "+time.strftime("%a, %d %b %Y %I:%M:%S %p %Z", time.gmtime()))
print("Local: "+strftime("%a, %d %b %Y %I:%M:%S %p %Z\n"))


# 30. convert a date to the timestamp.


import time
import datetime
now = datetime.datetime.now()
print()
print(time.mktime(now.timetuple()))
print()

# 31. convert a string date to the timestamp.
import time
import datetime
s = "01/10/2016"
print()
print(time.mktime(datetime.datetime.strptime(s, "%d/%m/%Y").timetuple()))
print()

# 32. calculate a number of days between two dates.


import datetime
from datetime import date
def differ_days(date1, date2):

    a = date1
    b = date2
    return (a-b).days
print()
print(differ_days((date(2016,10,12)), date(2015,12,10)))
print(differ_days((date(2016,3,23)), date(2017,12,10)))
print()

# 33. calculate no of days between two datetimes.

import datetime
from datetime import datetime

def differ_days(date1, date2):
    a = date1
    b = date2
    return (a-b).days
print()
print(differ_days((datetime(2016,10,12,0,0,0)), datetime(2015,12,10,0,0,0)))
print(differ_days((datetime(2016,10,12,0,0,0)), datetime(2015,12,10,23,59,59)))
print()


# 34. display the date and time in a human-friendly string.

import time
print()
print(time.ctime())
print()


# 35. convert a date to Unix timestamp.
import datetime
import time
dt = datetime.datetime(2016, 2, 25, 23, 23)
print()
print("Unix Timestamp: ",(time.mktime(dt.timetuple())))
print()



# 36. calculate two date difference in seconds.
from datetime import datetime, time
def date_diff_in_Seconds(dt2, dt1):
  timedelta = dt2 - dt1
  return timedelta.days * 24 * 3600 + timedelta.seconds
#Specified date
date1 = datetime.strptime('2015-01-01 01:00:00', '%Y-%m-%d %H:%M:%S')
#Current date
date2 = datetime.now()
print("\n%d seconds" %(date_diff_in_Seconds(date2, date1)))
print()



# 37. convert two date difference in days, hours, minutes, seconds.
from datetime import datetime, time

def date_diff_in_seconds(dt2, dt1):
  timedelta = dt2 - dt1
  return timedelta.days * 24 * 3600 + timedelta.seconds

def dhms_from_seconds(seconds):
	minutes, seconds = divmod(seconds, 60)
	hours, minutes = divmod(minutes, 60)
	days, hours = divmod(hours, 24)
	return (days, hours, minutes, seconds)

#Specified date
date1 = datetime.strptime('2015-01-01 01:00:00', '%Y-%m-%d %H:%M:%S')

#Current date
date2 = datetime.now()

print("\n%d days, %d hours, %d minutes, %d seconds" % dhms_from_seconds(date_diff_in_seconds(date2, date1)))
print()



# 38. get last modified information of a file.
import os, time
def last_modified_fileinfo(filepath):
	
    filestat = os.stat(filepath)
    date = time.localtime((filestat.st_mtime))

    # Extract year, month and day from the date
    year = date[0]
    month = date[1]
    day = date[2]
    # Extract hour, minute, second
    hour = date[3]
    minute = date[4]
    second = date[5]

    	# Year
    strYear = str(year)[:]

    	# Month
    strMonth = f'0{str(month)}' if (month <=9) else str(month)
    	# Date
    strDay = f'0{str(day)}' if (day <=9) else str(day)
    return f"{strYear}-{strMonth}-{strDay} {str(hour)}:{str(minute)}:{str(second)}"
print()
print(last_modified_fileinfo('test.txt'))
print()



# 39. calculate an age in year.

from datetime import date

def calculate_age(dtob):
    today = date.today()
    return today.year - dtob.year - ((today.month, today.day) < (dtob.month, dtob.day))
print()
print(calculate_age(date(2006,10,12)))
print(calculate_age(date(1989,1,12)))
print()


# 40. get the current date time information.

import time
import datetime

print()
print(f"Time in seconds since the epoch: {time.time()}")
print("Current date and time: " , datetime.datetime.now())
print("Alternate date and time: " ,datetime.datetime.now().strftime("%y-%m-%d-%H-%M"))
print("Current year: ", datetime.date.today().strftime("%Y"))
print("Month of year: ", datetime.date.today().strftime("%B"))
print("Week number of the year: ", datetime.date.today().strftime("%W"))
print("Weekday of the week: ", datetime.date.today().strftime("%w"))
print("Day of year: ", datetime.date.today().strftime("%j"))
print("Day of the month : ", datetime.date.today().strftime("%d"))
print("Day of week: ", datetime.date.today().strftime("%A"))
print()


# 41.  generate a date and time as a string.

import datetime
# Current time
now = datetime.datetime.now()
# Make a note of the date and time in a string
# Date and time in string : 2016-11-05 11:24:24 PM
datestr = "# In string: " + now.strftime("%Y-%m-%d %H:%M:%S %p") + "\n"
print()
print(datestr)
print()


# 42. display formatted text output of a month and start weeks on Sunday.

import calendar
cal = calendar.TextCalendar(calendar.SUNDAY)
print('First Month - 2022')
print(cal.prmonth(2022, 1))


# 43. print a 3-column calendar for an entire year.

import calendar
cal = calendar.TextCalendar(calendar.SUNDAY)
# year: 2022, column width: 2, lines per week: 1 
# number of spaces between month columns: 1
# 3: no. of months per column.
print(cal.formatyear(2022, 2, 1, 1, 3))


# 44. display a calendar for a locale.

import calendar
cal = calendar.LocaleTextCalendar(locale='en_AU.utf8')
print(cal.prmonth(2025, 9))


# 45. get the current week.
import datetime
Jan1st = datetime.date(2017,10,12)
year,week_num,day_of_week = Jan1st.isocalendar() # DOW = day of week
print()
print("Year %d, Week Number %d, Day of the Week %d" %(year,week_num, day_of_week))
print()



# 46. create a HTML calendar with data for a specific year and month.
import calendar
htmlcal = calendar.HTMLCalendar(calendar.MONDAY)
print(htmlcal.formatmonth(2020, 12))



# 47. Write a Python program display a list of the dates for the 2nd Saturday of every month for a given year.
import calendar
# Show every month
for month in range(1, 13):
    cal = calendar.monthcalendar(2020, month)
    first_week  = cal[0]
    second_week = cal[1]
    third_week  = cal[2]

    # If a Saturday presents in the first week, the second Saturday
    # is in the second week.  Otherwise, the second Saturday must 
    # be in the third week.

    if first_week[calendar.SATURDAY]:
        holi_day = second_week[calendar.SATURDAY]
    else:
        holi_day = third_week[calendar.SATURDAY]

    print('%3s: %2s' % (calendar.month_abbr[month], holi_day))



# 48. display a simple, formatted calendar of a given year and month.
import calendar
print('Print a calendar for a year and month:')
month = int(input('Month (mm): '))
year = int(input('Year (yyyy): '))
print('\n')

calendar.setfirstweekday(calendar.SUNDAY)
cal = calendar.monthcalendar(year, month)

if len(str(month)) == 1:
    month = f'0{month}'

# Header
print(f'|++++++ {month}-{year} +++++|')
print('|Su Mo Tu We Th Fr Sa|')
print('|--------------------|')

# display calendar
border = '|'
for week in cal:
    line = border


    for day in week:
        if day == 0:
      # 3 spaces for blank days       
         line += '   ' 
        elif len(str(day)) == 1:
            line += ' %d ' % day
        else:
         line += '%d ' % day
    # remove space in last column
    line = line[:-1]
    line += border
    print(line)

print('|--------------------|\n')



# 49. convert a string into datetime

from datetime import datetime

date_obj = datetime.strptime('May 12 2016  2:25AM', '%b %d %Y %I:%M%p')
print()
print(date_obj)
print()


# 50. get a list of dates between two dates.

from datetime import timedelta, date

def daterange(date1, date2):
    for n in range(int ((date2 - date1).days)+1):
        yield date1 + timedelta(n)

start_dt = date(2015, 12, 20)
end_dt = date(2016, 1, 11)
for dt in daterange(start_dt, end_dt):
    print(dt.strftime("%Y-%m-%d"))
	

# 51. generate RFC 3339 timestamp.

from datetime import datetime, timezone
local_time = datetime.now(timezone.utc).astimezone()
print()
print(local_time.isoformat())
print()


# 52. get the first and last second.

import datetime
print("First Second: ", datetime.time.min)
print("Last Second: ", datetime.time.max)


# 53. validate a Gregorian date. The month is between 1 and 12 inclusive, the day is within the allowed number of days for the given month. Leap year's are taken into consideration. The year is between 1 and 32767 inclusive.

import datetime
def check_date(m, d, y):
    try:
        m, d, y = map(int, (m, d, y))
        datetime.date(y, m, d)
        return True
    except ValueError:
        return False

print(check_date(11, 11, 2002))
print(check_date('11', '11', '2002'))
print(check_date(13, 11, 2002))


# 54. set the default timezone used by all date/time functions.
import os, time
print(time.strftime('%Y-%m-%d %H:%M:%S')) # before timezone change
os.environ['TZ'] = 'America/Los_Angeles' # set new timezone
time.tzset()
print(time.strftime('%Y-%m-%d %H:%M:%S')) # after timezone change



# 55. The epoch is the point where the time starts, and is platform dependent. For Unix, the epoch is January 1, 1970, 00:00:00 (UTC). find out what the epoch is on a given platform. Also convert a given time in seconds since the epoch.
# Sample Output:
# Epoch on a given platform:
# time.struct_time(tm_year=1970, tm_mon=1, tm_mday=1, tm_hour=0, tm_min=0, tm_sec=0, tm_wday=3, tm_yday=1, tm_isdst=0)
# Time in seconds since the epoch:
# time.struct_time(tm_year=1970, tm_mon=1, tm_mday=1, tm_hour=10, tm_min=0, tm_sec=0, tm_wday=3, tm_yday=1, tm_isdst=0)


import time
print("\nEpoch on a given platform:")
print(time.gmtime(0))
print("\nTime in seconds since the epoch:")
print(time.gmtime(36000))

# 56. get time values with components using local time and gmtime.
# Sample Output:
# localtime:
# tm_year : 2021
# tm_mon : 4
# tm_mday : 13
# tm_hour : 11
# tm_min : 20
# tm_sec : 37
# tm_wday : 1
# tm_yday : 103
# tm_isdst: 0
# gmtime:
# tm_year : 2021
# tm_mon : 4
# tm_mday : 13
# tm_hour : 11
# tm_min : 20
# tm_sec : 37
# tm_wday : 1
# tm_yday : 103
# tm_isdst: 0
import time
def time_struct(s):
   print(' tm_year :', s.tm_year)
   print(' tm_mon :', s.tm_mon)
   print(' tm_mday :', s.tm_mday)
   print(' tm_hour :', s.tm_hour)
   print(' tm_min :', s.tm_min)
   print(' tm_sec :', s.tm_sec)
   print(' tm_wday :', s.tm_wday)
   print(' tm_yday :', s.tm_yday)
   print(' tm_isdst:', s.tm_isdst)
print('\nlocaltime:')
time_struct(time.localtime())
print('\ngmtime:')
time_struct(time.gmtime())



# 57. get different time values with components timezone, timezone abbreviations, the offset of the local (non-DST) timezone, DST timezone and time of different timezones.
# Sample Output:
# Default Zone:
# TZ : (not set)
# Timezone abbreviations: ('UTC', 'UTC')
# Timezone : 0 (0.0)
# DST timezone 0
# Time : 11:30:05 04/13/21 UTC
# Pacific/Auckland :
# TZ : Pacific/Auckland
# Timezone abbreviations: ('NZST', 'NZDT')
# Timezone : -43200 (-12.0)
# DST timezone 1
# Time : 23:30:05 04/13/21 NZST
# Europe/Berlin :
# TZ : Europe/Berlin
# Timezone abbreviations: ('CET', 'CEST')
# Timezone : -3600 (-1.0)
# DST timezone 1
# Time : 13:30:05 04/13/21 CEST
# America/Detroit :
# TZ : America/Detroit
# Timezone abbreviations: ('EST', 'EDT')
# Timezone : 18000 (5.0)
# DST timezone 1
# Time : 07:30:05 04/13/21 EDT
# Singapore :
# TZ : Singapore
# Timezone abbreviations: ('+08', '+08')
# Timezone : -28800 (-8.0)
# DST timezone 0
# Time : 19:30:05 04/13/21 +08
import time
import os
def zone_info():
    print('TZ   :', os.environ.get('TZ', '(not set)'))
    print('Timezone abbreviations:', time.tzname)
    print(f'Timezone : {time.timezone} ({time.timezone / 3600})')
    print('DST timezone ', time.daylight)
    print('Time :', time.strftime('%X %x %Z'),'\n')
print('Default Zone:')
zone_info()
TIME_ZONES = [
   'Pacific/Auckland',
   'Europe/Berlin',
   'America/Detroit',
   'Singapore',
]
for zone in TIME_ZONES:
   os.environ['TZ'] = zone
   time.tzset()
   print(zone, ':')
   zone_info()



# 58.can suspend execution of a given script a given number of seconds.
# Sample Output:
# Sorry, Slept for 3 seconds...
# Sorry, Slept for 3 seconds...
# Sorry, Slept for 3 seconds...
# Sorry, Slept for 3 seconds...

import time
for _ in range(4):
    time.sleep(3)
    print("Sorry, Slept for 3 seconds...")


# 59. convert a given time in seconds since the epoch to a string representing local time.
# Sample Output:
# Tue Apr 13 11:51:51 2021
# Thu Jun 30 18:36:29 1977

import time
print(time.ctime())
print(time.ctime(236543789))


# 60. print simple format of time, full names and the representation format and preferred date time format.
# Sample Output:
# Simple format of time:
# Tue, 13 Apr 2021 12:02:01 + 1010
# Full names and the representation:
# Tuesday, 04/13/21 April 2021 12:02:01 + 0000
# Preferred date time format:
# Tue Apr 13 12:02:01 2021
# Example 11: 04/13/21, 12:02:01, 21, 2021
import time
print("\nSimple format of time:")
s = time.strftime("%a, %d %b %Y %H:%M:%S + 1010", time.gmtime())
print(s)
print("\nFull names and the representation:")
s = time.strftime("%A, %D %B %Y %H:%M:%S + 0000", time.gmtime())
print( s)
print("\nPreferred date time format:")
s = time.strftime("%c")
print(s)
s = time.strftime("%x, %X, %y, %Y")
print("Example 11:", s)



# 61.takes a given number of seconds and pass since epoch as an argument. Print structure time in local time.
# Sample Output:
# Result: time.struct_time(tm_year=1983, tm_mon=2, tm_mday=19, tm_hour=21, tm_min=38, tm_sec=18, tm_wday=5, tm_yday=50, tm_isdst=0)
# Year: 1983

import time
result = time.localtime(414538698)
print("\nResult:", result)
print("\nYear:", result.tm_year)


# 62.takes a tuple containing 9 elements corresponding to structure time as an argument and returns a string representing it.
# Sample Output:
# Result: Sun Jan 22 02:34:06 2020
# Result: Tue Nov 12 02:54:08 1982

import time
t = (2020, 1, 22, 2, 34, 6, 6, 362, 0)
result = time.asctime(t)
print("Result:", result)
t = (1982, 11, 12, 2, 54, 8, 8, 360, 0)
result = time.asctime(t)
print("Result:", result)


# 63. parse a string representing time and returns the structure time.
# Sample Output:
# String representing time: 22 January, 2020
# time.struct_time(tm_year=2020, tm_mon=1, tm_mday=22, tm_hour=0, tm_min=0, tm_sec=0, tm_wday=2, tm_yday=22, tm_isdst=-1)
# String representing time: 30 Nov 00
# time.struct_time(tm_year=2000, tm_mon=11, tm_mday=30, tm_hour=0, tm_min=0, tm_sec=0, tm_wday=3, tm_yday=335, tm_isdst=-1)
# String representing time: 04/11/15 11:55:23
# time.struct_time(tm_year=2015, tm_mon=4, tm_mday=11, tm_hour=11, tm_min=55, tm_sec=23, tm_wday=5, tm_yday=101, tm_isdst=-1)
# String representing time: 12-11-2019
# time.struct_time(tm_year=2019, tm_mon=12, tm_mday=11, tm_hour=0, tm_min=0, tm_sec=0, tm_wday=2, tm_yday=345, tm_isdst=-1)
# String representing time: 13::55::26
# time.struct_time(tm_year=1900, tm_mon=1, tm_mday=1, tm_hour=13, tm_min=55, tm_sec=26, tm_wday=0, tm_yday=1, tm_isdst=-1)import time
time_string = "22 January, 2020"
print("String representing time:",time_string)
result = time.strptime(time_string, "%d %B, %Y")
print(result)
time_string = "30 Nov 00"
print("\nString representing time:",time_string)
result = time.strptime(time_string, "%d %b %y")
print(result)
time_string = '04/11/15 11:55:23'
print("\nString representing time:",time_string)
result = time.strptime(time_string, "%m/%d/%y %H:%M:%S")
print(result)
time_string = '12-11-2019'
print("\nString representing time:",time_string)
result = time.strptime(time_string, "%m-%d-%Y")
print(result)
time_string = '13::55::26'
print("\nString representing time:",time_string)
result = time.strptime(time_string, "%H::%M::%S")
print(result)
