<!doctype style-sheet PUBLIC "-//James Clark//DTD DSSSL Style Sheet//EN">

<style-sheet>
<style-specification>
<style-specification-body>

(element prova 
  (make page-sequence
   binding-edge: 'right
   (make multi-line-inline-note
     open: (literal "inicio")
     close: (literal "final")
     break-before-priority: 2 
     break-after-priority: 1 
     inline-note-line-count: 1
     inline-note-style: #f
     inhibit-line-breaks?: #t))) 


</style-specification-body>
</style-specification>
</style-sheet>
