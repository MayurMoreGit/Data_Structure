/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */


class Solution {
    
    public ListNode createNode(int val)
{
    ListNode t;
    t= new ListNode();
    t.val=val;
    t.next=null;
    return t;
}
public void releaseStack(ListNode b)
{
    ListNode t;
    while(b!=null)
    {
        t=b;
        b=b.next;
    }
}

    public boolean isPalindrome(ListNode head) {
        ListNode t,top,p1,p2;
        int count;
        top=null;
        if(head==null) return false;
        if(head.next==null) return true;
        p2=head;
        p1=head.next;
        count=1;
        //push
        t=createNode(p2.val);
        t.next=top;
        top=t;
        while(p1!=null)
        {
        p2=p2.next;
        t=createNode(p2.val);
        t.next=top;
        top=t;
        if(p1.next==null)
        {
            count+=1;
            break;
        }
            count+=2;
            p1=p1.next.next;    
        }
        if(count%2==0)
        {
            t=top;
            top=top.next;
        
        }
        while(p2!=null)
        {
            if(p2.val!=top.val)
            {
                releaseStack(top);
                return false;
            }
            t=top;
            top=top.next;

            p2=p2.next;
        }
        return true;
    }
}
