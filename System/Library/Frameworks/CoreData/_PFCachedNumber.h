//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

__attribute__((visibility("hidden")))
@interface _PFCachedNumber : NSNumber
{
}

+ (id)value:(const void *)arg1 withObjCType:(const char *)arg2;	// IMP=0x008000000006d9d0
+ (id)valueWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x008000000006d9c8
+ (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000006d9b7
+ (id)alloc;	// IMP=0x008000000006d96d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000006d965
+ (id)new;	// IMP=0x008000000006d95d
- (id)description;	// IMP=0x000000000006db57
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000006db45
- (id)stringValue;	// IMP=0x000000000006db14
- (unsigned long long)unsignedIntegerValue;	// IMP=0x000000000006db01
- (long long)integerValue;	// IMP=0x000000000006daee
- (_Bool)boolValue;	// IMP=0x000000000006dadc
- (double)doubleValue;	// IMP=0x000000000006dac7
- (float)floatValue;	// IMP=0x000000000006dab2
- (unsigned long long)unsignedLongLongValue;	// IMP=0x000000000006da9f
- (long long)longLongValue;	// IMP=0x000000000006da8c
- (unsigned long long)unsignedLongValue;	// IMP=0x000000000006da79
- (long long)longValue;	// IMP=0x000000000006da66
- (unsigned int)unsignedIntValue;	// IMP=0x000000000006da54
- (int)intValue;	// IMP=0x000000000006da42
- (unsigned short)unsignedShortValue;	// IMP=0x000000000006da2e
- (short)shortValue;	// IMP=0x000000000006da1a
- (unsigned char)unsignedCharValue;	// IMP=0x000000000006da09
- (BOOL)charValue;	// IMP=0x000000000006d9f8
- (const char *)objCType;	// IMP=0x000000000006d9eb
- (void)getValue:(void *)arg1;	// IMP=0x000000000006d9d8
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x000000000006d9c0
- (id)copy;	// IMP=0x000000000006d9ae
- (_Bool)_tryRetain;	// IMP=0x000000000006d9a6
- (_Bool)_isDeallocating;	// IMP=0x000000000006d99e
- (unsigned long long)retainCount;	// IMP=0x000000000006d993
- (id)autorelease;	// IMP=0x000000000006d98a
- (oneway void)release;	// IMP=0x000000000006d984
- (id)retain;	// IMP=0x000000000006d97b
- (void)dealloc;	// IMP=0x000000000006d975
- (id)init;	// IMP=0x000000000006d955

@end
