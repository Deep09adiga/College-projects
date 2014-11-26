
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author USER
 */
   class ESort
   {
      ENode slist;
      public ENode sort(ENode list,int x)
      {
         slist=null;
         if(list==null)
         {
            //System.out.println("UNABLE TO SORT NO DATA EXISTS");
         }
         else
         {
            ENode temp;
            while(list!=null)
            {
               temp=list;
               list=list.right;
               temp.right=null;
               switch(x)
               {
                  case 1:nsort(temp);
                     break;
                  case 2:nsort(temp);
                     break;
                  case 3:idsort(temp);
                     break;
                  case 4:salsort(temp);
                     break;
                  case 5:dojsort(temp);
               }
            }
         }
         return slist;
      }
      public void nsort(ENode node)
      {
         if(slist==null)
         {
            slist=node;
         }
         else
         {
            if((node.ename).compareToIgnoreCase(slist.ename)<0)
            {
               node.right=slist;
               slist.left=node;
               slist=node;
            }
            else
            {
               ENode temp=slist;
               while(temp.right!=null && (node.ename).compareToIgnoreCase(temp.ename)>0)
               {
                  temp=temp.right;
               }
               if((node.ename).compareToIgnoreCase(temp.ename)<0)
               {
                  node.left=temp.left;
                  node.right=temp;
                  temp.left.right=node;
                  temp.left=node;
               }
               else if((node.ename).equalsIgnoreCase(temp.ename))
               {
                  node.right=temp.right;
                  node.left=temp;
                  temp.right.left=node;
                  temp.right=node;
               }
               else
               {
                  temp.right=node;
                  node.left=temp; 
               }
            }
         }
      }
      public void idsort(ENode node)
      {
         if(slist==null)
         {
            slist=node;
         }
         else
         {
            if((node.id).compareToIgnoreCase(slist.id)<0)
            {
               node.right=slist;
               slist.left=node;
               slist=node;
            }
            else
            {
               ENode temp=slist;
               while(temp.right!=null && (node.id).compareToIgnoreCase(temp.id)>0)
               {
                  temp=temp.right;
               }
               if((node.id).compareToIgnoreCase(temp.id)<0)
               {
                  node.left=temp.left;
                  node.right=temp;
                  temp.left.right=node;
                  temp.left=node;
               }
               else if((node.id).equalsIgnoreCase(temp.id))
               {
                  node.right=temp.right;
                  node.left=temp;
                  temp.right.left=node;
                  temp.right=node;
               }
               else
               {
                  temp.right=node;
                  node.left=temp; 
               }
            }
         }
      }
      public void salsort(ENode node)
      {
         if(slist==null)
         {
            slist=node;
         }
         else
         {
            if((node.sal)<(slist.sal))
            {
               node.right=slist;
               slist.left=node;
               slist=node;
            }
            else
            {
               ENode temp=slist;
               while(temp.right!=null && (node.sal)>(temp.sal))
               {
                  temp=temp.right;
               }
               if((node.sal)<(temp.sal))
               {
                  node.left=temp.left;
                  node.right=temp;
                  temp.left.right=node;
                  temp.left=node;
               }
               else if((node.sal)==(temp.sal))
               {
                  node.right=temp.right;
                  node.left=temp;
                  temp.right.left=node;
                  temp.right=node;
               }
               else
               {
                  temp.right=node;
                  node.left=temp; 
               }
            }
         }
      }
      public void dojsort(ENode node)
      {
         if(slist==null)
         {
            slist=node;
         }
         else
         {
            if(((node.yyyy)<(slist.yyyy)) || (((node.yyyy)==(slist.yyyy)) && ((node.mm)<(slist.mm))) || (((node.yyyy)==(slist.yyyy)) && ((node.mm)==(slist.mm)) && ((node.dd)<=(slist.dd))))
            {
               node.right=slist;
               slist.left=node;
               slist=node;
            }
            else
            {
               ENode temp=slist;
               while((temp.right!=null) &&(((node.yyyy)>(temp.yyyy)) || (((node.yyyy)==(temp.yyyy)) && ((node.mm)>(temp.mm))) || (((node.yyyy)==(temp.yyyy)) && ((node.mm)==(temp.mm)) && ((node.dd)>=(temp.dd)))))
               {
                  temp=temp.right;
               }
               if(((node.yyyy)<(temp.yyyy)) || (((node.yyyy)==(temp.yyyy)) && ((node.mm)<(temp.mm))) || (((node.yyyy)==(temp.yyyy)) && ((node.mm)==(temp.mm)) && ((node.dd)<=(temp.dd)))) 
               {
                  node.left=temp.left;
                  node.right=temp;
                  temp.left.right=node;
                  temp.left=node;
               }
               else if(((node.yyyy)==(temp.yyyy))&&((node.mm)==(temp.mm))&&((node.dd)==(temp.dd)))
               {
                  node.right=temp.right;
                  node.left=temp;
                  temp.right.left=node;
                  temp.right=node;
               }
               else
               {
                  temp.right=node;
                  node.left=temp; 
               }
            }
         }
      }
   
   }


