  /*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author USER
 */   
   public class ENode
   {
      String ename;
      String id;
      String dsgn;
      String gndr;
      int sal;
      int yyyy;
      int mm;
      int dd;
      ENode right;
      ENode left;           
      public ENode(String name,String id,String dsgn,String gndr,int sal,int yy,int m,int d)
      {
         this.ename=name;
         this.id=id;
         this.dsgn=dsgn;
         this.gndr=gndr;
         this.sal=sal;
         this.yyyy=yy;
         this.mm=m;
         this.dd=d;
         this.right=null;
         this.left=null;
      }
   
   }