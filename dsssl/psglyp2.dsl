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
    (make glyph-annotation
      break-before-priority: 12
      break-after-priority: 2
      inhibit-line-breaks?: #t)))

</style-specification-body>
</style-specification>
</style-sheet>
