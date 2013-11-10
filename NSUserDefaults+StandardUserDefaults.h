//
//  NSUserDefaults+StandardUserDefaults.h
//  CalexCommons
//
//  Created by Martin Stemmle on 04.11.13.
//  Copyright (c) 2013 Martin Stemmle. All rights reserved.
//

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
