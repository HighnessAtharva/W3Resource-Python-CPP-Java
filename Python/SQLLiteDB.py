# 1. Write a Python program to create a SQLite database and connect with the database and print the version of the SQLite database.
import io
from sqlite3 import Error
import sqlite3
try:
    conn = sqlite3.connect('temp.db')
    c = conn.cursor()
    print("\nDatabase created and connected to SQLite.")
    c.execute("select sqlite_version();")
    record = c.fetchall()
    print("\nSQLite Database Version is: ", record)
    c.close()
except sqlite3.Error as error:
    print("\nError while connecting to sqlite", error)
finally:
    if (conn):
        conn.close()
        print("\nThe SQLite connection is closed.")

# 2. Write a Python program to create a SQLite database connection to a database that resides in the memory.
import sqlite3
try:
    conn = sqlite3.connect('temp.db')
    c = sqlite3.connect(':memory:')
    print("\nMemory database created and connected to SQLite.")
    c.execute("select sqlite_version();")
    print("\nSQLite Database Version is: ", sqlite3.version)
    c.close()
except sqlite3.Error as error:
    print("\nError while connecting to sqlite", error)
finally:
    if (conn):
        conn.close()
        print("\nThe SQLite connection is closed.")

# 3. Write a Python program to connect a database and create a SQLite table within the database.
import sqlite3
# connect to the database.
c = sqlite3.connect('mydatabase.db')
# defining a cursor
cursor = c.cursor()
# creating the table (schema) agent_master
cursor.execute("""
CREATE TABLE agent_master(agent_code char(6),
agent_name char(40),working_area char(35),
commission decimal(10,2),phone_no char(15) NULL);
""")
print("\nagent_master file has created.")
# disconnecting ...
c . close()
print("\nThe SQLite connection is closed.")

# 4. Write a Python program to list the tables of given SQLite database file.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
# Create two tables
    cursorObj.execute(
        "CREATE TABLE agent_master(agent_code char(6),agent_name char(40),working_area char(35),commission decimal(10,2),phone_no char(15) NULL);")
    cursorObj.execute(
        "CREATE TABLE temp_agent_master(agent_code char(6),agent_name char(40),working_area char(35),commission decimal(10,2),phone_no char(15) NULL);")
    print("List of tables:")
    cursorObj.execute("SELECT name FROM sqlite_master WHERE type='table';")
    print(cursorObj.fetchall())
    c.commit()


conn = sql_connection()
sql_table(conn)
if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 5. Write a Python program to create a table and insert some records in that table. Finally selects all rows from the table and display the records.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
# Create the table
    cursorObj.execute(
        "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")
# Insert records
    cursorObj.executescript("""
   INSERT INTO salesman VALUES(5001,'James Hoog', 'New York', 0.15);
   INSERT INTO salesman VALUES(5002,'Nail Knite', 'Paris', 0.25);
   INSERT INTO salesman VALUES(5003,'Pit Alex', 'London', 0.15);
   INSERT INTO salesman VALUES(5004,'Mc Lyon', 'Paris', 0.35);
   INSERT INTO salesman VALUES(5005,'Paul Adam', 'Rome', 0.45);
   """)
    c.commit()
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("Agent details:")
    for row in rows:
        print(row)


conn = sql_connection()
sql_table(conn)
if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 6. Write a Python program to insert a list of records into a given SQLite table.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c, rows):
    cursorObj = c.cursor()
# Create the table
    cursorObj.execute(
        "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")
    sqlite_insert_query = """INSERT INTO salesman
                          (salesman_id, name, city, commission) 
                          VALUES (?, ?, ?, ?);"""
    cursorObj.executemany(sqlite_insert_query, rows)
    c.commit()
    print("Number of records after inserting rows:")
    cursor = cursorObj.execute('select * from salesman;')
    print(len(cursor.fetchall()))


# Insert records
rows = [(5001, 'James Hoog', 'New York', 0.15),
        (5002, 'Nail Knite', 'Paris', 0.25),
        (5003, 'Pit Alex', 'London', 0.15),
        (5004, 'Mc Lyon', 'Paris', 0.35),
        (5005, 'Paul Adam', 'Rome', 0.45)]

conn = sql_connection()
sql_table(conn, rows)

if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 7. Write a Python program to insert values to a table from user input.
c = sqlite3 . connect('mydatabase.db')
cursor = c.cursor()
# create the salesman table
cursor.execute(
    "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")

s_id = input('Salesman ID:')
s_name = input('Name:')
s_city = input('City:')
s_commision = input('Commission:')
cursor.execute("""
INSERT INTO salesman(salesman_id, name, city, commission)
VALUES (?,?,?,?)
""", (s_id, s_name, s_city, s_commision))
c.commit()
print('Data entered successfully.')
c . close()
if (c):
    c.close()
    print("\nThe SQLite connection is closed.")

# 8. Write a Python program to count the number of rows of a given SQLite table.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
# Create the table
    cursorObj.execute(
        "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")
    print("Number of records before inserting rows:")
    cursor = cursorObj.execute('select * from salesman;')
    print(len(cursor.fetchall()))
