<!doctype style-sheet PUBLIC "-//James Clark//DTD DSSSL Style Sheet//EN">

<style-sheet>
<style-specification>
<style-specification-body>

(element texto 
  (make simple-page-sequence))

(element para
  (make paragraph
    font-size: 11pt
    quadding: 'justify))

(element lb
  (make anchor
   break-before-priority: 1 
   break-after-priority: 1
   display?: #t
   anchor-keep-with-previous?: #t
   span: 2
   span-weak?: #t
   inhibit-line-breaks?: #t))


</style-specification-body>
</style-specification>
</style-sheet>
