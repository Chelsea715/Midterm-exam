1)	For each of the following process state transition,
	 say whether the transition is legal and how the
 	 transition occurs or why it cannot.
a.	Change from thread state WAIT to thread
	 state RUNNING: Yes, it will move to the 
	running state when other thread will notify
	after being in waiting state.
b.	Change from thread state RUNNING to thread
	 state WAIT: Yes, it can used wait() to enters
	the waiting state in this thread calls.
c.	Change from thread state READY to thread
	 state WAIT: Yes, it will waits for a specific
	condition or events after being in ready state.

