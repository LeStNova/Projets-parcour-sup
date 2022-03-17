var boutonElement = document.getElementById("submit");
boutonElement.addEventListener("click", recherche)

function recherche() {
    var nom_space = document.getElementById("nom").value;
    var nom = nom_space.replace(' ', '_');
    var lien = "https://fr.wikipedia.org/wiki/" + nom;
    console.log(nom_space);
    console.log(nom);
    console.log(lien);
    return location.href = lien;
}
