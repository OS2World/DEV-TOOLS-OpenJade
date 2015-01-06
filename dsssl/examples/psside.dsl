<!doctype style-sheet PUBLIC "-//James Clark//DTD DSSSL Style Sheet//EN">

<style-sheet>
<style-specification>
<style-specification-body>

(element prova 
  (make page-sequence
   force-last-page: 'front
   justify-spread?: #t 
   (make side-by-side
     break-before: 'column-set
     side-by-side-overlap-control: 'none)))


</style-specification-body>
</style-specification>
</style-sheet>
