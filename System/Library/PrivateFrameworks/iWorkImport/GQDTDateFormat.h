//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDTDateFormat : NSObject
{
    struct __CFString *mFormatString;	// 8 = 0x8
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x0010000000050de4
- (struct __CFString *)formatString;	// IMP=0x0000000000050e84
- (void)dealloc;	// IMP=0x0000000000050e45
- (id)initWithFormatString:(struct __CFString *)arg1;	// IMP=0x0000000000050df1
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x0000000000050e8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
