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
   (make side-by-side 
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
     side-by-side-overlap-control: 'none
     (make side-by-side-item
       start-indent: 2cm
       end-indent: 1cm
       side-by-side-pre-align: 'final
       side-by-side-post-align: 'start)))) 

</style-specification-body>
</style-specification>
</style-sheet>
