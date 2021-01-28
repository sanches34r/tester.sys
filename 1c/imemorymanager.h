#ifndef __imemorymanager_h__
#define __imemorymanager_h__
/*
 *          Warning!!!
 *       DO NOT ALTER THIS FILE!
 */

/**
 *  The given class allocates and releases memory for a component
 */
/// Interface representing memory manager.
class imemorymanager {
public:
	virtual ~imemorymanager () {}
	/// Allocates memory of specified size
	/**
	*  @param pMemory - the double pointer to variable, that will hold newly
	*      allocated block of memory of NULL if allocation fails.
	*  @param ulCountByte - memory size
	*  @return the result of
	*/
	virtual bool ADDIN_API AllocMemory ( void** pMemory, unsigned long ulCountByte ) = 0;
	/// Releases memory
	/**
	*  @param pMemory - The double pointer to the memory block being released
	*/
	virtual void ADDIN_API FreeMemory ( void** pMemory ) = 0;
};
#endif