//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSNumber.h"

__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone *zoneForInstance;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000525479
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000525560
- (void)getValue:(void *)arg1;	// IMP=0x00000000005254fe
- (const char *)objCType;	// IMP=0x0000000000525499
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000525481
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x000000000052545b
- (id)init;	// IMP=0x0000000000525453
- (void)dealloc;	// IMP=0x000000000052544d
- (_Bool)_tryRetain;	// IMP=0x0000000000525445
- (_Bool)_isDeallocating;	// IMP=0x000000000052543d
- (oneway void)release;	// IMP=0x0000000000525437
- (unsigned long long)retainCount;	// IMP=0x000000000052542a
- (id)retain;	// IMP=0x0000000000525421
- (id)autorelease;	// IMP=0x0000000000525418

@end

