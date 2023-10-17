//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SharingChannelEndpoint
{
}

+ (id)_propertySettersForRelayChannelEndpoint;	// IMP=0x00400000002f7d97
+ (id)_properties;	// IMP=0x00100000002f7c9b
+ (id)_predicateForHasOutstandingMessages;	// IMP=0x00100000002f7c74
+ (id)_predicateForType:(unsigned long long)arg1;	// IMP=0x00100000002f7c3e
+ (id)_predicateForSharingTransportIdentifier:(id)arg1;	// IMP=0x00100000002f7c1b
+ (_Bool)deleteEndpointForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f79bf
+ (_Bool)deleteEndpoint:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f7942
+ (id)_endpointForProperties:(id)arg1 values:(id *)arg2;	// IMP=0x00100000002f7838
+ (id)endpointsWithOutstandingMessagesInDatabase:(id)arg1;	// IMP=0x00100000002f7682
+ (id)endpointsInDatabase:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x00100000002f74c9
+ (id)endpointsInDatabase:(id)arg1;	// IMP=0x00100000002f7355
+ (id)sharingEndpointForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f715b
+ (_Bool)insert:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f70bf
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002f6f9e
+ (id)databaseTable;	// IMP=0x00100000002f6f23
- (id)relayChannelEndpoint;	// IMP=0x00400000002f7b87
- (_Bool)deleteFromDatabase;	// IMP=0x00100000002f6f30
- (id)initWithSharingChannelEndpoint:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f6b63

@end
