//
//  NSUserDefaults+Utility.h
//
//  Created by Martin Stemmle on 10.11.13.
//
//
// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.
//
// In jurisdictions that recognize copyright laws, the author or authors
// of this software dedicate any and all copyright interest in the
// software to the public domain. We make this dedication for the benefit
// of the public at large and to the detriment of our heirs and
// successors. We intend this dedication to be an overt act of
// relinquishment in perpetuity of all present and future rights to this
// software under copyright law.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//
// For more information, please refer to <http://unlicense.org>

#import <Foundation/Foundation.h>
#import "NSUserDefaults+StandardUserDefaults.h"

@interface NSUserDefaults (Utility)

/**
 Returns the object associated with the first occurrence of the specified default.
 This method searches the domains included in the search list in the order they are listed.
 The returned object is immutable, even if the value you originally set was mutable.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The object associated with the specified key, or the fallback if the key was not found.
 */

+ (id)objectForKey:(NSString *)defaultName orFallback:(id)fallback;

/**
 Returns the string associated with the specified key in the standard user's defaults database.
 The returned string is immutable, even if the value you originally set was a mutable string.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return For string values, the string associated with the specified key in the standard user's defaults database. For number values, the string value of the number. Returns nil if the default does not exist or is not a string or number value.
 */
+ (NSString *)stringForKey:(NSString *)defaultName orFallback:(NSString *)fallback;

/**
 Returns the array associated with the specified key in the standard user's defaults database.
 The returned array and its contents are immutable, even if the values you originally set were mutable.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The array associated with the specified key, or the fallback if the key does not exist or its value is not an NSArray object.
 */
+ (NSArray *)arrayForKey:(NSString *)defaultName orFallback:(NSArray *)fallback;

/**
 
 Description
 Returns the dictionary object associated with the specified key in the standard user's defaults database.
 The returned dictionary and its contents are immutable, even if the values you originally set were mutable.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The dictionary object associated with the specified key, or the fallback if the key does not exist or its value is not an NSDictionary object.
 */
+ (NSDictionary *)dictionaryForKey:(NSString *)defaultName orFallback:(NSDictionary *)fallback;

/**
 Returns the data object associated with the specified key in the standard user's defaults database.
 The returned data object is immutable, even if the value you originally set was a mutable data object.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The data object associated with the specified key, or the fallback if the key does not exist or its value is not an NSData object.
 */
+ (NSData *)dataForKey:(NSString *)defaultName orFallback:(NSData *)fallback;

/**
 - (NSArray *)stringArrayForKey:(NSString *)defaultName
 Description
 Returns the array of strings associated with the specified key in the standard user's defaults database.
 The returned array and its contents are immutable, even if the values you originally set were mutable.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The array of NSString objects, or the fallback if the specified default does not exist, the default does not contain an array, or the array does not contain NSString objects.
 */
+ (NSArray *)stringArrayForKey:(NSString *)defaultName orFallback:(NSArray *)fallback;

/**
 Returns the integer value associated with the specified key in the standard user's defaults database.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The integer value associated with the specified key in the standard user's defaults database. If the specified key does not exist, this method returns the given fallback.
 */
+ (NSInteger)integerForKey:(NSString *)defaultName orFallback:(NSInteger)fallback;

/**
 Returns the floating-point value associated with the specified key in the standard user's defaults database.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The floating-point value associated with the specified key in the standard user's defaults database. If the key does not exist, this method returns the given fallback.
 */
+ (float)floatForKey:(NSString *)defaultName orFallback:(float)fallback;

/**
 Returns the double value associated with the specified key in the standard user's defaults database.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The double value associated with the specified key in the standard user's defaults database. If the key does not exist, this method returns the given fallback.
 */
+ (double)doubleForKey:(NSString *)defaultName orFallback:(double)fallback;

/**
 Returns the Boolean value associated with the specified key in the standard user's defaults database.
 
 @param defaultName A key in the standard user's defaults database.
 @return If a boolean value is associated with defaultName in the user defaults, that value is returned. Otherwise, NO is returned.*/
+ (BOOL)boolForKey:(NSString *)defaultName orFallback:(BOOL)fallback;

/**
 Returns the NSURL instance associated with the specified key in the standard user's defaults database.
 When an NSURL is read using -[NSUserDefaults URLForKey:], the following logic is used:
 If the value for the key is an NSData, the NSData is used as the argument to +[NSKeyedUnarchiver unarchiveObjectWithData:]. If the NSData can be unarchived as an NSURL, the NSURL is returned otherwise nil is returned.
 If the value for this key was a file reference URL, the file reference URL will be created but its bookmark data will not be resolved until the NSURL instance is later used (e.g. at -[NSData initWithContentsOfURL:]).
 If the value for the key is an NSString which begins with a ~, the NSString will be expanded using -[NSString stringByExpandingTildeInPath] and a file: scheme NSURL will be created from that.
 
 @param defaultName A key in the standard user's defaults database.
 @param fallback A value to return if the key does not exists in the standard user's defaults database.
 @return The NSURL instance value associated with the specified key in the standard user's defaults database. If the key does not exist, this method returns nil.
 */
+ (NSURL *)URLForKey:(NSString *)defaultName orFallback:(NSURL *)fallback NS_AVAILABLE(10_6, 4_0);


@end
