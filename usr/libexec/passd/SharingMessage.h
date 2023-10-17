//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharingMessage
{
}

+ (id)properties;	// IMP=0x004000000018dbd9
+ (id)_propertyValuesForSharingMessage:(id)arg1 storePayload:(_Bool)arg2;	// IMP=0x001000000018d8a1
+ (id)_sharingMessageForProperties:(id)arg1 values:(id *)arg2;	// IMP=0x001000000018d5cf
+ (id)_predicateForPayloadHash:(id)arg1;	// IMP=0x001000000018d5ac
+ (id)_predicateForCreatedAtOlderThenDate:(id)arg1;	// IMP=0x001000000018d544
+ (id)_predicateForNonNullPayload;	// IMP=0x001000000018d524
+ (id)_predicateForMessageIdentifier:(id)arg1;	// IMP=0x001000000018d501
+ (id)_predicateForTransportIdentifier:(id)arg1;	// IMP=0x001000000018d4de
+ (id)_sharingMessagesWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018d1db
+ (id)allOutstandingSharingMessagesInDatabase:(id)arg1;	// IMP=0x001000000018cf5f
+ (void)deleteSharingMessagesOlderThen:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018cec6
+ (void)deleteSharingMessagesForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018ce2d
+ (void)deleteSharingMessageForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018cd94
+ (id)sharingMessageForMessageIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018cc61
+ (id)sharingMessagesForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018cbb4
+ (id)transportIdentifierForSharingMessage:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000018cade
+ (_Bool)hasSharingMessage:(id)arg1 transportIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000018c83e
+ (void)insertOrUpdateSharingMessages:(id)arg1 storePayloads:(_Bool)arg2 transportIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x001000000018c4ca
+ (id)databaseTable;	// IMP=0x001000000018c368
- (id)sharingMessage;	// IMP=0x004000000018d333
- (void)updateWithSharingMessage:(id)arg1 storePayload:(_Bool)arg2;	// IMP=0x001000000018c44a
- (id)initWithSharingMessage:(id)arg1 storePayload:(_Bool)arg2 forTransportIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x001000000018c375

@end
