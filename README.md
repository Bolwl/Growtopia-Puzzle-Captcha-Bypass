# Growtopia-Puzzle-Captcha-Bypass
Add this code to your proxy/app to bypass puzzle captcha

##How to use?
Get the puzzle id from onShowCaptcha packet.
Then change puzzle packet from 0098/captcha/generated/e3ad7f56-9f04-4859-9e6e-c126a555a1a0-TrimmedPuzzlePiece.rttex to e3ad7f56-9f04-4859-9e6e-c126a555a1a0

Example: https://bolwlproxy.com/api?api=captcha&id=e3ad7f56-9f04-4859-9e6e-c126a555a1a0

If it finds the answer correctly it will return the answer but if it fails it will return "Error"

### API
https://bolwlproxy.com/api?api=captcha&id=PuzzleID
