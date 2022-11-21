import java.applet.*;
import java.awt.*;

public class DesenhaOutrosObjetos extends Applet {

   int width, height;

   public void init() {
      width = getSize().width;
      height = getSize().height;
      setBackground( Color.black );
   }

   public void paint( Graphics g ) {

      g.setColor( Color.red );
      g.drawRect( 10, 20, 100, 15 );
      g.setColor( Color.pink );
      g.fillRect( 240, 160, 40, 110 );

      g.setColor( Color.blue );
      g.drawOval( 50, 225, 100, 50 );
      g.setColor( Color.orange );
      g.fillOval( 225, 37, 50, 25 );

      g.setColor( Color.yellow );
      g.drawArc( 10, 110, 80, 80, 90, 180 );
      g.setColor( Color.cyan );
      g.fillArc( 140, 40, 120, 120, 90, 45 );

      g.setColor( Color.magenta );
      g.fillArc( 150, 150, 100, 100, 90, 90 );
      g.setColor( Color.black );
      g.fillArc( 160, 160, 80, 80, 90, 90 );

      g.setColor( Color.green );
      g.drawString( "Meu Texto", 50, 150 );
   }
}
