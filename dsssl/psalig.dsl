<!doctype style-sheet PUBLIC "-//James Clark//DTD DSSSL Style Sheet//EN">

<style-sheet>
<style-specification>
<style-specification-body>

(element prova 
  (make page-sequence
   force-last-page: 'front
   force-first-page: 'back
   justify-spread?: #t 
   binding-edge: 'right
   (make aligned-column 
     space-after: 5cm
     space-before: 1cm
     position-preference: 'top
     keep-with-previous?: #t
     keep-with-next?: #t
     break-before: 'page
     break-after: 'page
     keep: 'page
     may-violate-keep-before?: #t
     may-violate-keep-after?: #t
     display-alignment: 'center
     end-indent: 3cm
     writing-mode: 'top-to-bottom)))

</style-specification-body>
</style-specification>
</style-sheet>
