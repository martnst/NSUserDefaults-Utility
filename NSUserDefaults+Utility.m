//
//  NSUserDefaults+Utility.m
//  CalexCommons
//
//  Created by Martin Stemmle on 10.11.13.
//  Copyright (c) 2013 Martin Stemmle. All rights reserved.
//

#import "NSUserDefaults+Utility.h"

@implementation NSUserDefaults (Utility)

+ (id)objectForKey:(NSString *)defaultName orFallback:(id)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults objectForKey:defaultName] : fallback);
}

+ (NSString *)stringForKey:(NSString *)defaultName orFallback:(NSString *)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults stringForKey:defaultName] : fallback);
}

+ (NSArray *)arrayForKey:(NSString *)defaultName orFallback:(NSArray *)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults arrayForKey:defaultName] : fallback);
}

+ (NSDictionary *)dictionaryForKey:(NSString *)defaultName orFallback:(NSDictionary *) fallback{
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults dictionaryForKey:defaultName] : fallback);
}

+ (NSData *)dataForKey:(NSString *)defaultName orFallback:(NSData *)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults dataForKey:defaultName] : fallback);
}

+ (NSArray *)stringArrayForKey:(NSString *)defaultName orFallback:(NSArray *)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults stringArrayForKey:defaultName] : fallback);
}

+ (NSInteger)integerForKey:(NSString *)defaultName orFallback:(NSInteger)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults integerForKey:defaultName] : fallback);
}

+ (float)floatForKey:(NSString *)defaultName orFallback:(float)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults floatForKey:defaultName] : fallback);
}

+ (double)doubleForKey:(NSString *)defaultName orFallback:(double)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults doubleForKey:defaultName] : fallback);
}

+ (BOOL)boolForKey:(NSString *)defaultName orFallback:(BOOL)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults boolForKey:defaultName] : fallback);
}

+ (NSURL *)URLForKey:(NSString *)defaultName orFallback:(NSURL *)fallback {
    return ([NSUserDefaults objectForKey:defaultName] ? [NSUserDefaults URLForKey:defaultName] : fallback);
}

@end
