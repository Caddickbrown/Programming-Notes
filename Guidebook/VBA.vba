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


'--------------------------------------------------------------------------------------------------------------------------------

'Below are random notes that need to be incorporated into the main document. There may be useful bits within here however it is unsorted and therefore incomplete. Plan being to sort though, find the useful acpects and explain as required.

Cells.Select
Cells.EntireColumn.AutoFit
Range("A1").Select
Range("A1:B2").Select
Columns("A:A").Cut
Columns("A:A").Insert Shift:=xlToRight
Columns("A:A").Delete Shift:=xlToLeft
Range("A:A").End(xlToLeft).EntireColumn.AutoFit
Range(Selection, Selection.End(xlToRight)).ClearContents
ActiveSheet.ShowAllData
Sheets.Add After:=ActiveSheet
Sheets("Sheet1").Name = "12000T"
ActiveSheet.Paste

Dim wbPlan As Workbook
Set wbSFWB = Workbooks.Open("M:\Supply Chain\Planning\FG Planning\Pre-Pack Schedule\TBSUKShopFloorWorkbench.csv")
Set wbPlan = ThisWorkbook

Range("F1").Activate
Selection.AutoFilter
ActiveWorkbook.Worksheets(2).AutoFilter.Sort. _
    SortFields.Clear
ActiveWorkbook.Worksheets(2).AutoFilter.Sort. _
    SortFields.Add2 Key:=Range("F1"), SortOn:=xlSortOnValues, Order:= _
    xlDescending, DataOption:=xlSortNormal
With ActiveWorkbook.Worksheets(2).AutoFilter. _
    Sort
    .Header = xlYes
    .MatchCase = False
    .Orientation = xlTopToBottom
    .SortMethod = xlPinYin
    .Apply
End With
ActiveWorkbook.Worksheets(2).AutoFilter.Sort. _
    SortFields.Clear
ActiveWorkbook.Worksheets(2).AutoFilter.Sort. _
    SortFields.Add2 Key:=Range("B1"), SortOn:=xlSortOnValues, Order:= _
    xlAscending, DataOption:=xlSortNormal
With ActiveWorkbook.Worksheets(2).AutoFilter. _
    Sort
    .Header = xlYes
    .MatchCase = False
    .Orientation = xlTopToBottom
    .SortMethod = xlPinYin
    .Apply
End With
ActiveSheet.Range("$A:$F").RemoveDuplicates Columns:=2, Header:=xlYes

Application.SendKeys "{ENTER}"
Columns("A:F").Copy
Range("A1").Select

'Functions
'A function statement rather than a macro will give you a new "Function" or "Formula" that you can use within Excel.
Function TrialFunction()
End Function

Dim wks As Worksheet
For Each wks In ActiveWorkbook.Worksheets
    wks.Visible = xlSheetVisible
Next wks

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
