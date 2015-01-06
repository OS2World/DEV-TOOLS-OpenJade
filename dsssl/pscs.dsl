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
   (make column-set-sequence
     space-before: 1cm
     space-after:  1cm
     position-preference: 'bottom
     keep-with-previous?: #t
     keep-with-next?: #t
     break-before: 'column-set
     break-after: 'page-region
     keep: 'column
     may-violate-keep-before?: #t
     may-violate-keep-after?: #t
     span: 2
     span-weak?: #t)))


</style-specification-body>
</style-specification>
</style-sheet>
