



var myString = "Xin chào! Tôi tên Nam. Tôi năm nay 18 tuổi.";
console.log(myString.replace("Tôi", "Mình"));
console.log(myString.replace(/Tôi/g, "Mình"));
console.log(myString.replaceAll("Tôi", "Mình"));

// 2.2. indexOf()
var myString = 'Xin chào! Tôi tên Nam. Tôi năm nay 18 tuổi.';

console.log(myString.indexOf("Tôi"));     // Trả về 10
console.log(myString.indexOf("Hai"));     // Trả về -1
console.log(myString.indexOf("Nam"));     // Trả về 18
console.log(myString.indexOf("nam"));     // Trả về -1
console.log(myString.indexOf("Tôi", 11)); // Trả về 23

// 2.3. slice()
var mystring = "Xin chào! Tôi tên Nam. Tôi năm nay 18 tuổi.";

console.log(mystring.slice(10, 21)); // Tôi tên Nam
console.log(mystring.slice(0));     // Lấy toàn bộ chuỗi
console.log(mystring.slice(0, 1));  // X (Lấy ký tự đầu tiên của chuỗi)
console.log(mystring.slice(-1));    // . (Lấy ký tự cuối cùng của chuỗi)
console.log(mystring);              // Vẫn giữ nguyên chuỗi gốc




setTimeout(function () {
    console.log("Xin chào");
}, 5000);



var a = 10;
var b = 20;
var c = a + b;
console.log(c);

var hoVaTen = "Tao Ban Thien";
console.log(hoVaTen);

var fullName = "Le Van A";
var email = "levana@gmail.com";
var phone = "0123456789";

var message = `Xin chào ${fullName}. Số điện thoại của bạn là ${phone}, email của bạn là ${email}`;
console.log(message);

function St(h, a, b){
    var S = 1/2 * h * (a+b);
    return S;
}

var a1 = 10;
var b1 = 12;
var h1 = 9;
var S1 = St(h1, a1, b1);
console.log(S1);

var a2 = 15;
var b2 = 16;
var h2 = 13;
var S2 = St(h2, a2, b2);
console.log(S2);