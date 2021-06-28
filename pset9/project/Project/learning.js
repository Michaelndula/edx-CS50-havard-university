import React from "react"
import "./Learning.html"

Let state = false;
Let password = document.getElementById("password");
Let passwordStrength = document.querySelector("password-strength");
Let lowuppercase = document.querySelector(".low-upper-case i");
Let number = document.querySelector(".one-number i");
Let specialcharacter = document.querySelector(".one-special-character");
Let eightcharacters = document.querySelector(".eight-characters i");

password.addEventListener("keyup", function(){
Let pass = document.getElementById("password").value;
checkStrength(pass);
}
)

function toggle(){
    if(state){
        document.getElementById("password").setAttribute("type","password")
        state = false;
    }else{
        document.getElementById("password").setAttribute("type","text")
        state = true;
    }
}

function myfunction(show){
    show.classlist.toggle("fa-eye-slash");
}

function checkStrength(password){
    Let strength = 0;

    //If password contains both lower and uppercase characters
    if(password.match(/([a-z].*[A-Z])|([A-Z].*[a-z])/)){
        strength += 1;
        lowuppercase.classlist.remove('fa-circle');
        lowuppercase.classlist.add('fa-check');
    }else{lowuppercase.classlist.add('fa-circle');
lowuppercase.classlist.remove('fa-check');
}
}