In der Funktion main wird ein Laser namens Firestar erzeugt. Die Datei Firestar.cpp hat keinen Header - die Verbindung zwischen der Basisklasse (Laser) und der abgeleiteten Klasse (Firestar) basiert auf einer statischen Variable factory.
Auf diese Weise können mehrere Laser verknüpft werden: Canlass, QCL, ....

Beim Kompilieren wird die Klasse Firestar erzeugt, dazu wird ihr Konstruktor aufgerufen, der wiederum einen Konstruktor von register_factory aufruft, um die statische Variable factory zu erzeugen. 
Die Funktion factories() ist eine Funktion zum Erzeugen einer Sequenz - sie muss Firestar Laser aufrufen, um ihren Eintrag im statischen Speicher zu machen. 
