var tours = 0;
var croix = "X";
var rond = "O";
var a = 0;
var b = 0;
var c = 0;
var d = 0;
var e = 0;
var f = 0;
var g = 0;
var h = 0;
var i = 0;
var winCroix = 3;
var winRond = 12;
var pair = [0, 2, 4, 6, 8];
var impair = [1, 3, 5, 7];
var conteur1 = 0;
var conteur2 = 0;
var win = 0;

function clic1() {
    console.log(tours)
    if (a == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse1").textContent = croix;
            a = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse1").textContent = rond;
            a = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic2() {
    console.log(tours)
    if (b == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse2").textContent = croix;
            b = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse2").textContent = rond;
            b = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return   
    }
    return
}

function clic3() {
    console.log(tours)
    if (c == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse3").textContent = croix;
            c = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse3").textContent = rond;
            c = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic4() {
    console.log(tours)
    if (d == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse4").textContent = croix;
            d = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse4").textContent = rond;
            d = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic5() {
    console.log(tours)
    if (e == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse5").textContent = croix;
            e = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse5").textContent = rond;
            e = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic6() {
    console.log(tours)
    if (f == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse6").textContent = croix;
            f = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse6").textContent = rond;
            f = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic7() {
    console.log(tours)
    if (g == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse7").textContent = croix;
            g = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse7").textContent = rond;
            g = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic8() {
    console.log(tours)
    if (h == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse8").textContent = croix;
            h = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse8").textContent = rond;
            h = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

function clic9() {
    console.log(tours)
    if (i == 0 && win == 0) {
        if (tours == pair[conteur1]) {
            document.getElementById("reponse9").textContent = croix;
            i = 1;
            conteur1 = conteur1 + 1;
        }
        if (tours == impair[conteur2]) {
            document.getElementById("reponse9").textContent = rond;
            i = 4;
            conteur2 = conteur2 + 1;
        }
        tours = tours + 1;
        resultat();
        return
    }
    return
}

//////////////////////////////////////////////////////////////////////////////////////////////////

function resultat() {
    var j = a + b + c;
    var k = d + e + f;
    var l = g + h + i;
    
    var m = a + d + g;
    var n = b + e + h;
    var o = c + f + i;
    
    var p = a + e + i;
    var q = c + e + g;

    if (winCroix == j || winCroix == k || winCroix == l || winCroix == m || winCroix == n || winCroix == o || winCroix == p || winCroix == q && win == 0) {
        document.getElementById("resultat").textContent = "bien joué les Croix ont gagné !!! (les ronds vous puez ...)"
        win = 1;
    }
    if (winRond == j || winRond == k || winRond == l || winRond == m || winRond == n || winRond == o || winRond == p || winRond == q && win == 0) {
        document.getElementById("resultat").textContent = "bien joué les Ronds ont gagné"
        win = 1;
    }
    if (tours == 9 && win == 0) {
        document.getElementById("resultat").textContent = "dommage c'est une egalite"
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////

function restart() {
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    g = 0;
    h = 0;
    i = 0;
    conteur2 = 0;
    conteur1 = 0;
    tours = 0;
    win = 0;
    document.getElementById("resultat").textContent = "qui sera le vainqueur ?"
    document.getElementById("reponse1").textContent = "_"
    document.getElementById("reponse2").textContent = "_"
    document.getElementById("reponse3").textContent = "_"
    document.getElementById("reponse4").textContent = "_"
    document.getElementById("reponse5").textContent = "_"
    document.getElementById("reponse6").textContent = "_"
    document.getElementById("reponse7").textContent = "_"
    document.getElementById("reponse8").textContent = "_"
    document.getElementById("reponse9").textContent = "_"
    return
}

//////////////////////////////////////////////////////////////////////////////////////////////////

var boutonElement = document.getElementById("bp1");
boutonElement.addEventListener("click", clic1)

var boutonElement = document.getElementById("bp2");
boutonElement.addEventListener("click", clic2)

var boutonElement = document.getElementById("bp3");
boutonElement.addEventListener("click", clic3)

var boutonElement = document.getElementById("bp4");
boutonElement.addEventListener("click", clic4)

var boutonElement = document.getElementById("bp5");
boutonElement.addEventListener("click", clic5)

var boutonElement = document.getElementById("bp6");
boutonElement.addEventListener("click", clic6)

var boutonElement = document.getElementById("bp7");
boutonElement.addEventListener("click", clic7)

var boutonElement = document.getElementById("bp8");
boutonElement.addEventListener("click", clic8)

var boutonElement = document.getElementById("bp9");
boutonElement.addEventListener("click", clic9)

var boutonElement = document.getElementById("restart");
boutonElement.addEventListener("click", restart)