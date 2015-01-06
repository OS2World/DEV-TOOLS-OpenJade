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
   (make included-container-area
     space-before: 1cm
     space-after: 1cm
     position-preference: 'bottom
     keep-with-previous?: #t
     keep-with-next?: #t
     break-before: 'page
     break-after: 'column
     keep: 'page
     may-violate-keep-before?: #t
     may-violate-keep-after?: #t
     break-before-priority: 3 
     break-after-priority: 2
     display?: #t
     width: 1cm 
     height: 1cm 
     contents-rotation: 90
     scale: 2
     position-point-x: 1cm
     position-point-y: 2cm
     escapement-direction: 'top-to-bottom
     inhibit-line-breaks?: #t
     display-alignment: 'start
     start-indent: 1cm
     end-indent: 2cm
     writing-mode: 'right-to-left
     span: 2
     span-weak?: #t
     contents-alignment: 'end
     overflow-action: 'error
     filling-direction: 'left-to-right)))


</style-specification-body>
</style-specification>
</style-sheet>
