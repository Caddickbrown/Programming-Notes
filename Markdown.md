Markdown, although not exactly a programming language as such, has a lot of similarities that are applicable to programmatic thinking. This is a guide to talk through the ins and outs of Markdown and how it can be applied to general note taking.

It's a basic form of text storage, with some additional formatting that can be used to help explain things.

## Headings
Headings are used as "Titles" for sections - as you run down into subsections you increase the "Heading level" by increasing the amount of hashes in front of the text. A single hash will give you heading 1. This would tend to be the title of the piece you are working on. A second hash would tend to be the title of the section of the piece. This can drill down further and further.

The text for the title needs a space after the hashes - this is for come compatibility reasons as some applications won't read it as a heading without the space.

 # This is a heading 1
 ## This is a heading 2
 ### This is a heading 3
 #### This is a heading 4
 ##### This is a heading 5
 ###### This is a heading 6

## Paragraphs
Just type out your words as you'd like them displayed.

New paragraphs can be added by adding a blank line in your text - as above. If no space is left - then the text will continue as a single line.

There is no need to indent - as this is seen as almost a "Follow up" to the text you have written above the indentation.

## Emphasis
General emphasis can be applied as in the following - spaces have been added to show what has been added. To use the formatting, just take out the spaces.
*Italics* or _Italics_ - * Italics * or _ Italics _ - Can be used by adding a single "*" or "_" either side of the selected word.

**Bold** or __Bold__ - ** Bold ** or __ Bold __ - Can be used by adding a double "*" or "_" either side of the selected word.

They can be combined as well. You can switch the different characters around it will still work the same
_**Bold** Italics_ - _ ** Bold ** Italics _

Markdown applications don’t agree on how to handle underscores in the middle of a word. For compatibility, use asterisks to bold or italicize the middle of a word for emphasis. For instance.
A*funny*dog rather than A_funny_dog

- [ ] Underline
- [ ] Highlighting
- [ ] Strike Through

## Tables
Tables can be shown by starting with the titles of your columns. "|" is used to designate the "Side" of your column. For example:

|Column 1|Column 2|Column 3|

This then needs to be followed by a line of ---- to highlight that this is the start of a table.
|Column 1|Column 2|Column 3|
|--------|--------|--------|

Once this is done you can start lining up your data to the relevant column, using "|" between them to switch column.

| Item | Ingredient | Qty |
| ---- | ---------- | --- |
| 1 | Banana | 4 |
| 2 | Apple | 6 |
| 3 | Oranges | 8 |
| 4 | Cheese | 4 |

These columns don't have to line up - but if it helps you to visualise it then you can.

To continue writing leave a gap at the end of the table as if starting a new paragraph.

### Justification
":" are used at the sides of the bars at the top of the column you are formatting. A ":" on the left side of the bar will justify the column to the left. A ":" on the right side of the bar will justify the column to the right. A ":" on both sides will justify it to the center.

## Lists
- First item
- Second item
- Third item
    - Indented item
    - Indented item
- Fourth item

## Task Lists
Task lists can be made by using the syntax "- [ ]". It needs a blank space inside the square brackets to ensure it is an incomplete task.
- [ ] This will create a blank task
- [X] This task can be completed by adding a X instead of a space.

## Links

## Blockquotes
> This is a blockquote You can still use *Syntax* as with **any other area.**

### Multiple Paragraphs
> This is a blockquote
>
> Over multiple Paragraphs

> Otherwise it is seen as a new blockquote.

### Nested Blockquotes
> You Can
>> Have multiple
>>> Blockquotes within each other
>>>> Just add more ">"

## Code Blocks
- [ ] Need to Check if this has capability in base Markdown

## Footnotes
- [ ] Need to Check if this has capability in base Markdown

## Images

## Combining Items
Where Markdown really shines, is that you can combine formatting types. So you can Italisise a Heading, or have a list in a table.
