<!doctype style-sheet PUBLIC "-//James Clark//DTD DSSSL Style Sheet//EN">

<style-sheet>
<style-specification>
<style-specification-body>

(element pages 
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
     break-before: 'page
     break-after: 'column
     keep: 'column
     may-violate-keep-before?: #t
     may-violate-keep-after?: #t
     span: 2
     span-weak?: #t)
     (process-children)))

(element texto
 (make paragraph
  (process-children))) 

(element para
  (make paragraph
    font-size: 11pt
    quadding: 'justify
    (process-children)))

(element lb
  (make paragraph-break))


</style-specification-body>
</style-specification>
</style-sheet>
