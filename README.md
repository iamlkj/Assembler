# Assembler
2011/7<br/>
Implement a two-pass assembler for SIC/XE machine.  <br />
Input: a SIC/XE assembly program with fixed format: • Bytes 1-8: Label (or a comment line if the first byte is ".") <br />
• Byte 9: Blank <br />
• Bytes 10-15: Operation Code (including +) or Assembler  <br />
Directive <br />
• Bytes 16-17: Blank<br />
• Bytes 18-35: Operand (including #,@,=)<br />
• Bytes 36-66: Comment<br />
