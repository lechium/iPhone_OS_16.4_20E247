//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameSettingsInternal
{
    NSString *_bundleID;	// 8 = 0x8
    long long _allowFriendListAccess;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000110c22
+ (id)secureCodedPropertyKeys;	// IMP=0x0010000000110b43
- (void).cxx_destruct;	// IMP=0x0020000000110f4a
@property(nonatomic) long long allowFriendListAccess; // @synthesize allowFriendListAccess=_allowFriendListAccess;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)allowFriendListAccessString;	// IMP=0x0010000000110ed6
- (id)description;	// IMP=0x0010000000110e20
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000110d15
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000110c2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000110ac5
- (id)serverAllowFriendListAccessValue;	// IMP=0x0010000000110a98
- (id)initWithGameSettings:(id)arg1;	// IMP=0x001000000011092a

@end

