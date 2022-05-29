# Memento Design Pattern

Project: Geometric shape editor

In everyday activities we commonly need to use an interface
to edit or create our own image to show as marketing, 
self-advertising or just to display something to someone.
With that in mind, we developed a pure Geometric Shapes editor.  
You can edit your shapes and set it inside a canvas in order
to print it to local folder or use a printer.  
Using the Memento Design Pattern our engineers made a 
undo and redo operation easy as eating a pie!

---
To our use case we don't need "real" Shapes. Since that
we are only using `GeometricShape`.

GeometricShape:
 - Point
 - color: string
 + createMemento()
 + setMemento(Memento)
 + setPoint(...)
 + getPoint()

Memento friends GeometricShape:
 - color: string
 - Point
 
ShapeHolder:
 - shape: GeometricShape
 - mementoStack: Stack<Memento>
 + move(Point)
 + undo()

Application:
 + createShapeHolder(Point) : ShapeHolder
 + undo(ShapeHolder)
 + move(ShapeHolder, Point)