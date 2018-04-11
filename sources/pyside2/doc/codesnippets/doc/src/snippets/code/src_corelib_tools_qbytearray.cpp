/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the documentation of the Qt for Python project.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

void wrapInFunction()
{

//! [0]
ba = QByteArray("Hello")
//! [0]


//! [1]
ba = QByteArray()
ba.resize(5)
ba[0] = 'H'
ba[1] = 'e'
ba[2] = 'l'
ba[3] = 'l'
ba[4] = 'o'
//! [1]


//! [2]
for i in range(0, ba.size()):
    if ba.at(i) >= 'a' and ba.at(i) <= 'f':
        print "Found character in range [a-f]"
//! [2]


//! [3]
x = QByteArray("and")
x.prepend("rock ")         # x == "rock and"
x.append(" roll")          # x == "rock and roll"
x.replace(5, 3, "&")       # x == "rock & roll"
//! [3]


//! [4]
ba = QByteArray("We must be <b>bold</b>, very <b>bold</b>")
j = 0
while (j = ba.indexOf("<b>", j)) != -1:
    print "Found <b> tag at index position %d" % j
    ++j
//! [4]


//! [5]
QByteArray().isNull()          # returns true
QByteArray().isEmpty()         # returns true

QByteArray("").isNull()        # returns false
QByteArray("").isEmpty()       # returns true

QByteArray("abc").isNull()     # returns false
QByteArray("abc").isEmpty()    # returns false
//! [5]


//! [6]
ba = QByteArray("Hello")
n = ba.size()          # n == 5
ba.data()[0]           # returns 'H'
ba.data()[4]           # returns 'o'
//! [6]


//! [7]
QByteArray().isEmpty()         # returns true
QByteArray("").isEmpty()       # returns true
QByteArray("abc").isEmpty()    # returns false
//! [7]


//! [8]
ba = QByteArray("Hello world");
print ba.data();
//! [8]


//! [9]
ba = QByteArray()
for i in range(0, 10):
    ba[i] = 'A' + str(i)
# ba == "ABCDEFGHIJ"
//! [9]


//! [10]
ba = QByteArray("Stockholm")
ba.truncate(5)             # ba == "Stock"
//! [10]


//! [11]
ba = QByteArray("STARTTLS\r\n")
ba.chop(2)                 # ba == "STARTTLS"
//! [11]


//! [12]
x = QByteArray("free")
y = QByteArray("dom");
x += y
# x == "freedom"
//! [12]


//! [13]
QByteArray().isNull()          # returns true
QByteArray("").isNull()        # returns false
QByteArray("abc").isNull()     # returns false
//! [13]


//! [14]
ba = QByteArray("Istambul")
ba.fill('o')
# ba == "oooooooo"

ba.fill('X', 2)
# ba == "XX"
//! [14]


//! [15]
x = QByteArray("ship")
y = QByteArray("air")
x.prepend(y)
# x == "airship"
//! [15]


//! [16]
x = QByteArray("free")
y = QByteArray("dom")
x.append(y)
# x == "freedom"
//! [16]


//! [17]
ba = QByteArray("Meal")
ba.insert(1, QByteArray("ontr"))
# ba == "Montreal"
//! [17]


//! [18]
ba = QByteArray("Montreal")
ba.remove(1, 4)
# ba == "Meal"
//! [18]


//! [19]
x = QByteArray("Say yes!")
y = QByteArray("no")
x.replace(4, 3, y)
# x == "Say no!"
//! [19]


//! [20]
ba = QByteArray("colour behaviour flavour neighbour")
ba.replace(QByteArray("ou"), QByteArray("o"))
# ba == "color behavior flavor neighbor"
//! [20]


//! [21]
x = QByteArray("sticky question")
y = QByteArray("sti")
x.indexOf(y)               # returns 0
x.indexOf(y, 1)            # returns 10
x.indexOf(y, 10)           # returns 10
x.indexOf(y, 11)           # returns -1
//! [21]


//! [22]
ba = QByteArray("ABCBA")
ba.indexOf("B")            # returns 1
ba.indexOf("B", 1)         # returns 1
ba.indexOf("B", 2)         # returns 3
ba.indexOf("X")            # returns -1
//! [22]


//! [23]
x = QByteArray("crazy azimuths")
y = QByteArray("azy")
x.lastIndexOf(y)           # returns 6
x.lastIndexOf(y, 6)        # returns 6
x.lastIndexOf(y, 5)        # returns 2
x.lastIndexOf(y, 1)        # returns -1
//! [23]


//! [24]
ba = QByteArray("ABCBA")
ba.lastIndexOf("B")        # returns 3
ba.lastIndexOf("B", 3)     # returns 3
ba.lastIndexOf("B", 2)     # returns 1
ba.lastIndexOf("X")        # returns -1
//! [24]


//! [25]
url = QByteArray("ftp://ftp.qt-project.org/")
if url.startsWith("ftp:"):
    ...
//! [25]


//! [26]
url = QByteArray("http://qtsoftware.com/index.html")
if url.endsWith(".html"):
    ...
//! [26]


//! [27]
x = QByteArray("Pineapple")
y = x.left(4)
# y == "Pine"
//! [27]


//! [28]
x = QByteArray("Pineapple")
y = x.right(5)
# y == "apple"
//! [28]


//! [29]
x = QByteArray("Five pineapples")
y = x.mid(5, 4)     # y == "pine"
z = x.mid(5)        # z == "pineapples"
//! [29]


//! [30]
x = QByteArray("Qt by THE QT COMPANY")
y = x.toLower()
# y == "qt by the qt company"
//! [30]


//! [31]
x = QByteArray("Qt by THE QT COMPANY")
y = x.toUpper()
# y == "QT BY THE QT COMPANY"
//! [31]


//! [32]
ba = QByteArray("  lots\t of\nwhitespace\r\n ")
ba = ba.simplified()
# ba == "lots of whitespace";
//! [32]


//! [33]
ba = QByteArray("  lots\t of\nwhitespace\r\n ");
ba = ba.trimmed();
# ba == "lots\t of\nwhitespace";
//! [33]


//! [34]
x = QByteArray("apple")
y = x.leftJustified(8, '.')   # y == "apple..."
//! [34]


//! [35]
x = QByteArray("apple")
y = x.rightJustified(8, '.')    # y == "...apple"
//! [35]


//! [36]
string = QByteArray("FF")
(hex, ok) = string.toInt(16)   # hex == 255, ok == true
(dec, ok) = string.toInt(10)   # dec == 0, ok == false
//! [36]


//! [37]
string = QByteArray("FF")
(hex, ok) = str.toLong(16);    # hex == 255, ok == true
(dec, ok) = str.toLong(10);    # dec == 0, ok == false
//! [37]


//! [38]
string = QByteArray("1234.56")
(a, ok) = string.toDouble()   # a == 1234.56, ok == true
//! [38]


//! [39]
text = QByteArray("Qt is great!")
text.toBase64()        # returns "UXQgaXMgZ3JlYXQh"
//! [39]


//! [40]
ba = QByteArray()
n = 63
ba.setNum(n)           # ba == "63"
ba.setNum(n, 16)       # ba == "3f"
//! [40]


//! [41]
n = 63;
QByteArray.number(n)               # returns "63"
QByteArray.number(n, 16)           # returns "3f"
QByteArray.number(n, 16).toUpper() # returns "3F"
//! [41]


//! [42]
ba = QByteArray.number(12.3456, 'E', 3)
# ba == 1.235E+01
//! [42]


//! [43]
mydata = '\x00\x00\x03\x84\x78\x9c\x3b\x76'\
         '\xec\x18\xc3\x31\x0a\xf1\xcc\x99'\
         ...
         '\x6d\x5b'

data = QByteArray.fromRawData(mydata)
in_ = QDataStream(data, QIODevice.ReadOnly)
...
//! [43]


//! [44]
text = QByteArray.fromBase64("UXQgaXMgZ3JlYXQh")
text.data()            # returns "Qt is great!"
//! [44]


//! [45]
text = QByteArray.fromHex("517420697320677265617421")
text.data()            # returns "Qt is great!"
//! [45]

}

