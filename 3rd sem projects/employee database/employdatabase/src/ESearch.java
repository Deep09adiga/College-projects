


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
   class ESearch
   {
      
      public void nsearch(ENode list,String name)
      {
         int i=1;
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
            trail.t7.jTextArea1.setText("NO DATA EXISTS");
         }
         else
         {
            
            {
               
               while(temp!=null)
               {
                  if(temp.ename.equalsIgnoreCase(name))
                  {
                     print(temp,i);
                     i++;
                     flag=true;
                  }
                  temp=temp.right;
               }
            }
               
            if(flag==false)
            {
               trail.t7.jTextArea1.setText("The name you entered not found");
            }
         }
      }
      public void nsearch2(ENode list,String name)
      {
         int i=1;
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
            trail.t8.jTextArea1.setText("NO DATA EXISTS");
         }
         else
         {
            
            {
               while(temp!=null)
               {
                  if(temp.ename.equalsIgnoreCase(name))
                  {
                     print4(temp,i);
                     i++;
                     flag=true;
                  }
                  temp=temp.right;
               }
            }
               
            if(flag==false)
            {
               trail.t8.jTextArea1.setText("The name you entered not found");
            }
         }
      }
      public void idsearch(ENode list,String idd)
      {
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
             trail.t7.jTextArea2.setText("NO DATA EXISTS");
         }
         else
         {
            
            {

               while(temp!=null)
               {
                  if(temp.id.equalsIgnoreCase(idd))
                  {
                     print1(temp,1);
                     flag=true;
                     break;
                  }
                  temp=temp.right;
               }
            }
               
            if(flag==false)
            {
                trail.t7.jTextArea2.setText("The ID you entered not found");
            }
         }
      }
      public void nsearch1(ENode list,String name)
      {
         int i=1;
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
            trail.t9.jTextArea1.setText("NO DATA EXISTS");
         }
         else
         {
            
              {
                    
               while(temp!=null)
               {
                  if(temp.ename.equalsIgnoreCase(name))
                  {
                     print2(temp,i);
                     i++;
                     flag=true;
                  }
                  temp=temp.right;
               }
            }
               
            if(flag==false)
            {
               trail.t9.jTextArea1.setText("The name you entered not found");
            }
         }
      }
      public void idsearch1(ENode list,String idd)
      {
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
             trail.t9.jTextArea2.setText("NO DATA EXISTS");
         }
         else
         {
            
            {
               
               while(temp!=null)
               {
                  if(temp.id.equalsIgnoreCase(idd))
                  {
                     print3(temp,1);
                     flag=true;
                     break;
                  }
                  temp=temp.right;
               }
            }
               
            if(flag==false)
            {
                trail.t9.jTextArea2.setText("The ID you entered not found");
            }
         }
      }
       
      public void salsearch(ENode list,int sa1,int sa2)
      {
         int i=1;
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
           trail.t6.jTextArea4.setText("NO DATA EXISTS");
         }
         else
         {
            while(temp!=null)
            {
               if(sa1<=temp.sal && temp.sal<=sa2)
               {
                  print5(temp,i);
                  i++;
                  flag=true;
               }
               temp=temp.right;
            }
            if(flag==false)
            {
              trail.t6.jTextArea4.setText("The salary you entered not found");
            }
         }
      }
      public void dojsearch(ENode list,int y1,int y2)
      {
         int i=1;
         ENode temp=list;
         boolean flag=false;
         if(temp==null)
         {
              trail.t6.jTextArea2.setText("NO DATA EXISTS");
         }
         else
         {
            while(temp!=null)
            {
               if((y1<=temp.yyyy && temp.yyyy<=y2))
               {
                  print6(temp,i);
                  flag=true;
                  i++;
               }
               temp=temp.right;
            }
         }
          if(flag==false)
            {
              trail.t6.jTextArea2.setText("The date of join you entered not found");
            }
      }
      public void nmale(ENode list)
      {
         ENode temp=list;
         int i=1;
         boolean flag=false;
         if(temp==null)
         {
            System.out.println("NO DATA EXISTS");
         }
         else
         {
            while(temp!=null)
            {
               if((temp.gndr).equalsIgnoreCase("male"))
               {
                  print(temp,i);
                  i++;
                  flag=true;
               }
               temp=temp.right;
            }
         }
         if(flag==false)
         {
            System.out.println("The are no male employees working in the company");
         }
      }
      public void nfemale(ENode list)
      {
         ENode temp=list;
         int i=1;
         boolean flag=false;
         if(temp==null)
         {
            System.out.println("NO DATA EXISTS");
         }
         else
         {
            while(temp!=null)
            {
               if((temp.gndr).equalsIgnoreCase("female"))
               {
                  print(temp,i);
                  i++;
                  flag=true;
               }
               temp=temp.right;
            }
         }
         if(flag==false)
         {
            System.out.println("There are no female employees working in the company");
         }
      }
      public void print(ENode temp1,int i)
      {
         trail.t7.jTextArea1.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t7.jTextArea1.append("   ID : "+temp1.id+"\n");
         trail.t7.jTextArea1.append("   Gender : "+temp1.gndr+"\n");
         trail.t7.jTextArea1.append("   Designation : "+temp1.dsgn+"\n");
         trail.t7.jTextArea1.append("   Salary : "+temp1.sal+"\n");
         trail.t7.jTextArea1.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
      public void print1(ENode temp1,int i)
      {
         trail.t7.jTextArea2.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t7.jTextArea2.append("   ID : "+temp1.id+"\n");
         trail.t7.jTextArea2.append("   Gender : "+temp1.gndr+"\n");
         trail.t7.jTextArea2.append("   Designation : "+temp1.dsgn+"\n");
         trail.t7.jTextArea2.append("   Salary : "+temp1.sal+"\n");
         trail.t7.jTextArea2.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
      public void print2(ENode temp1,int i)
      {
         trail.t9.jTextArea1.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t9.jTextArea1.append("   ID : "+temp1.id+"\n");
         trail.t9.jTextArea1.append("   Gender : "+temp1.gndr+"\n");
         trail.t9.jTextArea1.append("   Designation : "+temp1.dsgn+"\n");
         trail.t9.jTextArea1.append("   Salary : "+temp1.sal+"\n");
         trail.t9.jTextArea1.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
      public void print3(ENode temp1,int i)
      {
         trail.t9.jTextArea2.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t9.jTextArea2.append("   ID : "+temp1.id+"\n");
         trail.t9.jTextArea2.append("   Gender : "+temp1.gndr+"\n");
         trail.t9.jTextArea2.append("   Designation : "+temp1.dsgn+"\n");
         trail.t9.jTextArea2.append("   Salary : "+temp1.sal+"\n");
         trail.t9.jTextArea2.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
      public void print4(ENode temp1,int i)
      {
         trail.t8.jTextArea1.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t8.jTextArea1.append("   ID : "+temp1.id+"\n");
         trail.t8.jTextArea1.append("   Gender : "+temp1.gndr+"\n");
         trail.t8.jTextArea1.append("   Designation : "+temp1.dsgn+"\n");
         trail.t8.jTextArea1.append("   Salary : "+temp1.sal+"\n");
         trail.t8.jTextArea1.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
       public void print5(ENode temp1,int i)
      {
         trail.t6.jTextArea4.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t6.jTextArea4.append("   ID : "+temp1.id+"\n");
         trail.t6.jTextArea4.append("   Gender : "+temp1.gndr+"\n");
         trail.t6.jTextArea4.append("   Designation : "+temp1.dsgn+"\n");
         trail.t6.jTextArea4.append("   Salary : "+temp1.sal+"\n");
         trail.t6.jTextArea4.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
        public void print6(ENode temp1,int i)
      {
         trail.t6.jTextArea2.append(i+". Name of Employee : "+temp1.ename+"\n");
         trail.t6.jTextArea2.append("   ID : "+temp1.id+"\n");
         trail.t6.jTextArea2.append("   Gender : "+temp1.gndr+"\n");
         trail.t6.jTextArea2.append("   Designation : "+temp1.dsgn+"\n");
         trail.t6.jTextArea2.append("   Salary : "+temp1.sal+"\n");
         trail.t6.jTextArea2.append("   Date of join : "+temp1.dd+"/"+temp1.mm+"/"+temp1.yyyy+"\n");
      }
   }
