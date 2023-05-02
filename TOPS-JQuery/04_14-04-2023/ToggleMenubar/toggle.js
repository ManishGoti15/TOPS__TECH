// toggle menubar

$(document).ready(function(){
    $icon = $(".fa-bars");   
    $navbar = $(".nav")
    $(".toggle-menu").click(function(){
        $(".nav").toggleClass("nav-change")
        // contain() = js where hasClass() = jquery
        if($navbar.hasClass("nav-change") == true){
                $icon.removeClass("fa-bars")
                $icon.addClass("fa-xmark");
        }else{
                $icon.removeClass("fa-xmark")
                $icon.addClass("fa-bars")
        }
    })
})

// change menubar background color when it scroll

$(document).ready(function(){
    $header = $("#topheader")
    $(window).scroll(function(){
        $current = $(this).scrollTop();
        if($current > 0){
             $header.addClass("header-fixed")
        }else{
            $header.removeClass("header-fixed")
         }
    })
})