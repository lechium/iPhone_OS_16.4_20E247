//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface COTimerDismissRequest : COMeshRequest
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000489e
- (void).cxx_destruct;	// IMP=0x00000000000048b7
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004803
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004768
- (id)initWithTimerIdentifier:(id)arg1;	// IMP=0x00000000000046ee

@end

