#!/usr/bin/node

const squareinher = require('./5-square');
module.exports =
  class Square extends squareinher {
    charPrint (c) {
      if (!c) this.print();
      else {
        for (let i = 0; i < this.width; i++) console.log(c.repeat(this.height));
      }
    }
  };
