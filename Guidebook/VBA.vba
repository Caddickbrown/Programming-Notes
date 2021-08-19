'Introduction
'VBA is a form of Visual Basic found in Microsoft Office, Generally used for Macros for Excel, howver can be utilised for many other fuctions such as Data Forms in Word, general automation or smaller tasks, etc.
'In this guide I may reference Excel specifcally, but there may be aspects that apply to other programs as well. I only reference Excel, because of my familiarity towards it.

'Comments
'Single Line - Use "'"
'Multi-Line - Use "'" at the start of each line.
'There aren't really ways to do Multi-line comments otherwise

'To start a Macro you need to define a "Sub" procedure. This tells the computer to expect code that makes up a Macro
'You must end your macro with an "End Sub". This tells the computer that the Sub is complete
'Sub is viewable within the Macro Selection Window
Sub TestMacro()
End Sub
'A "Private Sub" is not viewable within the Macro Selection Window however still works as a macro and can be called on as one.
Private Sub
End Sub

'Once you have begun your Sub - you can start writing your code.



'Functions
Function TrialFunction()
End Function




'Below are random notes that need to be incorporated into the main document. There may be useful bits within here however it is unsorted and therefore incomplete.

'Surround all macros with these two blocks - it will speed up the process'
'It might not be by much, but it mounts up over time.'
Application.Calculation = xlCalculationManual
Application.ScreenUpdating = False
Application.DisplayStatusBar = False
Application.EnableEvents = False

Application.EnableEvents = True
Application.DisplayStatusBar = True
Application.ScreenUpdating = True
Application.Calculation = xlCalculationAutomatic
