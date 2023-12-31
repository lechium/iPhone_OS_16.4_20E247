//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshResponse.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface COCapabilityReadResponse : COMeshResponse
{
    NSSet *_capabilities;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000116d5
- (void).cxx_destruct;	// IMP=0x00000000000116ee
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001163a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000113c9
- (id)initWithCapabilities:(id)arg1;	// IMP=0x000000000001134f
- (id)init;	// IMP=0x00000000000112f5

@end

