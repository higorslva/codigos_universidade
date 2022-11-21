    // import required classes and packages  
//    packagejavaTpoint.javacodes;  
      
    import java.io.*;  
    importjava.util.Scanner;  
      
    // create class BullyAlgoExample to understand how bully algorithms works  
    classBullyAlgoExample{  
          
        // declare variables and arrays for process and their status  
    staticintnumberOfProcess;  
    staticintpriorities[] = newint[100];  
    staticintstatus[] = newint[100];  
    staticintcord;  
      
        // main() method start  
    publicstaticvoid main(String args[])throwsIOException   // handle IOException  
        {  
        // get input from the user for the number of processes   
    System.out.println("Enter total number of processes:");  
      
            // create scanner class object to get input from user  
            Scanner sc = newScanner(System.in);  
    numberOfProcess = sc.nextInt();  
      
    inti;  
      
            // use for loop to set priority and status of each process  
    for(i = 0; i<numberOfProcess; i++)  
            {  
    System.out.println("Status for process "+(i+1)+":");  
    status[i] = sc.nextInt();  
    System.out.println("Priority of process "+(i+1)+":");  
    priorities[i] = sc.nextInt();  
            }  
      
    System.out.println("Enter proces which will initiate election");  
    intele = sc.nextInt();  
      
    sc.close();  
      
            // call electProcess() method   
    electProcess(ele);  
    System.out.println("After electing process the final coordinator is "+cord);  
        }  
      
        // create electProcess() method   
    staticvoidelectProcess(intele)  
        {  
    ele = ele - 1;  
    cord = ele + 1;  
      
    for(inti = 0; i<numberOfProcess; i++)  
            {  
        if(priorities[ele]<priorities[i])  
                {  
    System.out.println("Election message is sent from "+(ele+1)+" to "+(i+1));  
    if(status[i]==1)  
        electProcess(i+1);  
                }  
            }  
        }  
    }  
