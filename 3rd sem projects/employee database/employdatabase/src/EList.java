/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author USER
 */
   import java.io.*;
   import java.util.*;
   class EList
   {
      ENode elist;
      ENode nlist=null;
      int num1=0;
      int num2=0;
 
      public void addEmp(ENode node)
      {
	if(elist==null)
         {
            elist=node;
            num1++;
         }
         else
         {
            ENode temp=elist;
            while(temp.right!=null)
            {
               temp=temp.right;
            }
            temp.right=node;
            node.left=temp;
            num1++;
         
	 } 
      }
      
      public void delEmp(String e_id)
      {
         if(elist==null)
         {
           trail.t4.jTextArea1.setText("There is no data exists \n");// System.out.println("There is no data exists");
         }
         else
         {
            //try
            {
               ENode temp=elist;
               boolean flag=true;
               if(elist.right==null && elist.id.equals(e_id))
               {
                  elist=null;
               }
               else
               {
                  if(elist.id.equals(e_id))
                  {
                     elist=elist.right;
                     elist.left=null;
                     temp.right=null;
                  }
                  else
                  {
                     while(temp.right!=null)
                     {
                        if(temp.id.equals(e_id))
                        {
                           temp.left.right=temp.right;
                           temp.right.left=temp.left;
                           temp.left=null;
                           temp.right=null;
                           flag=false;
                           break;
                        }
                        temp=temp.right;
                     }
                     if(temp.right==null && temp.id.equals(e_id) && flag==true)
                     {
                        temp.left.right=null;
                        temp.left=null;
                     }
                  }
               }
               if(temp==null)
               {
                  trail.t4.jTextArea1.setText("THE ID YOU ENTERED IS INVALID \n");//System.out.println("THE ID YOU ENTERED IS INVALID");
               }
               else
               {
            trail.t4.jTextArea1.append("THE DETAILS OF THE DELETED EMPLOYEE IS\n"); //System.out.println("THE DETAILS OF THE DELETED EMPLOYEE IS");
                  display(temp);
                  naddEmp(temp);
                  num1--;
               }
            }
              
         }
      }
      public void naddEmp(ENode node)
      {
         if(nlist==null)
         {
            nlist=node;
            num2++;
         }
         else
         {
            ENode temp=nlist;
            while(temp.right!=null)
            {
               temp=temp.right;
            }
            temp.right=node;
            node.left=temp;
            num2++;
         }
      }
      public void update(String eid)
      {
         ENode temp = elist;
         if(elist==null)
         {
            trail.t4.jTextArea2.setText("There is no data exists \n");//System.out.println("There is no data exists");
         }
         else
         {
               
               while(temp!=null)
               {         System.out.println("howww!!!!");
                         if(temp.id.equals(eid))
                         {    
                            trail.t4.jTextArea2.append("Present name :"+temp.ename+"\n");
                            trail.t4.jTextArea2.append("Present ID :"+temp.id+"\n");
                            trail.t4.jTextArea2.append("Present designation :"+temp.dsgn+"\n");
                            trail.t4.jTextArea2.append("Present gender :"+temp.gndr+"\n");
                            trail.t4.jTextArea2.append("Present salary :"+temp.sal+"\n");
                            trail.t4.jTextArea2.append("Present date of join :"+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
                            break;
                         } 
                         temp=temp.right;
                }
           }
           if(temp == null)
            {
                  trail.t4.jTextArea2.setText("THE ID YOU ENTERED IS INVALID");
            }
      }
      
        public void update1(String eid,String name,String dsgn,String gndr,int salary,int day,int month,int year)
      {
      
               ENode temp=elist;
               while(temp!=null)
               {
                  if(temp.id.equals(eid))
                  {
                     temp.ename = name;                       
                     temp.dsgn = dsgn;                     
                     temp.gndr = gndr;                                          
                     temp.sal = salary;                     
                     temp.dd = day;
                     temp.mm = month;
                     temp.yyyy = year;
                        break;
                    }
                     temp=temp.right;
                  }
                  
      } 
      public void fread(String file)
      {
         FileReader outfile;
         Scanner out;	
         try
         {
            outfile=new FileReader(file);
            out=new Scanner(outfile);
            String name,dsgn,id,gndr,sa,y,m,d;
            while(out.hasNext())
            {
               String n1=out.next();
               String n2=out.next();
               if(n2.equals("@"))
               {
                  name=n1;
               }
               else
               {
                  String n3=out.next();
                  if(n3.equals("@"))
                  {
                     name=n1+" "+n2;
                  }
                  else
                  {
                     name=n1+" "+n2+" "+n3;
                     String spc1=out.next();
                  }
               }
               String id1=out.next();
               String id2=out.next();
               if(id2.equals("@"))
               {
                    id=id1;
               }
               else
               {
                    id=id1+id2;
                    String spc2=out.next();
               }
               String dsgn1=out.next();
               String dsgn2=out.next();
               if(dsgn2.equals("@"))
               {
                  dsgn=dsgn1;
               }
               else
               {
                  String dsgn3=out.next();
                  if(dsgn3.equals("@"))
                  {
                     dsgn=dsgn1+" "+dsgn2;
                  }
                  else
                  {
                     dsgn=dsgn1+" "+dsgn2+" "+dsgn3;
                     String spc3=out.next();
                  }
               }
               String gndr1=out.next();
               String gndr2=out.next();
               if(gndr2.equals("@"))
               {
                    gndr=gndr1;
               }
               else
               {
                    gndr=gndr1+gndr2;
                    String spc4=out.next();
               }
               String sa1=out.next();
               String sa2=out.next();
               if(sa2.equals("@"))
               {sa=sa1;}
               else
               {sa=sa1+sa2;
               String spc5=out.next();}
               int sal=Integer.parseInt(sa);
               String y1=out.next();
               String y2=out.next();
               if(y2.equals("@"))
               {y=y1;}
               else
               {y=y1+y2;
               String spc6=out.next();}
               int yyyy=Integer.parseInt(y);
               String m1=out.next();
               String m2=out.next();
               if(m2.equals("@"))
               {m=m1;}
               else
               {m=m1+m2;
               String spc7=out.next();}
               int mm=Integer.parseInt(m);
               String d1=out.next();
               String d2=out.next();
               if(d2.equals("@"))
               {d=d1;}
               else
               {d=d1+d2;
               String spc8=out.next();}
               int dd=Integer.parseInt(d);
               ENode node1=new ENode(name,id,dsgn,gndr,sal,yyyy,mm,dd);
               if(file.equals("employee.dat"))
               { addEmp(node1); }
               else
               { naddEmp(node1); }
            }
         }
            catch(IOException e)
            {
               System.out.println(e);
            }ENode temp=elist;
         while(temp!=null)
         {  System.out.println(temp.ename);    
             temp=temp.right;
         }   
         // 
      }
      public void display(ENode list)
      {
         ENode temp=list;
         int i=1;
         if(temp==null)
         {
            trail.t4.jTextArea1.setText(" There is no data exists \n");
         }
         else
         {
            while(temp!=null)
            {
               trail.t4.jTextArea1.append((i+". Name of the employee : "+temp.ename+"\n"));
               trail.t4.jTextArea1.append("   ID : "+temp.id+"\n");
               trail.t4.jTextArea1.append("   Gender : "+temp.gndr+"\n");
               trail.t4.jTextArea1.append("   Designation : "+temp.dsgn+"\n");
               trail.t4.jTextArea1.append("   Salary : "+temp.sal+"\n");
               trail.t4.jTextArea1.append("   Date of join : "+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
               i++;
               temp=temp.right;
            }
         }
      }
         public void display1(ENode list)
      {
         ENode temp=list;
         int i=1;
         if(temp==null)
         {
            trail.t10.jTextArea1.setText(" There is no data exists \n");
         }
         else
         {
            while(temp!=null)
            {
               trail.t10.jTextArea1.append((i+". Name of the employee : "+temp.ename+"\n"));
               trail.t10.jTextArea1.append("   ID : "+temp.id+"\n");
               trail.t10.jTextArea1.append("   Gender : "+temp.gndr+"\n");
               trail.t10.jTextArea1.append("   Designation : "+temp.dsgn+"\n");
               trail.t10.jTextArea1.append("   Salary : "+temp.sal+"\n");
               trail.t10.jTextArea1.append("   Date of join : "+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
               i++;
               temp=temp.right;
            }
         }
      }
         public void display2(ENode list)
      {
         ENode temp=list;
         int i=1;
         if(temp==null)
         {
            trail.t14.jTextArea1.setText(" There is no data exists \n");
         }
         else
         {
            while(temp!=null)
            {
               trail.t14.jTextArea1.append((i+". Name of the employee : "+temp.ename+"\n"));
               trail.t14.jTextArea1.append("   ID : "+temp.id+"\n");
               trail.t14.jTextArea1.append("   Gender : "+temp.gndr+"\n");
               trail.t14.jTextArea1.append("   Designation : "+temp.dsgn+"\n");
               trail.t14.jTextArea1.append("   Salary : "+temp.sal+"\n");
               trail.t14.jTextArea1.append("   Date of join : "+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
               i++;
               temp=temp.right;
            }
         }
      }
         public void display3(ENode list)
      {
         ENode temp=list;
         int i=1;
         if(temp==null)
         {
            trail.t4.jTextArea1.setText(" There is no data exists \n");
         }
         else
         {
            while(temp!=null)
            {
               trail.t6.jTextArea1.append((i+". Name of the employee : "+temp.ename+"\n"));
               trail.t6.jTextArea1.append("   ID : "+temp.id+"\n");
               trail.t6.jTextArea1.append("   Gender : "+temp.gndr+"\n");
               trail.t6.jTextArea1.append("   Designation : "+temp.dsgn+"\n");
               trail.t6.jTextArea1.append("   Salary : "+temp.sal+"\n");
               trail.t6.jTextArea1.append("   Date of join : "+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
               i++;
               temp=temp.right;
            }
         }
      }
         public void display4(ENode list)
      {
         ENode temp=list;
         int i=1;
         if(temp==null)
         {
            trail.t4.jTextArea1.setText(" There is no data exists \n");
         }
         else
         {
            while(temp!=null)
            {
               trail.t6.jTextArea3.append((i+". Name of the employee : "+temp.ename+"\n"));
               trail.t6.jTextArea3.append("   ID : "+temp.id+"\n");
               trail.t6.jTextArea3.append("   Gender : "+temp.gndr+"\n");
               trail.t6.jTextArea3.append("   Designation : "+temp.dsgn+"\n");
               trail.t6.jTextArea3.append("   Salary : "+temp.sal+"\n");
               trail.t6.jTextArea3.append("   Date of join : "+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
               i++;
               temp=temp.right;
            }
         }
      }
         public void display5(ENode list)
      {
         ENode temp=list;
         int i=1;
         if(temp==null)
         {
            trail.t4.jTextArea1.setText(" There is no data exists \n");
         }
         else
         {
            while(temp!=null)
            {
               trail.t6.jTextArea4.append((i+". Name of the employee : "+temp.ename+"\n"));
               trail.t6.jTextArea4.append("   ID : "+temp.id+"\n");
               trail.t6.jTextArea4.append("   Gender : "+temp.gndr+"\n");
               trail.t6.jTextArea4.append("   Designation : "+temp.dsgn+"\n");
               trail.t6.jTextArea4.append("   Salary : "+temp.sal+"\n");
               trail.t6.jTextArea4.append("   Date of join : "+temp.dd+"/"+temp.mm+"/"+temp.yyyy+"\n");
               i++;
               temp=temp.right;
            }
         }
      }
   }
