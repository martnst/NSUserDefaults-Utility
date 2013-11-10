//
//  NSUserDefaults+StandardUserDefaults.m
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

#import "NSUserDefaults+StandardUserDefaults.h"

@implementation NSUserDefaults (StandardUserDefaults)

+ (id)objectForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] objectForKey:defaultName];
}

+ (void)setObject:(id)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setObject:value forKey:defaultName];
}

+ (void)removeObjectForKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] removeObjectForKey:defaultName];
}



+ (NSString *)stringForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] stringForKey:defaultName];
}

+ (NSArray *)arrayForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] arrayForKey:defaultName];
}

+ (NSDictionary *)dictionaryForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] dictionaryForKey:defaultName];
}

+ (NSData *)dataForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] dataForKey:defaultName];
}

+ (NSArray *)stringArrayForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] stringArrayForKey:defaultName];
}

+ (NSInteger)integerForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] integerForKey:defaultName];
}

+ (float)floatForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] floatForKey:defaultName];
}

+ (double)doubleForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] doubleForKey:defaultName];
}

+ (BOOL)boolForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] boolForKey:defaultName];
}

+ (NSURL *)URLForKey:(NSString *)defaultName {
    return [[NSUserDefaults standardUserDefaults] URLForKey:defaultName];
}



+ (void)setInteger:(NSInteger)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setInteger:value forKey:defaultName];
}


+ (void)setFloat:(float)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setFloat:value forKey:defaultName];
}

+ (void)setDouble:(double)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setDouble:value forKey:defaultName];
}

+ (void)setBool:(BOOL)value forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setBool:value forKey:defaultName];
}

+ (void)setURL:(NSURL *)url forKey:(NSString *)defaultName {
    [[NSUserDefaults standardUserDefaults] setURL:url forKey:defaultName];
}



+ (void)registerDefaults:(NSDictionary *)registrationDictionary {
    [[NSUserDefaults standardUserDefaults] registerDefaults:registrationDictionary];
}

+ (void)addSuiteNamed:(NSString *)suiteName {
    [[NSUserDefaults standardUserDefaults] addSuiteNamed:suiteName];
}

+ (void)removeSuiteNamed:(NSString *)suiteName {
    [[NSUserDefaults standardUserDefaults] removeSuiteNamed:suiteName];
}

+ (NSDictionary *)dictionaryRepresentation {
    return [[NSUserDefaults standardUserDefaults] dictionaryRepresentation];
}

+ (NSArray *)volatileDomainNames {
    return [[NSUserDefaults standardUserDefaults] volatileDomainNames];
}

+ (NSDictionary *)volatileDomainForName:(NSString *)domainName {
    return [[NSUserDefaults standardUserDefaults] volatileDomainForName:domainName];
}

+ (void)setVolatileDomain:(NSDictionary *)domain forName:(NSString *)domainName {
    [[NSUserDefaults standardUserDefaults]  setVolatileDomain:domain forName:domainName];
}

+ (void)removeVolatileDomainForName:(NSString *)domainName {
    [[NSUserDefaults standardUserDefaults] removeVolatileDomainForName:domainName];
}

+ (NSArray *)persistentDomainNames {
    return [[NSUserDefaults standardUserDefaults] persistentDomainNames];
}

+ (NSDictionary *)persistentDomainForName:(NSString *)domainName {
    return [[NSUserDefaults standardUserDefaults] persistentDomainForName:domainName];
}

+ (void)setPersistentDomain:(NSDictionary *)domain forName:(NSString *)domainName {
    [[NSUserDefaults standardUserDefaults] setPersistentDomain:domain forName:domainName];
}

+ (void)removePersistentDomainForName:(NSString *)domainName {
    [[NSUserDefaults standardUserDefaults] removePersistentDomainForName:domainName];
}



+ (BOOL)synchronize {
    return [[NSUserDefaults standardUserDefaults] synchronize];
}

+ (BOOL)objectIsForcedForKey:(NSString *)key {
    return [[NSUserDefaults standardUserDefaults] objectIsForcedForKey:key];
}

+ (BOOL)objectIsForcedForKey:(NSString *)key inDomain:(NSString *)domain {
    return [[NSUserDefaults standardUserDefaults]  objectIsForcedForKey:key inDomain:domain];
}

@end
