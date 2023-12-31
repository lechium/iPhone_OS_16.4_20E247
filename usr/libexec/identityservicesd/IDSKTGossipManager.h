//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKTGossipPolicy, IDSKeyTransparencyVerifier, NSSet;

@interface IDSKTGossipManager : NSObject
{
    IDSKTGossipPolicy *_gossipPolicy;	// 8 = 0x8
    IDSKeyTransparencyVerifier *_transparencyVerifier;	// 16 = 0x10
    NSSet *_gossipEnabledServiceIdentifiers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000001b25b0
- (void).cxx_destruct;	// IMP=0x00200000001b3d30
@property(readonly, nonatomic) NSSet *gossipEnabledServiceIdentifiers; // @synthesize gossipEnabledServiceIdentifiers=_gossipEnabledServiceIdentifiers;
@property(readonly, nonatomic) IDSKeyTransparencyVerifier *transparencyVerifier; // @synthesize transparencyVerifier=_transparencyVerifier;
@property(retain, nonatomic) IDSKTGossipPolicy *gossipPolicy; // @synthesize gossipPolicy=_gossipPolicy;
- (unsigned char)maxRecipientMemoryFromBag;	// IMP=0x00100000001b3bb0
- (unsigned char)subsequentGossipChanceFromBag;	// IMP=0x00100000001b3a70
- (unsigned char)firstGossipChanceFromBag;	// IMP=0x00100000001b3930
- (void)sthReceivedFromGossipReceipient:(id)arg1;	// IMP=0x00100000001b36c0
- (id)gossipSTHPayloadForDestinations:(id)arg1 forServiceIdentifier:(id)arg2 fromID:(id)arg3;	// IMP=0x00100000001b29e0
- (_Bool)canGossipOnService:(id)arg1;	// IMP=0x00100000001b2970
- (id);	// IMP=0x00100000001b2840
- (id)init;	// IMP=0x00100000001b26a0
- (id)transparencyVerifierSharedInstance;	// IMP=0x00100000001b2670

@end

