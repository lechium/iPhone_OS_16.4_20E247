//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCLockupFeatureSafariExtension : NSObject
{
    NSString *_contentProviderTeamID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002411e
- (void).cxx_destruct;	// IMP=0x0000000000024465
@property(readonly, copy, nonatomic) NSString *contentProviderTeamID; // @synthesize contentProviderTeamID=_contentProviderTeamID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000242b2
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002422c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000241b3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024126
- (id)initWithContentProviderTeamID:(id)arg1;	// IMP=0x00000000000240ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