# Insert records
    cursorObj.executescript("""
    INSERT INTO salesman VALUES(5001,'James Hoog', 'New York', 0.15);
    INSERT INTO salesman VALUES(5002,'Nail Knite', 'Paris', 0.25);
    INSERT INTO salesman VALUES(5003,'Pit Alex', 'London', 0.15);
    INSERT INTO salesman VALUES(5004,'Mc Lyon', 'Paris', 0.35);
    INSERT INTO salesman VALUES(5005,'Paul Adam', 'Rome', 0.45);
    """)
    c.commit()
    print("\nNumber of records after inserting rows:")
    cursor = cursorObj.execute('select * from salesman;')
    print(len(cursor.fetchall()))


conn = sql_connection()
sql_table(conn)

if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 9. Write a Python program to update a specific column value of a given table and select all rows before and after updating the said table.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
# Create the table
    cursorObj.execute(
        "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")
# Insert records
    cursorObj.executescript("""
    INSERT INTO salesman VALUES(5001,'James Hoog', 'New York', 0.15);
    INSERT INTO salesman VALUES(5002,'Nail Knite', 'Paris', 0.25);
    INSERT INTO salesman VALUES(5003,'Pit Alex', 'London', 0.15);
    INSERT INTO salesman VALUES(5004,'Mc Lyon', 'Paris', 0.35);
    INSERT INTO salesman VALUES(5005,'Paul Adam', 'Rome', 0.45);
    """)
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("Agent details:")
    for row in rows:
        print(row)
    print("\nUpdate commission .15 to .45 where id is 5003:")
    sql_update_query = """Update salesman set commission = .45 where salesman_id = 5003"""
    cursorObj.execute(sql_update_query)
    c.commit()
    print("Record Updated successfully ")
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("\nAfter updating Agent details:")
    for row in rows:
        print(row)


conn = sql_connection()
sql_table(conn)
if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 10. Write a Python program to update all the values of a specific column of a given SQLite table.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
# Create the table
    cursorObj.execute(
        "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")
# Insert records
    cursorObj.executescript("""
    INSERT INTO salesman VALUES(5001,'James Hoog', 'New York', 0.15);
    INSERT INTO salesman VALUES(5002,'Nail Knite', 'Paris', 0.25);
    INSERT INTO salesman VALUES(5003,'Pit Alex', 'London', 0.15);
    INSERT INTO salesman VALUES(5004,'Mc Lyon', 'Paris', 0.35);
    INSERT INTO salesman VALUES(5005,'Paul Adam', 'Rome', 0.45);
    """)
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("Agent details:")
    for row in rows:
        print(row)
    print("\nUpdate all commision to .55:")
    sql_update_query = """Update salesman set commission = .55"""
    cursorObj.execute(sql_update_query)
    c.commit()
    print("Record Updated successfully ")
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("\nAfter updating Agent details:")
    for row in rows:
        print(row)


conn = sql_connection()
sql_table(conn)
if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 11. Write a Python program to delete a specific row from a given SQLite table.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
# Create the table
    cursorObj.execute(
        "CREATE TABLE salesman(salesman_id n(5), name char(30), city char(35), commission decimal(7,2));")
# Insert records
    cursorObj.executescript("""
   INSERT INTO salesman VALUES(5001,'James Hoog', 'New York', 0.15);
   INSERT INTO salesman VALUES(5002,'Nail Knite', 'Paris', 0.25);
   INSERT INTO salesman VALUES(5003,'Pit Alex', 'London', 0.15);
   INSERT INTO salesman VALUES(5004,'Mc Lyon', 'Paris', 0.35);
   INSERT INTO salesman VALUES(5005,'Paul Adam', 'Rome', 0.45);
   """)
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("Agent details:")
    for row in rows:
        print(row)
    print("\nDelete Salesman of ID 5003:")
    s_id = 5003
    cursorObj.execute("""
   DELETE FROM salesman
   WHERE salesman_id = ?
   """, (s_id,))
    c.commit()
    cursorObj.execute("SELECT * FROM salesman")
    rows = cursorObj.fetchall()
    print("\nAfter updating Agent details:")
    for row in rows:
        print(row)


conn = sql_connection()
sql_table(conn)
if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 12. Write a Python program to alter a given SQLite table.


def sql_connection():
    try:
        return sqlite3.connect('mydatabase.db')
    except Error:
        print(Error)


def sql_table(c):
    cursorObj = c.cursor()
    cursorObj.execute(
        "CREATE TABLE agent_master(agent_code char(6),agent_name char(40),working_area char(35),commission decimal(10,2),phone_no char(15) NULL);")
    print("\nagent_master file has created.")

    # adding a new column in the agent_master table
    cursorObj.execute("""
   ALTER TABLE agent_master
   ADD COLUMN FLAG BOOLEAN;
   """)
    print("\nagent_master file altered.")
    c.commit()


conn = sql_connection()
sql_table(conn)
if (conn):
    conn.close()
    print("\nThe SQLite connection is closed.")

# 13. Write a Python program to create a backup of a SQLite database.
c = sqlite3.connect('mydatabase.db')
with io.open('clientes_dump.sql', 'w') as f:
    for linha in c.iterdump():
        f.write('%s\n' % linha)
print('Backup performed successfully.')
print('Saved as mydatabase_dump.sql')
c.close()
