//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFNumber
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x008000000005e0a8
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000005dfe5
- (long long)compare:(id)arg1;	// IMP=0x000000000005e9e8
- (long long)_reverseCompare:(id)arg1;	// IMP=0x000000000005e9bc
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;	// IMP=0x000000000005e8c0
- (long long)_cfNumberType;	// IMP=0x000000000005e7ab
- (unsigned long long)_cfTypeID;	// IMP=0x000000000005e7a5
- (_Bool)boolValue;	// IMP=0x000000000005e715
- (unsigned long long)unsignedIntegerValue;	// IMP=0x000000000005e708
- (long long)integerValue;	// IMP=0x000000000005e6fb
- (double)doubleValue;	// IMP=0x000000000005e6ac
- (float)floatValue;	// IMP=0x000000000005e65e
- (unsigned long long)unsignedLongLongValue;	// IMP=0x000000000005e610
- (long long)longLongValue;	// IMP=0x000000000005e5c2
- (unsigned long long)unsignedLongValue;	// IMP=0x000000000005e574
- (long long)longValue;	// IMP=0x000000000005e526
- (unsigned int)unsignedIntValue;	// IMP=0x000000000005e4d9
- (int)intValue;	// IMP=0x000000000005e48c
- (unsigned short)unsignedShortValue;	// IMP=0x000000000005e43e
- (short)shortValue;	// IMP=0x000000000005e3f0
- (unsigned char)unsignedCharValue;	// IMP=0x000000000005e3a2
- (BOOL)charValue;	// IMP=0x000000000005e354
- (const char *)objCType;	// IMP=0x000000000005e326
- (void)getValue:(void *)arg1;	// IMP=0x000000000005e276
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005e269
- (id)stringValue;	// IMP=0x000000000005e1d2
- (id)description;	// IMP=0x000000000005e145
- (id)descriptionWithLocale:(id)arg1;	// IMP=0x000000000005e0ab
- (unsigned long long)retainCount;	// IMP=0x000000000005e0a3
- (_Bool)_isDeallocating;	// IMP=0x000000000005e093
- (_Bool)_tryRetain;	// IMP=0x000000000005e082
- (oneway void)release;	// IMP=0x000000000005e078
- (id)retain;	// IMP=0x000000000005e06b
- (unsigned long long)hash;	// IMP=0x000000000005e066
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e021
- (_Bool)isEqualToNumber:(id)arg1;	// IMP=0x000000000005e000
- (_Bool)isNSNumber__;	// IMP=0x000000000005dffd

@end

