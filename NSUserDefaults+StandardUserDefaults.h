//
//  NSUserDefaults+StandardUserDefaults.h
//
//  Created by Martin Stemmle on 04.11.13.
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

@interface NSUserDefaults (StandardUserDefaults)

+ (id)objectForKey:(NSString *)defaultName;
+ (void)setObject:(id)value forKey:(NSString *)defaultName;
+ (void)removeObjectForKey:(NSString *)defaultName;

+ (NSString *)stringForKey:(NSString *)defaultName;
+ (NSArray *)arrayForKey:(NSString *)defaultName;
+ (NSDictionary *)dictionaryForKey:(NSString *)defaultName;
+ (NSData *)dataForKey:(NSString *)defaultName;
+ (NSArray *)stringArrayForKey:(NSString *)defaultName;
+ (NSInteger)integerForKey:(NSString *)defaultName;
+ (float)floatForKey:(NSString *)defaultName;
+ (double)doubleForKey:(NSString *)defaultName;
+ (BOOL)boolForKey:(NSString *)defaultName;
+ (NSURL *)URLForKey:(NSString *)defaultName NS_AVAILABLE(10_6, 4_0);

+ (void)setInteger:(NSInteger)value forKey:(NSString *)defaultName;
+ (void)setFloat:(float)value forKey:(NSString *)defaultName;
+ (void)setDouble:(double)value forKey:(NSString *)defaultName;
+ (void)setBool:(BOOL)value forKey:(NSString *)defaultName;
+ (void)setURL:(NSURL *)url forKey:(NSString *)defaultName NS_AVAILABLE(10_6, 4_0);

+ (void)registerDefaults:(NSDictionary *)registrationDictionary;

+ (void)addSuiteNamed:(NSString *)suiteName;
+ (void)removeSuiteNamed:(NSString *)suiteName;

+ (NSDictionary *)dictionaryRepresentation;

+ (NSArray *)volatileDomainNames;
+ (NSDictionary *)volatileDomainForName:(NSString *)domainName;
+ (void)setVolatileDomain:(NSDictionary *)domain forName:(NSString *)domainName;
+ (void)removeVolatileDomainForName:(NSString *)domainName;

+ (NSArray *)persistentDomainNames NS_DEPRECATED(10_0, 10_9, 2_0, 7_0);
+ (NSDictionary *)persistentDomainForName:(NSString *)domainName;
+ (void)setPersistentDomain:(NSDictionary *)domain forName:(NSString *)domainName;
+ (void)removePersistentDomainForName:(NSString *)domainName;

+ (BOOL)synchronize;

+ (BOOL)objectIsForcedForKey:(NSString *)key;
+ (BOOL)objectIsForcedForKey:(NSString *)key inDomain:(NSString *)domain;






@end
