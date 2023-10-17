//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupFeatureSafariExtension : NSObject
{
    NSString *_contentProviderTeamID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000101a9
- (void).cxx_destruct;	// IMP=0x00200000000104f0
@property(readonly, copy, nonatomic) NSString *contentProviderTeamID; // @synthesize contentProviderTeamID=_contentProviderTeamID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001033d
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000102b7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001023e
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000101b1
- (id)initWithContentProviderTeamID:(id)arg1;	// IMP=0x0010000000010136

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
