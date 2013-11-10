//
//  NSUserDefaults+Utility.m
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
