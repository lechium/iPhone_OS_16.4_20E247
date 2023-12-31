//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGroupEncryptionKeyManager, NSString;
@protocol IDSMultiplexerTransportParticipantIDConverter;

@interface IDSMultiplexerGroupSessionTransport : NSObject
{
}

- (void)invalidate;	// IMP=0x002000000019f600
- (void)purgeQUICConnectionsForParticipants:(id)arg1;	// IMP=0x001000000019f5c0
@property(retain, nonatomic) id <IDSMultiplexerTransportParticipantIDConverter> participantIDToAliasConverter;
@property(retain, nonatomic) IDSGroupEncryptionKeyManager *fanoutEncryptionManager;
- (void)setPacketBufferReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000019f4e0
- (_Bool)tryConsumePacketBuffer:(CDStruct_dc2926a3 *)arg1;	// IMP=0x001000000019f4c0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000019f470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

