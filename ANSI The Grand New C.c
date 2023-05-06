ANSI, The Grand New C 

By Scott Robert Ladd 

The title of this article is antsy the grand new sea written by Scott Robert Ladd Scott concentrates this issue on the numerous additions the ANC committee has made to the sea language plus he updates us on the new versions he's received and the new versions he's heard rumors about excellent journalism here this column is going to be another grab bag just like the last one  

while there have been no new compiler releases other products of interest have been piling up on the sofa in my office so let's dig in K&R second edition wandering through a bookstore a few weeks back I ran across the new edition of kernighan and Ritchie 's classic book the C programming language this is an updated version of the work known among C veterans as K&R I come and commend kernighan and Ritchie for avoiding the tendency these days toward 1000 page tombs the 2nd edition is only slightly larger at 270 pages than its predecessor so what's new primarily the second edition follows the draft standard being developed by ansi which is the American National standards institute the original examples have been refined and new examples have been added the discussion of pointers has been rewritten and expanded some ambiguities in the text of the original have been clarified there are also some new utility programs which for example convert complex declarations to human readable text these are an excellent aid in learning a somewhat confusing subject for those of you still using Unix or KNR first edition standard compilers rintis hall has promised to continue publishing the 1st edition of K&R until compilers based on the ansi standard are universally available I highly recommend this book to anyone who seriously programs and see OK So what is ANC a good question while the standard isn't complete most of the primary details have been hammered out while some compilers adhere to the standard many do not some vendors are waiting for the standard to be finalized in event which probably won't occur until late this year let's take a look at some of the things which have been changed or added with the ansi standard I'll try to explain why these changes were made and how to use them the ansi committee's goal is to officially standardize the sea language based on current programming practice the standard will promote the portability of source code from one compiler and environment to another also the committee is attempting to solve some of the problems with K and arc such as the lack of type checking and function calls she is well known for having very few reserved words also known as keywords only 27 in the original K&R version as opposed to over 200 in a modern dialect of basic and C has added five more for a total of 32 the new keywords support new or enhanced data types 

const and volatile 

two new keywords are const volatile both of which are qualifiers When the data item is declared as constant the compiler will not allow its value to be changed this can make the final object code more efficient for instance and then they give an example using a variable Pi with a constant value of 3.1515 and so on in a traditional program I would be put into a #define directive 

‘#define pi 3.1415’ 

And a separate constant would be created in the programme data area for each reference to Pi some compilers are smart enough to make only one constant for identical references but this is not true in most cases so that's interesting in their example I read what they wrote and that is π = 3.1515 that must just be a typo one that they do not make again in the paragraph that I just read to you well anyways they go on to say using consist only one copy of Pi is generated and that single copy will be accessed by both references to π and the compiler won't allow any statement which changes pie's value declaring A variable to be volatile indicates that it can change at any moment asynchronously for example a global variable which is accessed by an interrupt service routine would be declared volatile to prevent the compiler from making any assumption about its value 

Why is volatile a useful keyword? 

Void 

Then the next keyword they go over is void they say that a new type has been implemented called void something declared to be of type void indicates that it has no values for instance some criminals are of type void that's why I love reading these old magazines the jokes they're just so wonderful um they say they go on to say an example of this would be a function which does not return any data OK a function that doesn't return any data you can declare A pointer to void it isn't a pointer to nothing but rather a pointer to anything any type of pointer can be assigned to a void pointer and vice versa without a cast 

functions such as malloc() return a void pointer under ANSI C 

and since I couldn't find a copy of this magazine online and I say down here that I'll be putting the text on GitHub if you see any errors in the text that's appearing before you that I have not fixed a feel free to submit a pull request 

enum 

OK moving on to the enum keyword and C added this as an abbreviation to enumerated O we have an enumerated type enumerated data in enumerated data type is used to define a special set of related integer values for example 

enum rankings (first, second, third, fourth); 

The names listed in rankings are actually integer constants with first set equal to 0 second to one third to two and forth to 3A variable of a specific enumerated type may only be assigned in integer constant already defined for it so for instance if we have a current rank equals first actually current rank is an integer data item set to zero which is the value associated with first you can also specify values for enumeration constants 

enum coins (penny=1, nickel=5, dime-10) 

OK and so there's the example they give using coins if you declare a type to be of type coins then that variable can only take the values listed not only can enumerated types make your program more readable but they can also prevent you from assigning invalid values to variables next we have prototype in my opinion the most valuable anciennement to see is the function prototype a prototype is a function declaration declaration which includes information on its return and parameter types prototypes for library functions are in standard header files while prototypes for functions in the current module are placed near the beginning of the program this is an example of a prototype: 

char *fputs(int, FILE *); 

