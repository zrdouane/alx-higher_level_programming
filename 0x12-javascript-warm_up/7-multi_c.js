#!/usr/bin/node

const arg = process.argv[2];

if (arg === undefined || isNaN(arg) || arg < 1) {
  console.log('Missing number of occurrences');
} else {
  const x = parseInt(arg);
  for (let i = 0; i < x; i++) {
    console.log('C is fun');
  }
}
