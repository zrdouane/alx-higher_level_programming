#!/usr/bin/python3
"""
Your script should take 4 arguments: mysql username, mysql password,
database name and state name searched (safe from MySQL injection)
"""

import MySQLdb
from sys import argv

if __name__ == "__main__":
    db = MySQLdb.connect(
        host="localhost",
        port=3306,
        user=argv[1],
        passwd=argv[2],
        db=argv[3],
        charset="utf8",
    )
    cursor = db.cursor()
    cursor.execute(
        "SELECT * FROM states WHERE name LIKE %s ORDER BY id ASC", (argv[4],)
    )
    rows = cursor.fetchall()
    for row in rows:
        print(row)
    cursor.close()
    db.close()
