//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileInstallation/MIAppIdentity.h>

@class NSString;

@interface IXApplicationIdentity : MIAppIdentity
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000008d28
+ (id)identitiesForBundleIdentifiers:(id)arg1;	// IMP=0x0010000000008865
@property(readonly, nonatomic) MIAppIdentity *miAppIdentity;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000008f74
- (id)description;	// IMP=0x0010000000008f01
- (id)possibleSerializationsForPlistKey;	// IMP=0x0010000000008e0f
- (id)canonicalSerializationForPlistKey;	// IMP=0x0010000000008da3
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithPlistKeySerialization:(id)arg1;	// IMP=0x0010000000008ac3
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)arg1;	// IMP=0x0010000000008aaa
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000008a91
- (id)initWithBundleIdentifier:(id)arg1 personaUniqueString:(id)arg2;	// IMP=0x0010000000008a37

@end

