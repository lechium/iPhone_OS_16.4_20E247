//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshNotification.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface COCapabilityUpdateNotification : COMeshNotification
{
    NSSet *_capabilities;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000082951
- (void).cxx_destruct;	// IMP=0x000000000008296a
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000828b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000082645
- (id)initWithCapabilities:(id)arg1;	// IMP=0x00000000000825cb

@end

