#!/usr/bin/python3
"""
Write a Python script that takes 2 arguments in order to solve this challenge.
The first argument will be the repository name
The second argument will be the owner name
You must use the packages requests and sys
You are not allowed to import packages other than requests and sys
You don’t need to check arguments passed to the script (number or type)
"""

import requests
from sys import argv

if __name__ == "__main__":
    repository = argv[1]
    owner = argv[2]
    url = "https://api.github.com/repos/{}/{}/commits".format(owner, repository)
    r = requests.get(url)
    commits = r.json()
    for commit in commits[:10]:
        print("{}: {}".format(commit.get("sha"),
                              commit.get("commit").get("author").get("name")))
