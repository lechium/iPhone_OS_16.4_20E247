//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface APEventSessionActiveState : NSObject
{
    NSMutableDictionary *_activeSessions;	// 8 = 0x8
    double _activeSessionStartTime;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000f4b26
- (void).cxx_destruct;	// IMP=0x00200000000f4ce0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000f4c41
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000f4b2e

@end