When the compiler sees a call to a function declared with function prototype parameters passed to the function would be checked to be certain they are of the correct type K and RC did no parameter type checking allowing for example an int value to be passed as a pointer or vice versa this can lead to a very subtle error which this could lead to subtle errors which are hard to track down the above program line makes sure that any calls to F puts have two parameters in integer and a stream file pointer type checking is also done on the returned value to make sure it is assigned to a pointer to char 

note that type checking can be circumvented by using explicit casts the void data type can be very useful and function prototyping as in these examples: 

Void *malloc(unsigned): 

Void init(void); 

In the first example malic is declared as a function with a single unsigned type which returns a generic void pointer in it is declared to have no parameters and no return value function definitions also have undergone some changes a classically defined main function might look like this 

Int main(argc argv)  

Int argc; 

Char *argv[]; 

{ 

/* program statements */ 

}  

You're trying to point out that that's the old way where under antsy it could be defined like this 

Int main (int argc, char *argv[]) 

{ 

/*program statements*/ 

} So that looks a lot better right the author says I'm not sure which is clear the second version of Maine looks a lot like a Pascal function definition the choice of how to define a function is up to the programmer these are just a few of the new features the ansi committee has added other than or other new items include structure passing and the standardization of header file names and contents with all these new features though nearly every program written under the K&R standard will compile without problem under the ansi standard the next section is titled power C bug mix power C still has a few bugs version 1.1.1 which is the latest as of this writing has probably the dumbest bug I've yet encountered in a compiler any statement which combines integer constants and floating point numbers will crash the optimizer pass adding decimal points to the constants solves the problem however a C compiler is supposed to do an automatic cast of an integer constant to afloat in these cases while I still think piracy is a good buy for the manual alone this type of bug indicates they're not paying attention to details the next section is about  Microsoft C 5.1 and Quick C  

But like that's version 5.1 and quick Co while power C comes on a pair of diskettes Microsoft C51 arrives on catch this 14 two of which are 1.2 megabytes high density disks and yeah I did not read that incorrectly remember this is 1988 this is because of the support for OS/2 which necessitates duplicate versions of some of the programs 

The compiler generates both msdos real mode and OS/ 2 protected mode executables in the last column I mentioned that the nick V20 microprocessor can execute instructions for the Intel 80186 

many compilers including turbo C and Microsoft C can generate this kind of code which is slightly faster than for the 8086 / 88 (8088) and where dictate just butcher's syntax like that But they're saying these compilers can generate code for any of these four microprocessors 

and then next paragraph he writes unfortunately Microsoft's compiler assumes that you have an 80287 math coprocessor if you compile for the 80186 

the V20 is always installed in an 8088 based machine and we'll have an 8087 rather than the 80287 this problem only occurs when using the default floating point option(/FPi) and there it is in parentheses because there's no way word would clingly dictate that so this problem only occurs when using the default floating point option which generates inline instructions which are used by either a coprocessor or the emulator so if you have a program which contains floating point calculations you need to compile using /FPc that option which tells the compiler to generate calls calls to the math library as opposed to inline instructions there's another though minor bug in the print F&C printf functions when displaying a floating point number declared with a precision a precision of zero these functions show leading spaces rather than leading zeroes Microsoft has released a patch for this bug and I have uploaded it to the micro cornucopia RBBS as 

Mscprint.arc  

OK so he gave us the location there next section is called benchmarks several readers have commented about the benchmarks I used to compare msdos C compilers while most of the comments have been favorable others have not one reader suggested that the benchmarks could be made much better by tailoring them to each individual compiler 's capabilities he showed that by tweaking the benchmarks let's seize performance improve this is a valid point any program benchmark or not will run faster when it takes advantage of the strengths of the computer of the compiler and the hardware unfortunately there are two problems with this first there's more to software development than program runtime second most programmers don't know enough about their compilers to take advantage of faster methods what is fast for one compiler may be slow for another I have found in the past that no matter how much it looks like one hardware type and compiler will be used for a project there's always a possibility of porting the code portable programs are written to be independent of operating system hardware and compiler dependencies editors note also that next version of the same compiler may require a completely new set of tricks for maximizing code speed 

as I've said before benchmarking is an arcane art I am examining the current benchmark suite with an eye toward improving it by the next issue I should have made some minor changes and added a new benchmark program OK I'm going to jump to the rumors rumors section he writes it's not a very well kept secret that Borland international is working on symbolic debuggers for their turbo C and turbo Pascal compilers what is a secret is when they'll be releasing them and what they'll look like they won't tell me obviously hiding from the media grin and then he ends the article by saying next issue I'll talk about CD debugging techniques reminds people to talk to him so he says I look forward to hearing from the readers of this column please feel free to drop me a letter or call or post a message on the micro cornucopia RBBS 

and Scott Ladd here he signs off by saying may you program an interesting times... 

 

 
